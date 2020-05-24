#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void comp(int arr[], int size, int * a, int * b, int * c);
int main(void) 
{
	int arr[15], largest = 0, smallest = 51, sum = 0;
	int i;
	
	srand(time(NULL));
	for (i = 0; i < 15; i++)
	{
		arr[i] = rand() % 46 + 5;
		printf("A[%d]: %d, ", i, arr[i]);
	}
	
	comp(arr, sizeof(arr) / sizeof(int), &largest, &smallest, &sum);
	
	printf("\nThe maximum value of the array: %d \n", largest);
	printf("The minimum value of the array: %d \n", smallest);
	printf("The sum of the array: %d", sum);
	
	return 0;
}

void comp(int arr[], int size, int * a, int * b, int * c)
{
	int i;
	for (i = 0; i < size; i++)
	{
		*a = (arr[i] > *a) ? arr[i] : *a;
		*b = (arr[i] < *b) ? arr[i] : *b;
		*c += arr[i];
	}
}
