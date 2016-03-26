#include <ctype.h>
#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
#include <getopt.h>

#define BUFF_SIZE 1024

static char *invoc_name = NULL;
static char *version_string = "1.0";

static struct option longopts[] = {
    { "version", no_argument, NULL, 'v' },
    { "help", no_argument, NULL, 'h' },
    { NULL, 0, NULL, 0 },
};

static char *numbers[] = {
    "zero", "one", "two", "three", "four",
    "five", "six", "seven", "eight", "nine",
    "ten", "eleven", "twelve", "thirteen",
    "fourteen", "fifteen", "sixteen",
    "seventeen", "eighteen", "nineteen",
};

static char *tens[] = {
    "twenty", "thirty", "forty",
    "fifty", "sixty", "seventy",
    "eighty", "ninety",
};

enum { HUNDRED = 100, THOUSAND = 1000, MILLION = 1000000, MILLIARD = 1000000000, BILLION = 1000000000000 };

static void usage(void);
static void version(void);

static void print_number(int number);
static char *read_line(void);

int main(int argc, char **argv){
    int c;
    invoc_name = argv[0];

    while ( ( c = getopt_long(argc, argv, "hv", longopts, NULL) ) != -1 ) {
        switch (c) {
            case 'h':
                usage();
                exit(EXIT_SUCCESS);
            case 'v':
                version();
                exit(EXIT_SUCCESS);
            default:
                fprintf(stderr, "Try %s --help for more information.\n", invoc_name);
                exit(EXIT_FAILURE);
        }
    }

    if (optind < argc) {
        int number;
        if (sscanf(argv[optind], "%d", &number)) {
            print_number(number);
            puts("");
        }
        else {
            fprintf(stderr, "Invalid number: %s\n", argv[optind]);
            exit(EXIT_FAILURE);
        }
    }
    else {
        int number;
        char *line = NULL; /* will be dynamically allocated by read_line */
        while ( (line = read_line()) != NULL ) {
            if ( sscanf(line, "%d", &number) != 1 ) {
                fprintf(stderr, "Invalid number: %s\n", line);
            }
            else {
                print_number(number);
                puts("");
            }

            free(line); 
        }
    }

    return 0;
}

static void print_number(int number){
    if ( number == INT_MIN ) {
        /* Multiplying it by -1 will result in overflow */
        fprintf(stderr, "Number is too small: %d.\n", number);
        return;
    }
    if ( number < 0 ) {
        printf("minus ");
        number *= -1;
    }

    if (number < 20) {
        printf("%s",numbers[number]);
    }
    else if (number < HUNDRED) {
        printf("%s",tens[number / 10 - 2]);
        number %= 10;
        if (number > 0) {
            printf("-");
            print_number(number);
        }
    }
    else if (number < THOUSAND) {
        printf("%s",numbers[number / HUNDRED]);
        printf("%s"," hundred");
        number %= HUNDRED;
        if (number > 0) {
            printf(" and ");
            print_number(number);
        }
    }
    else if (number < MILLION) {
        print_number(number / 1000);
        printf("%s"," thousand");
        number %= 1000;
        if (number > 0) {
            if (number < HUNDRED)
                printf(" and ");
            else
                printf(", ");
            print_number(number);
        }
    }
    else if (number < MILLIARD) {
        print_number(number / MILLION);
        printf("%s"," million");
        number %= MILLION;
        if (number > 0) {
            if (number < HUNDRED)
                printf(" and ");
            else
                printf(", ");
            print_number(number);
        }
    }
    else if (number < BILLION) {
        print_number(number / MILLIARD);
        printf("%s"," milliard");
        number %= MILLIARD;
        if (number > 0) {
            if (number < HUNDRED)
                printf(" and ");
            else
                printf(", ");
            print_number(number);
        }
    }
}

/* need to free buffer allocated by this after use */
static char *read_line(void){
    char *line = malloc(sizeof(char) * (BUFF_SIZE + 1));
    int c;
    int i = 0;
    int length = BUFF_SIZE;

    if ( line == NULL ) {
        perror("Cannot allocate buffer");
        exit(EXIT_FAILURE);
    }
    
    while ( ( c = getchar() ) != EOF && c != '\n' ) {
        if ( i >= length ) {
            char *tmp = realloc(line, length + BUFF_SIZE);

            if (tmp == NULL) {
                free(line);
                perror("Cannot reallocate buffer");
                exit(EXIT_FAILURE);
            }

            length += BUFF_SIZE;
        }
        line[i++] = c;
    }

    /* if we reached EOF */
    if ( i == 0 ) {
        free(line);
        return NULL;
    }

    line[i] = '\0';

    return line;
}

static void usage(void){
    printf("Usage %s [OPTION]... [number...]\n", invoc_name);
    printf("Convert Arabic numberals to English words.\n");
    puts("");
    puts("Options:");
    printf(" -h, --help        print this help and exit.\n");
    printf(" -v, --version     display version information and exit.\n");
}

static void version(void){
    printf("Numbers v%s\n", version_string);
}
