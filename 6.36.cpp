#include <stdio.h>
#include <stdlib.h>

#define SIZE 80

void stringReverse(const char s[]);

int main(void)
{
	char str[SIZE] = "Hello, world!";

	printf("Original string: %s\n", str);
	printf("Reversed string: ");
	stringReverse(str);
	printf("\n");

	system("pause");
	return 0;
}

void stringReverse(const char s[])
{
	if (s[0] == '\0')
	{
		return;
	}

	stringReverse(&s[1]);
	printf("%c", s[0]);
}