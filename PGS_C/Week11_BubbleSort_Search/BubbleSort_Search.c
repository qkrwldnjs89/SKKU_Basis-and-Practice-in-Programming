#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void Swap(int * x, int * y);
void BubbleSort(int arr[], int size);
int * Search(int target, int arr[], int size);
int main(void) 
{
	int test[5] = {9, 8, 4, 2, 1};
	int i;
	int target = 3, * targetPtr = NULL;
	
	BubbleSort(test, sizeof(test) / sizeof(int));
	for (i = 0; i < 5; i++)
		printf("test[%d]: %d \n", i, test[i]);
	
	targetPtr = Search(target, test, sizeof(test) / sizeof(int));
	
	if (targetPtr == NULL)
		printf("Target: %d \nNot Found!!! \n", target);
	else
		printf("Target: %d \nTarget is in array!!! \n", target);
		
	return 0;
}

void Swap(int * x, int * y)
{
	int tmp;
	tmp = *x;
	*x = *y;
	*y = tmp;
}

void BubbleSort(int arr[], int size)
{
	int i, j;
	
	for(i = 0; i < size - 1; i++)
	{
		for(j = 0; j < size - (i + 1); j++)
		{
			if (arr[j] > arr[j + 1])
				Swap(&arr[j], &arr[j + 1]);
		}
	}
}

int * Search(int target, int arr[], int size)
{
	int * result = NULL;
	int i;
	for(i = 0; i < size; i++)
	{
		if (arr[i] == target)
			result = &arr[i];
	}
	
	return result;
}
