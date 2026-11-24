#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

#define SIZE 15

int binarySearch(const int b[], int low, int high, int searchKey);

int main(void)
{
	int a[SIZE];
	int i;
	int searchKey;
	int result;

	for (i = 0; i < SIZE; i++)
	{
		a[i] = 2 * i;
	}

	printf("Enter a search key: ");
	scanf("%d", &searchKey);

	result = binarySearch(a, 0, SIZE - 1, searchKey);

	if (result != -1)
	{
		printf("Found value at subscript %d\n", result);
	}
	else
	{
		printf("Value not found\n");
	}

	system("pause");
	return 0;
}

int binarySearch(const int b[], int low, int high, int searchKey)
{
	int middle;

	if (low > high)
	{
		return -1;
	}

	middle = (low + high) / 2;

	if (searchKey == b[middle])
	{
		return middle;
	}
	else if (searchKey < b[middle])
	{
		return binarySearch(b, low, middle - 1, searchKey);
	}
	else
	{
		return binarySearch(b, middle + 1, high, searchKey);
	}
}