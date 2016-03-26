#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <getopt.h>

static char *invoc_name = NULL;
static char *version_string = "1.0";

static int option_flags = 0;
enum { CHARACTERS = 1, WORDS = 2, VOWELS = 4, LINES = 8, ALL = 15 };

static struct option longopts[] = {
    { "characters", no_argument, NULL, 'c' },
    { "lines", no_argument, NULL, 'l' },
    { "words", no_argument, NULL, 'w' },
    { "vowels", no_argument, NULL, 'v' },
    { "help", no_argument, NULL, 'h' },
    { "version", no_argument, NULL, 'x' },
    { NULL, 0, NULL, 0 },
};

static void usage(void);
static void version(void);

static void print_counts(char *filename);

int main(int argc, char **argv){
    int c;
    invoc_name = argv[0];

    while ( ( c = getopt_long(argc, argv, "clwvhx", longopts, NULL) ) != -1 ) {
        switch (c) {
            case 'c':
                option_flags |= CHARACTERS;
                break;
            case 'l':
                option_flags |= LINES;
                break;
            case 'w':
                option_flags |= WORDS;
                break;
            case 'v':
                option_flags |= VOWELS;
                break;
            case 'h':
                usage();
                exit(EXIT_SUCCESS);
            case 'x':
                version();
                exit(EXIT_SUCCESS);
            case '?':
                fprintf(stderr, "Try %s --help for more information.\n",
                        invoc_name);
                exit(EXIT_FAILURE);
            default:
                /* printf("%d\n", option_flags); */
                break;
        }
    }

    /* display all but vowels - same as real wc */
    if ( ! option_flags )
        option_flags = ALL ^ VOWELS;

    if ( optind == argc )
        print_counts(NULL);
    else {
        int i;
        for (i = optind; i < argc; i++)
            print_counts(argv[i]);
    }

    return 0;
}

static void print_counts(char *filename){
    /* defaults to stdin with filename == NULL */
    int c;
    int vowel_count = 0;
    int line_count = 0;
    int word_count = 0;
    int character_count = 0;

    FILE *fp = stdin;

    if ( filename != NULL ) {
        fp = fopen(filename, "r");

        if ( fp == NULL ) {
            perror("Cannot open file");
            return;
        }
    }

    int in_word = 1;
    while ( ( c = fgetc(fp) ) != EOF ) {
        if ( c == '\n' )
            line_count++;

        if (!isgraph(c)) {
            if (in_word == 1 && character_count > 0)
                word_count++;
            in_word = 0;
        }
        else {
            in_word = 1;
        }

        if ( c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'
          || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
            vowel_count++;

        character_count++;
    }

    if (in_word == 1 && character_count > 0)
        word_count++;

    if ( option_flags & CHARACTERS)
        printf(" %d", character_count);
    if ( option_flags & WORDS)
        printf(" %d", word_count);
    if ( option_flags & LINES)
        printf(" %d", line_count);
    if ( option_flags & VOWELS)
        printf(" %d", vowel_count);
    if ( filename != NULL )
        printf(" %s", filename);
    puts("");

    if ( filename != NULL )
        fclose(fp);
}

static void usage(void){
    printf("Usage: %s [SHORT-OPTION]... [FILENAME]...\n", invoc_name);
    printf("   or: %s [LONG-OPTION]... [FILENAME]...\n", invoc_name);
    printf("Counts various aspects of files. Will read input from stdin\n"
           "if no files are specified. By default, will count the number\n"
           "of characters, words and lines and output them in that order.\n");
    printf("\n");
    printf("    -c, --characters   count the number of characters\n");
    printf("    -l, --lines        count the number of lines\n");
    printf("    -w, --words        count the number of words\n");
    printf("    -v, --vowels       count the number of vowels\n");
    printf("    -h, --help         display this help and exit\n");
    printf("        --version      display version information and exit\n");
}

static void version(void){
    printf("Word Count v%s\n", version_string);
}
