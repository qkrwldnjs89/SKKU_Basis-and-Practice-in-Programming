#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) 
{
	FILE * fPtr;
	fPtr = fopen("score.dat", "wb");
	int scr[20];
	int i;
	
	for (i = 0; i < 20; i++)
	{
		printf("Enter the score for student %d: ", i + 1);
		scanf("%d", &scr[i]);
	}
	fwrite(&scr, sizeof(int), 20, fPtr);
	
	fclose(fPtr);
	return 0;
}
