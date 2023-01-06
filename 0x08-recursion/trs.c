#include <stdio.h>

int _strl(char *s)
{
	int len = 0;

	if (*s)
	{
		len++;
		printf("len value is %d\n", len);
		len += _strl(s + len);
		printf("len after calls is %d\n", len);
	}
	printf("len at end is %d\n", len);
	return (len);
}
