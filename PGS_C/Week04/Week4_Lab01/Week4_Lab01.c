#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	float grade, sum = 0, count = 0, average;
	for (;;)
	{
		printf("Enter your value: ");
		scanf("%f", &grade);
		if (grade == -1) {
			break;
		}
		sum = sum + grade;
		count++;
	}
	if (count == 0) {
		printf("Average is: 0");
	}
	else
	{
		average = sum / count;
		printf("Average is: %f", average);
	}

	return 0;
}
