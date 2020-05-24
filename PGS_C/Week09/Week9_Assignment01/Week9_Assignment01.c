#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int is_exist(int arr[], int size, int num);
int main(void) 
{
	int arr[10], size;
	int i, num;
	
	srand(time(NULL));
	for (i = 0; i < 10; i++)
	{
		arr[i] = rand() % 89 + 11;
		printf("A[%d]: %d, ", i, arr[i]);
	}
	
	printf("\nEnter the number you want to search: ");
	scanf("%d", &num);
	
	if (is_exist(arr, sizeof(arr) / sizeof(int), num) == 1)
		printf("The number you entered is in the array. \n");
	else
		printf("The number you entered is not in the array. \n");
	
	return 0;
}

int is_exist(int arr[], int size, int num)
{
	int i;
	for (i = 0; i < 10; i++)
	{
		if (num == arr[i])
			return 1;
	}
	return 0;
}
