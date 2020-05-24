#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) 
{
	int numbers[45];
	int * pick[6] = {0};
	int i;
	srand(time(NULL));
	for(i = 0; i < 45; i++)
		numbers[i] = i + 1;
	
	for(i = 0; i < 6; i++)
		pick[i] = &numbers[rand() % 45];
	
	printf("%d %d %d %d %d %d", *pick[0], *pick[1], *pick[2], *pick[3], *pick[4], *pick[5]);
	return 0;
}
