#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>

int _printf(const char *format, ...)
{
	const char *p;
	va_list arguments;
	register int count = 0;

	va_start(arguments, format);

	for (p = format; *p; p++)
	{
		if (*p == '%')
		{
			p++;
			if (*p == '%')
			{
				printf("%");
				count += 1;
				continue;
			}
			else
		    {
		        printf("%i", va_arg(arguments, int));
		 	    count += 1;   
		    }
		}
		else
		printf("%c", *(p+0));
	    count += 1;
		
	}
	va_end(arguments);
	return (count);
}
