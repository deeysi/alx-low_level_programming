#include "main.h"
/**
 * main - entry point
 *
 * Return: 0
 */
int main(void)
{
	char *putchar;

	for (_putchar = "putchar\n"; *putchar != '\0'; ++putchar)
		_putchar(*putchar);
	return (0);
}
