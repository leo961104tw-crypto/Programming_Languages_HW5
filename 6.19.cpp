#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ROLLS 36000

int main(void)
{
	int frequency[13] = { 0 };
	int die1;
	int die2;
	int sum;
	int i;

	srand(time(0));

	for (i = 0; i < ROLLS; i++)
	{
		die1 = 1 + rand() % 6;
		die2 = 1 + rand() % 6;
		sum = die1 + die2;
		frequency[sum]++;
	}

	printf("%s%12s%14s\n", "Sum", "Frequency", "Percentage");

	for (sum = 2; sum <= 12; sum++)
	{
		printf("%3d%12d%13.2f%%\n", sum, frequency[sum],
			(double)frequency[sum] / ROLLS * 100.0);
	}

	printf("\nReasonableness Check:\n");
	printf("Total combinations = 36. Sum 7 has 6/36 (16.67%%),\n");
	printf("so expected count for 7 is about %d (36000 / 6).\n", ROLLS / 6);
	printf("Actual count for 7 is %d.\n", frequency[7]);

	system("pause");
	return 0;
}