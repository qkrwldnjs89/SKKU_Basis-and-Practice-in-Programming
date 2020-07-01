#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
// Week13_Lab01 에서 만들어진 score.dat 파일을 이용합니다. 
int main(void) 
{
	FILE * fPtr;
	fPtr = fopen("score.dat", "rb+");
	int x[20];
	int i;
	char option = '\0';
	fread(&x, sizeof(int), 20, fPtr);

	while(option != '3')
	{
		printf("1. Read and display all data from \"score.dat\". \n");
		printf("2. Multiply all the numbers in \"score.dat\" by 2. \n");
		printf("3. Quit. \nEnter your option: ");
		option = getche();
		printf("\n");
		switch(option)
		{
			case '1':
				for (i = 0; i < 20; i++)
					printf("%d ", x[i]);
				printf("\n");
				break;
			case '2':
				for (i = 0; i < 20; i++)
					x[i] *= 2;
				rewind(fPtr);
				fwrite(&x, sizeof(int), 20, fPtr);
				break;
			case '3':
				break;
		}
	}
	
	fclose(fPtr);
	return 0;
}
