#include 'main.h'

/**
*print_alphabet- act as the beginning point
*Return: always return 0
*/

void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;

	}
	_putchar('\n');

}
