#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <string.h>
#include <unlistd.h>
#include "main.h"

/** let us do it
 **/

int _printf(const char *format, ...)
{
	int num_args = strlen(format);

	va_list args;

	int a = 0;

	va_start(args, format);

	for (int i = 0; i < num_args; i++)
	{
		a++;

		if (format[i] == "%%c")
		{
			char x = va_arg(args, char);
			fprintf(stdout, "%c", format[i]);
		}
		else if (format[i] == "%%s")
		{
			char x = va_arg(args, char);
			fprintf(stdout, "%s", format[i]);
		}
	}

	va_end(args);
	return a;
	/**return (write(stdout, &formate, 1)); **/


}
