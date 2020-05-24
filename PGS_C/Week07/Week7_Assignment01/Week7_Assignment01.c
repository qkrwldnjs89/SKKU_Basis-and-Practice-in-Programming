#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) 
{
	int randomNumber[10][8], smallest = 101, largest = -1, sum = 0, i, j;
	srand(time(NULL)); 
	// 난수시드 >> rand 의 초기값을 바꿔준다, 이것이 없을 시 몇번을 돌리던 rand의 값이 같다. 
	// time(NULL) >> 현재시간을 넣는다, 그것을 기준으로 rand 를 돌리기 때문에 매번 달라진다. 
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 8; j++)
		{
			randomNumber[i][j] = rand() % 91 + 10;
		}
	}
	
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 8; j++)
		{
			printf("%3d ", randomNumber[i][j]);
			if (smallest > randomNumber[i][j])
			{
				smallest = randomNumber[i][j];
			}
			if (largest < randomNumber[i][j])
			{
				largest = randomNumber[i][j];
			}
			sum += randomNumber[i][j];
		}
		printf("\n");
	}
	printf("Smallest value is %d \nLargest value is %d \n", smallest, largest);
	printf("Average is %f", (double)sum / 80);
	
	return 0;
}
