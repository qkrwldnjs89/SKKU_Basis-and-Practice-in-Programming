#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>

/*
#include <stdlib.h>
#include <time.h>
은 난수를 만들어주기 위해 참조해야하는 헤더파일
*/ 
int matrix[7][5][10] = {{{6,9,3,2,6,3,2,1,3,6},{3,7,2,8,5,3,1,6,9,5},{0,0,3,7,4,7,4,1,2,1},{2,5,7,9,4,3,2,7,3,8},{2,4,2,1,0,9,8,6,9,6}},
						{{0,5,4,6,6,3,4,4,2,2},{5,7,3,8,3,7,1,2,2,1},{4,7,4,8,9,9,6,2,1,2},{8,6,6,7,6,4,3,2,3,7},{0,2,4,1,5,8,2,3,7,0}},
						{{4,4,2,0,3,6,4,8,3,1},{2,4,5,7,8,5,3,2,1,4},{1,2,1,1,5,9,0,8,7,6},{2,3,4,1,9,9,9,6,8,5},{8,9,8,4,1,7,8,4,3,2}},
						{{6,4,8,4,2,7,2,1,7,7},{8,6,8,9,4,1,7,6,5,3},{4,6,5,4,3,7,2,7,4,5},{1,7,7,4,1,7,4,6,4,2},{7,3,7,8,8,5,4,2,5,6}},
						{{4,4,6,1,7,4,3,2,7,5},{2,2,5,8,2,6,4,6,2,1},{6,4,3,2,6,5,3,3,2,7},{7,7,4,7,3,2,5,7,3,1},{5,5,2,3,6,7,4,4,2,5}},
						{{6,6,7,3,2,4,6,6,5,5},{5,5,4,3,4,3,4,5,5,5},{5,4,5,7,5,8,3,6,2,7},{3,2,5,7,7,9,4,6,4,3},{3,3,6,8,3,5,2,8,8,5}},
						{{3,3,6,9,4,4,3,5,5,3},{5,3,6,9,9,0,3,3,2,2},{2,1,4,9,9,6,4,8,9,0},{4,6,7,8,6,4,7,3,3,7},{5,3,6,4,3,3,5,5,7,3}}
						};

int frequency[10] = {0,0,0,0,0,0,0,0,0,0};



char Menu(void)
{
	char option;
	
	printf("1. Calcuate and display the sum of all elements of the 3-dimesnionaol array. \n");
	printf("2. Calcuate and display the average of all elements of the 3-dimensional array. \n");
	printf("3. Pick one element randomly from the 3-dimesnionaol array. \n");
	printf("4. Display histogram of the elements of the 3-dimesnionaol array. \n");
	printf("5. Quit. \nEnter option: \n");
	option = getche();
	printf("\n");
	
	return option;
}

void CountFrequency(void)
{
	int i, j, k;
	
	for (i = 0; i < 7; i++)
	{
		for (j = 0; j < 5; j++)
		{
			for (k = 0; k < 10; k++)
			{
				frequency[matrix[i][j][k]] += 1;
			}
		}
	}
}

int CalSum(void)
{
	int i, j, k, sum = 0;
	
	for (i = 0; i < 7; i++)
	{
		for (j = 0; j < 5; j++)
		{
			for (k = 0; k < 10; k++)
			{
				sum += matrix[i][j][k];
			}
		}
	}
	
	return sum;
}

float CalAverage(void)
{
	int i, j, k, sum = 0;
	float average;
	
	for (i = 0; i < 7; i++)
	{
		for (j = 0; j < 5; j++)
		{
			for (k = 0; k < 10; k++)
			{
				sum += matrix[i][j][k];
			}
		}
	}
	
	average = (float)sum / 350;
	
	return average;
}

int pickRandom(void)
{
	int i, j, k;
	i = rand() % 7, j = rand() % 5, k = rand() % 10;
	
	return matrix[i][j][k];
}

void DisplayHistogram(void)
{
	int i, j;
	
	for (i = 0; i < 10; i++)
	{
		printf("%d - %d: ", i, frequency[i]);
		for (j = 0; j < frequency[i]; j++)
		{
			printf("*");
		}
		printf("\n");
	}
}

int main(void)
{	CountFrequency();
	int sum = CalSum();
	float average = CalAverage();
		
	char option = Menu();
	if (option == '1')
		printf("Sum = %d\n",sum);
	else if(option == '2')
		printf("Average = %.4f\n",average);
	else if(option == '3')
	{	srand(time(NULL));
		printf("Random item = %d\n",pickRandom());
	}
	else if(option == '4')
		DisplayHistogram();
	else if(option == '5')
		printf("Good bye.\n");
	else
		printf("Wrong option.\n");

	return 0;
}
