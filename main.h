#ifndef MAIN_H
#define MAIN_H

/**
 * struct format - match the conversion specifiers for printf
 * @identifier: char pointer of the specifier
 * @printer: pointer to function for the conversion specifier
 *
 */

typedef struct format
{
	char *identifier;
	int (*printer)(va_list);
} convert_match;

int _putchar(char c);
int _printf(const char *format, ...);

#endif
