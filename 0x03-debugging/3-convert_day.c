#include "main.h"

/**
* convert_day - converts day of month to day of year, without accounting
*
* for leap year
*
* @month: month in number format
*
* @day: day of month
*
* Return: day of year
*/

int convert_day(int month, int day, int year)
{
	int leap;
	
	leap = ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0);
	switch (month)
	{
		case 2:
			day = 31 + day + leap;
			break;
		case 3:
			day = 59 + day +leap;
			break;
		case 4:
			day = 90 + day +leap;
			break;
		case 5:
			day = 120 + day +leap;
			break;
		case 6:
			day = 151 + day + leap;
			break;
		case 7:
			day = 181 + day + leap;
			break;
		case 8:
			day = 212 + day + leap;
			break;
		case 9:
			day = 243 + day +leap;
			break;
		case 10:
			day = 273 + day +leap;
			break;
		case 11:
			day = 304 + day +leap;
			break;
		case 12:
			day = 334 + day +leap;
			break;
		default:
			break;
	}
	return (day);
}

/*
int convert_day(int month, int day, int year)
{
    int i;
    int leap;

    leap = (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0));
    for (i = 1; i < month; i++)
    {
        if (i == 2)
        {
            day += leap ? 29 : 28;
        }
        else if ((i <= 7 && i % 2 == 0) || (i >= 8 && i % 2 == 1))
        {
            day += 30;
        }
        else
        {
            day += 31;
        }
    }
    return (day);
}
*/
