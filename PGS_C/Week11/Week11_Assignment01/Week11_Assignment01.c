#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) 
{
	int numArr[10];
	int i;
	int * head = &numArr[0];
	int * tail = &numArr[9];
	int tof = 0;
	
	for (i = 0; i < 10; i++)
	{
		printf("Enter number %d: ", i);
		scanf("%d", &numArr[i]);
	}
	
	printf("User entered: ");
	for (i = 0; i < 10; i++)
		printf("%d ", numArr[i]);
		
	for (i = 0; i < (10 / 2); i++)
	{
		tof = (*(head++) == *(tail--)) ? tof + 1 : tof;
	}
	if (tof == (10 / 2))
		printf("\nYES!!! It is a palindrome!");
	else
		printf("\nNO!!! It is not a palindrome!");
	return 0;
}
