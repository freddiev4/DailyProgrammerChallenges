#include <stdio.h>
#include <stdlib.h>
#include <getopt.h>

char *invoc_name = NULL;
char *version_number = "1.0";

struct option longopts[] = {
    { "date", required_argument, NULL, 'd' },
    { "bonus", no_argument, NULL, 'b' },
    { "version", no_argument, NULL, 'v' },
    { "help", no_argument, NULL, 'h' },
    { NULL, 0, NULL, 0 },
};

char *weekday[] = {
    "Sunday", "Monday", "Tuesday", "Wednesday",
    "Thursday", "Friday", "Saturday",
};

void usage(void);
void version(void);

int get_doomsday(unsigned int year);
int get_weekday(unsigned int day, unsigned int month, unsigned int year);
int leapyear(unsigned int year);
int valid_date(unsigned int day, unsigned int month, unsigned int year);

int main(int argc, char **argv){
    int c;
    int bonus = 0;
    int success = 0;
    /* St Patrick's day = 17th March */
    unsigned int year = 2016;
    unsigned int month = 3;
    unsigned int day = 17;
    invoc_name = argv[0];

    while ( ( c = getopt_long(argc, argv, "d:bhv", longopts, NULL) ) != -1 ) {
        switch (c) {
            case 'd':
                success = sscanf(optarg, "%u/%u/%u", &day, &month, &year);
                if ( success != 3 || !valid_date(day, month, year) ) {
                    fprintf(stderr, "Invalid date: %s\n", optarg);
                    fprintf(stderr, "Try %s --help for more information.\n", invoc_name);
                    exit(EXIT_FAILURE);
                }
                break;
            case 'b':
                bonus = 1;
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

    if ( bonus == 0 ) {
        int wday = get_weekday(day,month,year);
        printf("%d/%d/%d is a ", day, month, year);
        printf("%s\n", weekday[wday]);
    }
    else {
        /* Calculate the number of times St Patrick's day
         * falls on a Saturday this Century */
        int count = 0;
        for ( year = 2001; year <= 2100; year++ ) {
            if ( get_weekday(day, month, year) == 6 ) {
                count++;
            }
        }

        printf("%d/%d falls on a Saturday %d times this century.\n",
                day, month, count);
    }

    return 0;
}

int get_weekday(unsigned int day, unsigned int month, unsigned int year){
    /*
     * Basic implementation of the Doomsday algorithm
     * see http://ruby.ca/doomsday.html for an explanation
     */
    int doomsday = get_doomsday(year);

    /* In leapyears Jan = 4 and Feb = 29, this is dealt with below*/
    int months_doomsday[] = {
         3, 28,  0,
         4,  9,  6,
        11,  8,  5,
        10,  7, 12,
    };

    int weekday = (day - months_doomsday[month - 1] + doomsday);

    if ( weekday < 0 )
        weekday += 7;
    
    /* 
     * In leap years, Jan and February Doomsday is 4th and 29th
     * This is a correction for the value in the above
     * months_doomsday array
     */
    if ( leapyear(year) && ( month == 2 || month == 1) )
        weekday++;

    weekday %= 7;

    return weekday;
}

int get_doomsday(unsigned int year) {
    /* need to calculate doomsday for arbitrary year */
    int doomsday = 3; /* DD 1900 = WED */
    int two_digit_year = year % 100;
    int difference = ( (year / 100) - 19 ) % 4;

    switch ( difference ) {
        case 0:
            doomsday = 3;
            break;
        case 1:
            doomsday = 2;
            break;
        case 2:
            doomsday = 0;
            break;
        case 3:
            doomsday = 5;
            break;
    }

    /* Calculate Doomsday for this year */
    doomsday += two_digit_year / 12;
    doomsday += two_digit_year % 12;
    doomsday += (two_digit_year % 12) / 4;
    doomsday %= 7;

    return doomsday;
}

int leapyear(unsigned int year){
    /*
     *  Rule for leap years isn't as simple as divisible by four => leap
     * If the year is divisible by 100 then it's not a leap year unless
     * it is also divisible by 400.
     */

    if ( year % 4 != 0 )
        return 0;

    if ( year % 100 != 0 )
        return 1;

    if ( year % 400 != 0 )
        return 0;

    return 1;
}

int valid_date(unsigned int day, unsigned int month, unsigned int year) {
    int days_in_month[12] = {
        31, /* January   */
        29, /* February  */
        31, /* March     */
        30, /* April     */
        31, /* May       */
        30, /* June      */
        31, /* July      */
        31, /* August    */
        30, /* September */
        31, /* October   */
        30, /* November  */
        31, /* December  */
    };

    if ( month == 0 || month > 12)
        return 0;

    if ( day == 0 || day > days_in_month[month - 1] )
        return 0;

    if ( month == 2 && day == 29 && !leapyear(year) )
        return 0;

    return 1;
}

void usage(void){
    printf("Usage %s [SHORT-OPTION]...\n", invoc_name);
    printf("   or: %s [LONG-OPTION]...\n", invoc_name);
    printf("Calculate the weekday of date entered. If no date is given, will calculate St Patrick's day 2016.\n");
    printf("\n");
    printf("    -d=date, --date=date   calculate the weekday of date\n");
    printf("    -b, --bonus            calculate the number of times St Patrick's day is a Saturday, this century.\n");
    printf("    -h, --help             display this help and exit\n");
    printf("    -v, --version          display version information and exit\n");
}

void version(void){
    printf("Weekday v%s\n", version_number);
}

