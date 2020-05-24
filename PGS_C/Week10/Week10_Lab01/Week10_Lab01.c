#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) 
{
	int a[10] = {2, 5, 8, 1, 4, 7, 3, 10, 6, 9};
	int * MaxPtr, * MinPtr;
	int i;
	MaxPtr = &a[0];
	MinPtr = &a[0];
	
	int largest = *MaxPtr, smallest = *MinPtr;
	
	for (i = 0; i < sizeof(a) / sizeof(int); i++)
	{
		largest = (*MaxPtr > largest) ? *MaxPtr : largest;
		smallest = (*MinPtr < smallest) ? *MinPtr : smallest;
		MaxPtr++; MinPtr++;
	}
	
	for (i = 0; i < sizeof(a) / sizeof(int); i++)
	{
		if (a[i] == largest)
			MaxPtr = &a[i];
		if (a[i] == smallest)
			MinPtr = &a[i];
	}
	
	
	printf("Value of the item MaxPtr pointing at: %d \n", *MaxPtr);
	printf("Value of the item MinPtr pointing at: %d \n", *MinPtr);  
	return 0;
}
