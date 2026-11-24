#include <stdio.h>
#include <stdlib.h>

#define SIZE 10

int recursiveMaximum(const int array[], int size);

int main(void)
{
	int a[SIZE] = { 23, 8, 91, 45, 12, 67, 89, 34, 5, 72 };
	int maxVal;

	maxVal = recursiveMaximum(a, SIZE);

	printf("Maximum value in the array is: %d\n", maxVal);

	system("pause");
	return 0;
}

int recursiveMaximum(const int array[], int size)
{
	int maxOfRest;

	if (size == 1)
	{
		return array[0];
	}

	maxOfRest = recursiveMaximum(array, size - 1);

	if (array[size - 1] > maxOfRest)
	{
		return array[size - 1];
	}
	else
	{
		return maxOfRest;
	}
}