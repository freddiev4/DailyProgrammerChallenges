/*
 * Author	Subhra S. Sarkar
 * GitHub	https://github.com/rurtle
 *
 * Description	The program should take 3 arguments. The first will be a day,
 * 		the second would be month and the third would be year. Given
 * 		such inputs, this program should correctly compute the day of
 * 		the week that date will fall on.
 *
 * Note		Algorithm for dow calculation can be found here -
 * 		https://goo.gl/kiFSPv
 *
 * Limitation	The below implementation works for YYYY > 1752
 *
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * @brief	Given DD, MM & YYYY, this function returns the day of the week
 * 		Return format Sunday = 0, Monday = 1 & so on...
 * 		All other counts start from 1 (instead of 0)
 */
unsigned short calc_dow(unsigned short d, unsigned short m, unsigned short y)
{
	static unsigned short arr[] = {0, 3, 2, 5, 0, 3, 5, 1, 4, 6, 2, 4};
	y -= m < 3;
	return (y + y / 4 - y / 100 + y / 400 + arr[m - 1] + d) % 7;
}

/*
 * Driver function
 */
int main(int argc, char *argv[])
{
	unsigned short dd;		/* Holds the value for day of month */
	unsigned short mm;		/* Holds the value for month 1 <= mm <= 12 */
	unsigned short yyyy;		/* Holds the value for the year */
	printf("Enter date (DD MM YYYY): ");
	scanf("%hu %hu %hu", &dd, &mm, &yyyy);
	switch(calc_dow(dd, mm, yyyy)) {
		case 0:
			printf("Sunday\n");
			break;
		case 1:
			printf("Monday\n");
			break;
		case 2:
			printf("Tuesday\n");
			break;
		case 3:
			printf("Wednesday\n");
			break;
		case 4:
			printf("Thursday\n");
			break;
		case 5:
			printf("Friday\n");
			break;
		case 6:
			printf("Saturday\n");
			break;
		default:
			printf("Unknown day of the week!\n");
	}
	return 0;
}
