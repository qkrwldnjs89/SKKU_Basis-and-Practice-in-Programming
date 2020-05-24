#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) 
{
	int numArr[10];
	int i;
	int * head = &numArr[0];
	int * tail = &numArr[9];
	bool tof = true;
	
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
		if (*head != *tail)
		{
			tof = false;
			break;
		}
		head++; tail--;
	}
	if (tof == true)
		printf("\nYES!!! It is a palindrome!");
	else
		printf("\nNO!!! It is not a palindrome!");
		
	return 0;
}
