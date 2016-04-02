#include <stdio.h>
#include <stdlib.h>

#include <getopt.h>
#include <sys/types.h>
#include <dirent.h>
#include <unistd.h>

static char *invoc_name = NULL;
static char *version_string = "1.0";

static struct option longopts[] = {
    { "path", required_argument, NULL, 'p' },
    { "depth", required_argument, NULL, 'd' },
    { "help", no_argument, NULL, 'h' },
    { "version", no_argument, NULL, 'v' },
    { NULL, 0, NULL, 0 },
};


static void usage(void);
static void version(void);

static void print_tree(char *directory, int depth, char *preface);

int main(int argc, char **argv){
    int c;
    int depth = -1;
    char *base_dir = NULL;
    invoc_name = argv[0];
    while ( ( c = getopt_long(argc, argv, "p:d:hv", longopts, NULL) ) != -1 ) {
        switch (c) {
            case 'p':
                base_dir = optarg;
                break;
            case 'd':
                c = sscanf(optarg, "%d", &depth);
                if ( c != 1 ) {
                    fprintf(stderr, "Invalid depth: %s\n", optarg);
                    fprintf(stderr, "Try %s --help for more information.\n", invoc_name);
                    exit(EXIT_FAILURE);
                }
                break;
            case 'h':
                usage();
                exit(EXIT_SUCCESS);
            case 'v':
                version();
                exit(EXIT_SUCCESS);
            case '?':
                fprintf(stderr, "Try %s --help for more information.\n", invoc_name);
                exit(EXIT_FAILURE);
            default:
                break;
        }
    }

    /* default to current directory */
    if ( base_dir == NULL ) {
        base_dir = malloc(sizeof(char) * 2);
        base_dir[0] = '.';
        base_dir[1] = '\0';
    }

    print_tree(base_dir, depth, NULL);

    return 0;
}

static void print_tree(char *directory, int depth, char *preface){
}

static void usage(void){
    printf( "Usage: %s [LONG-OPTION]...", invoc_name);
    printf( "   or  %s [SHORT-OPTION]...", invoc_name);
    printf( "Prints out a tree for a given directory or, if none given, the current directory.");
    printf( "");
    printf( "   -p, --path      create tree of this directory");
    printf( "   -d, --depth     show tree to a depth of d");
    printf( "   -h, --help      display this help and exit");
    printf( "   -v, --version   display version information and exit");
}

static void version(void){
    printf("Directory Tree v%s\n", version_string);
}
