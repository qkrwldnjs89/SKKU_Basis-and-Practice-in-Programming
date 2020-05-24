#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	int randomNumber[12], i = 0, j, smallest, largest, sum = 0;
	srand(time(NULL));
	
	while (i < 12)
	{
		randomNumber[i] = rand() % 101;
		i++;
	}
	printf("Array: \n");
	for (j = 0; j < 12 ;j++)
	{
		printf("%3d \n", randomNumber[j]);
		if (j == 0)
		{
			smallest = randomNumber[0];
		}
		else if (smallest > randomNumber[j])
		{
			smallest = randomNumber[j];
		}
		if (j == 0)
		{
			largest = randomNumber[0];
		}
		else if (largest < randomNumber[j])
		{
			largest = randomNumber[j];
		}
						
		sum += randomNumber[j];
	}
	printf("Largest value is %d \n", largest);
	printf("Smallest value is %d \n", smallest);
	printf("Average is %f", (double)sum / 12);
	
	return 0;
}
