#include "main.h"

/**
 *
 *
 *
 */

void	jack_bauer(void)
{
	int	hour_ten = '0';
	int	hour_unit = '0';
	int	minute_ten = '0';
	int	minute_unit = '0';

	while (hour_ten < '3')
	{
		hour_unit = '0';
		minute_ten = '0';
		minute_unit = '0';
		while (hour_unit < '4')
		{
			minute_ten = '0';
			minute_unit = '0';
			while (minute_ten < '6')
			{
				minute_unit = '0';
				while (minute_unit <= '9')
				{
					_putchar(hour_ten);
					_putchar(hour_unit);
					_putchar(':');
					_putchar(minute_ten);
					_putchar(minute_unit);
					_putchar('\n');
					minute_unit++;
				}
				minute_ten++;
			}
			hour_unit++;
		}
		hour_ten++;
	}
}
