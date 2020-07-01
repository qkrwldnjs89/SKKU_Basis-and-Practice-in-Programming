#include <stdio.h>
#include <stdlib.h>
#define SIZE 300
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
struct StuInfo{
	char Name[10];
	int IDNo;
	int Exam[2];
};
int main(void) 
{
	FILE *fPtr = fopen("lab12_datafile.txt", "r");
	struct StuInfo stdInfo[SIZE];
	int stdNo = '\0';
	int i = 0;
	while ( !feof(fPtr) )
	{
		fscanf(fPtr, "%s %d %d %d", &stdInfo[i].Name, &stdInfo[i].IDNo, &stdInfo[i].Exam[0], &stdInfo[i].Exam[1]);
		i++;
	}
	
	fclose(fPtr);
	
	while (stdNo != -1)
	{
		printf("Enter a student no (-1 to quit): ");
		scanf("%d", &stdNo);
		if (stdNo == -1)
			break;
		else
		{
			for (i = 0; i < SIZE; i++)
			{
				if (stdInfo[i].IDNo == stdNo)
				{
					printf("Name: %s, Stu#: %d, Exam1: %d, Exam2: %d \n", stdInfo[i].Name, stdInfo[i].IDNo, stdInfo[i].Exam[0], stdInfo[i].Exam[1]);
					break;			
				}
			}
		}
	}
	return 0;
}
