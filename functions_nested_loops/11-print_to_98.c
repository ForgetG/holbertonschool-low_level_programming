#include "main.h"
#include <stdio.h>

void	print_to_98(int n)
{
	if (n < 98)
	{
		for (; n < 98; n++)
		{
			if(n > 9)
				printf("%2d, ", n);
			else
				printf("%d, ", n);
		}
	}
	if (n > 98)
	{
		for (; n > 98; n--)
			printf("%d, ", n);
	}
	else 
		printf("%d\n", n);
}
