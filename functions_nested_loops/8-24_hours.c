#include "main.h"

/**
 * jack_bauer - prints every minute of a day.
 */

void	jack_bauer(void)
{
	int	hour_ten = '0';
	int	hour_unit = '0';
	int	minute_ten = '0';
	int	minute_unit = '0';

	while (hour_ten <= '2')
	{
		hour_unit = '0';
		while (hour_unit <= '9')
		{
			if (hour_ten == '2' && hour_unit > '3')
				break;
			minute_ten = '0';
			while (minute_ten <= '5')
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
