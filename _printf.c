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
	va_start(args, format);

	for (int i = 0; i < num_args; i++)
	{
		if (format[i] == "%%c")
		{
			char x = va_arg(args, char);
		printf("%c\n", x);
		}
		/**else if (format[i] == "%%s")
			
			for (int a = 0; va_arg(args[a], char) != "\0"; a++)
**/
	}

	va_end(args);
	return (write(stdout, &formate, 1));


}
