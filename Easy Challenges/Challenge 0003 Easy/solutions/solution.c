// this solutions is broken
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <getopt.h>

static char *invoc_name = NULL;
static char *version_string = "1.0";

static struct option longopts[] = {
    { "decrypt", no_argument, NULL, 'd' },
    { "key", required_argument, NULL, 'k' },
    { "help", no_argument, NULL, 'h' },
    { "version", no_argument, NULL, 'v' },
    { NULL, 0, NULL, 0 },
};

enum { ENCRYPT, DECRYPT };

static void usage(void);
static void version(void);

int main(int argc, char **argv){
    int c;
    int key = 3; /* shift for Caesar cipher */
    int mode = ENCRYPT;
    invoc_name = argv[0];

		while ( ( c = getopt_long(argc, argv, "edk:hv", longopts, NULL) ) != -1 ) {
			int valid_key = 0;
			switch (c) {
				case 'd':
					mode = DECRYPT;
					break;
				case 'k':
					valid_key = sscanf(optarg, "%d", &key);
					if (valid_key != 1) {
						key = 3;
						fprintf(stderr, "Invalid shift, '%s'\n"
								"Falling back to default: %d\n", optarg, key);
					}
					break;
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

		while ( (c = getchar() ) != EOF ) {
			if (isalpha(c)) {
				/* Only valid if character set is ASCII or extension thereof */
				//printf("%c\n", c);
				c = (mode == ENCRYPT) ? (c + key) + 26  : c - key + 26;
				/* deal with wrap-around */
				if (!isalpha(c))
				   c += (mode == ENCRYPT) ? - 26: 26;
			}

			printf("%c", c);
		}

    return 0;
}

static void usage(void){
    printf("Usage: %s [SHORT-OPTION]...\n", invoc_name);
    printf("   or: %s [LONG-OPTION]...\n", invoc_name);
    printf("Run caesar cipher on input and output to standard output.\n");
    printf("\n");
    printf("    -d, --decrypt  decrypt text\n");
    printf("    -k, --key      select shift for cipher (default is 3)\n");
    printf("    -h, --help     display this help and exit\n");
    printf("    -v, --version  display version information and exit\n");
}

static void version(void){
    printf("Caesar cipher %s\n", version_string);
}
