#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <getopt.h>

#define DEFAULT_MAXIMUM 2000
#define DEFAULT_MINIMUM 0

static char *invoc_name = NULL;
static char *version_string = "1.0";

static struct option longopts[] = {
    { "maximum-number", required_argument, NULL, 't' },
    { "minimum-number", required_argument, NULL, 'l' },
    { "help", no_argument, NULL, 'h' },
    { "version", no_argument, NULL, 'v' },
    { NULL, 0, NULL, 0 },
};

static void usage(void);
static void version(void);
static void print_primes(int min, int max);

int main(int argc, char **argv){
    int c;
    int maximum = DEFAULT_MAXIMUM, minimum = DEFAULT_MINIMUM;
    int success = 0;
    invoc_name = argv[0];

    while ( ( c = getopt_long(argc, argv, "t:l:hv", longopts, NULL) ) != -1 ) {
        switch (c) {
            case 't':
                success = sscanf(optarg, "%d", &maximum);
                if (success != 1) {
                    maximum = DEFAULT_MAXIMUM;
                    fprintf(stderr, "Maximum needs to be a number: '%s'\n", optarg);
                }
                break;
            case 'l':
                success = sscanf(optarg, "%d", &minimum);
                if (success != 1) {
                    maximum = DEFAULT_MINIMUM;
                    fprintf(stderr, "Minimum needs to be a number: '%s'\n", optarg);
                }
                break;
            case 'h':
                usage();
                exit(EXIT_SUCCESS);
            case 'v':
                version();
                exit(EXIT_SUCCESS);
            default:
                fprintf(stderr, "Try %s --help for more information\n", invoc_name);
                exit(EXIT_FAILURE);
        }
    }

    print_primes(minimum, maximum);

    return 0;
}

static void print_primes(int min, int max){
    int *composite_numbers = malloc(sizeof(int) * (max + 1));
    if (composite_numbers == NULL) {
        fprintf(stderr, "Insufficient memory\n");
        exit(EXIT_FAILURE);
    }
    int i;
    enum { PRIME, NON_PRIME };
    memset(composite_numbers, PRIME, (max + 1) * sizeof(int));

    /* Use Sieve of Erastothenes to find primes */
    for (i = 2; i <= max; i++) {
        if ( composite_numbers[i] == NON_PRIME )
            continue;
        if ( i >= min )
            printf("%d\n", i);

        int j;
        for ( j = 2 * i; j <= max; j += i)
            composite_numbers[j] = NON_PRIME;
    }
    free(composite_numbers);
}

static void usage(void){
    printf("Usage %s [SHORT-OPTION]...\n", invoc_name);
    printf("   or: %s [LONG-OPTION]...\n", invoc_name);
    printf("Calculate some prime numbers.\n");
    printf("\n");
    printf("    -t, --maximum-number   calculate up to this number\n");
    printf("    -l, --minimum-number   calculate from this number\n");
    printf("    -h, --help             display this help and exit\n");
    printf("    -v, --version          display version information and exit\n");
    printf("\n");
    printf(" Default maximum number is %d and the default minimum is %d\n",
                DEFAULT_MAXIMUM, DEFAULT_MINIMUM);
}

static void version(void){
    printf("Primes v%s\n", version_string);
}
