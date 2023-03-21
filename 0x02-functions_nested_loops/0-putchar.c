#include "_putchar.h"
int main(void)
{
	char *putchar = "_putchar";

	while (*putchar)
	{
		_putchar(*putchar);
		putchar++;
	}
	_putchar('\n');
}
