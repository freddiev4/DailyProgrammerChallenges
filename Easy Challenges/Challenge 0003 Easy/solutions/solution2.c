// Solution by oz123, github.com/oz123
//
// based on the UI of solution 2 with better decrypt and encrypt function
// see discussion in http://codereview.stackexchange.com/a/2354/19834
//
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


int encode(int ch, int key) {
    if (islower(ch)) ch =  (ch-'a' + key) % 26 + 'a';
    else if (isupper(ch)) ch = (ch-'A' + key) % 26 + 'A';
    return ch;
}

int decode(int ch, int key) {
    return encode(ch, -key);
}

int main(int argc, char **argv){
    int ch;
    int key = 3; /* shift for Caesar cipher */
    int mode = ENCRYPT;
    invoc_name = argv[0];

		while ( ( ch = getopt_long(argc, argv, "edk:hv", longopts, NULL) ) != -1 ) {
			int valid_key = 0;
			switch (ch) {
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

		if (mode == ENCRYPT)  {
		while (EOF != (ch=getchar()))
			putchar(encode(ch, key));
		} else {
		while (EOF != (ch=getchar()))
			putchar(decode(ch, key));
		}

    return 0;
}

static void usage(void){
	// the variable invoc_name name is available from the main scope
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
