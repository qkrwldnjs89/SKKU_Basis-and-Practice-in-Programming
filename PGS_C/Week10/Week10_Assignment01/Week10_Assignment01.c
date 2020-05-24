#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void ArrayReverse(int * InputPtr, int size)
{
	int i;
	for (i = 0; i < size / 2; i++)
	{
		int tmp;
		tmp = InputPtr[i];
		InputPtr[i] = InputPtr[size - (i + 1)];
		InputPtr[size - (i + 1)] = tmp;
	}
	
}
int main(void) 
{
	int Test1[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
	int Test2[6] = {112, 110, 108, 106, 14, 12};
	int Test3[7] = {18, 35, 1024, 23, 68, 51, 51};
	int Test4[0] = {};         // The 4 testing int arrays
	int i;
	
	printf("Test1 contains %d items: ", sizeof(Test1) / sizeof(int));
	for (i = 0; i < sizeof(Test1) / sizeof(int); i++)
		printf("%d ", Test1[i]);
	printf("\n");         // Print Array Test1
	
	printf("Test2 contains %d items: ", sizeof(Test2) / sizeof(int));
	for (i = 0; i < sizeof(Test2) / sizeof(int); i++)
		printf("%d ", Test2[i]);
	printf("\n");         // Print Array Test2
	
	printf("Test3 contains %d items: ", sizeof(Test3) / sizeof(int));
	for (i = 0; i < sizeof(Test3) / sizeof(int); i++)
		printf("%d ", Test3[i]);
	printf("\n");         // Print Array Test3
	
	printf("Test4 contains %d items: ", sizeof(Test4) / sizeof(int));
	for (i = 0; i < sizeof(Test4) / sizeof(int); i++)
		printf("%d ", Test4[i]);
	printf("\n");         // Print Array Test4
	
	ArrayReverse(Test1, sizeof(Test1) / sizeof(int));
	ArrayReverse(Test2, sizeof(Test2) / sizeof(int));
	ArrayReverse(Test3, sizeof(Test3) / sizeof(int));
	ArrayReverse(Test4, sizeof(Test4) / sizeof(int));
	
	printf("Test1 after Reverse: ");
	for (i = 0; i < sizeof(Test1) / sizeof(int); i++)
		printf("%d ", Test1[i]);
	printf("\n");        // Print Array Test1
	
	printf("Test2 after Reverse: ");
	for (i = 0; i < sizeof(Test2) / sizeof(int); i++)
		printf("%d ", Test2[i]);
	printf("\n");        // Print Array Test2
	
	printf("Test3 after Reverse: ");
	for (i = 0; i < sizeof(Test3) / sizeof(int); i++)
		printf("%d ", Test3[i]);
	printf("\n");        // Print Array Test3
	
	printf("Test4 after Reverse: ");
	for (i = 0; i < sizeof(Test4) / sizeof(int); i++)
		printf("%d ", Test4[i]);
	printf("\n");        // Print Array Test4
	
	
	return 0;
}
