#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
struct StuInfo{
	char Name[10];
	int IDNo;
	int Exam[2];
	struct StuInfo * NextPtr;
};

void PrintAllName(struct StuInfo Node1)
{
	struct StuInfo * ThisPtr = &Node1;
	while (ThisPtr != NULL)
	{
		printf("%s \n", ThisPtr->Name);
		ThisPtr = ThisPtr->NextPtr;
	}
}

float AverageScore(struct StuInfo Node1)
{
	struct StuInfo * ThisPtr = &Node1;
	float avgSum = 0;
	int cnt = 0;
	while (ThisPtr != NULL)
	{
		avgSum += ( ThisPtr->Exam[0] + ThisPtr->Exam[1] ) / 2;
		cnt++;
		ThisPtr = ThisPtr->NextPtr;
	}
	return (avgSum / (cnt - 1));
}

struct StuInfo * BestStudent(struct StuInfo Node1)
{
	struct StuInfo * ThisPtr = &Node1;
	struct StuInfo * BestStu;
	int largestAvg = -1, avg;
	while (ThisPtr != NULL)
	{
		avg = ( ThisPtr->Exam[0] + ThisPtr->Exam[1] ) / 2;
		if (avg > largestAvg)
		{
			BestStu = ThisPtr;
			largestAvg = avg;
		}
		ThisPtr = ThisPtr->NextPtr;
	}
	
	return BestStu;
}

int main(void)
{
	FILE *fPtr = fopen("lab12_datafile.txt", "r");
	struct StuInfo stdInfo[500];
	struct StuInfo *BestStu;
	int i = 0;
	char input = '\0';
	while ( !feof(fPtr) )
	{
		fscanf(fPtr, "%s %d %d %d", &stdInfo[i].Name, &stdInfo[i].IDNo, &stdInfo[i].Exam[0], &stdInfo[i].Exam[1]);
		stdInfo[i].NextPtr = &stdInfo[i + 1];
		i++;
	}
	
	fclose(fPtr);
	
	while (input != '4')
	{
		printf("1. Display the name of all students. \n");
		printf("2. Display the average score of all students. \n");
		printf("3. Display the name, student ID and the two scores of the best student. \n");
		printf("4. Quit \n");
		printf("Enter your option: ");
		input = getche();
		printf("\n");
		
		switch (input)
		{
			case '1':
				PrintAllName(stdInfo[0]);
				break;
			case '2':
				printf("Average score of all student: %f \n", AverageScore(stdInfo[0]));
				break;
			case '3':
				BestStu = BestStudent(stdInfo[0]);
				printf("Name: %s, Stu#: %d, Exam1: %d, Exam2: %d \n", BestStu->Name, BestStu->IDNo, BestStu->Exam[0], BestStu->Exam[1]);
				break;
			case '4':
				break;
			default :
				printf("Invalid input !!\n");
				continue;				
		}
	}
	
	return 0;
}
