#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int sequence[52][2] = {0}; 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void shuffle(int deck[][13]);
int main(void) 
{
	int deck[4][13] = {0};
	int i, j;
	int * Player1[5];
	srand(time(NULL));
	shuffle(deck);
	
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 13; j++)
			printf("%3d", deck[i][j]);
		printf("\n");		
	}
	/* 
	i의 0~3은 각각 Spades, Hearts, Diamonds, Clubs 이다.
	j 의 0~12는 카드에 적혀있는 수를 뜻한다.
	0 은 숫자 1로, ACE
	1 ~ 9는 각각 2~10의 숫자. 
	10 -> Jack, 11 -> Queen, 12 -> King 이다.
	*/
	
	// # 첫번째부터 52번째 카드의 정보: 28~51행 
	for (i = 0; i < 52; i++)
	{
		if (sequence[i][1] == 0)
			printf("A");
		else if (sequence[i][1] == 10)
			printf("J");
		else if (sequence[i][1] == 11)
			printf("Q");
		else if (sequence[i][1] == 12)
			printf("K");
		else
			printf("%d", sequence[i][1] + 1);
			
		if (sequence[i][0] == 0)
			printf(" of Spades \n");
		else if (sequence[i][0] == 1)
			printf(" of Hearts \n");
		else if (sequence[i][0] == 2)
			printf(" of Diamonds \n");
		else if (sequence[i][0] == 3)
			printf(" of Clubs \n");
		else
			printf("%d", sequence[i][1] + 1);
	}
	// # 플레이어에게 카드 배분. 
	for (i = 0; i < 5; i++)
		Player1[i] = &sequence[i][0];
			
	printf("=== \n Player1: \n");
	for (i = 0; i < 5; i++)
	{
		if (*(Player1[i] + 1) == 0)
			printf("A");
		else if (*(Player1[i] + 1) == 10)
			printf("J");
		else if (*(Player1[i] + 1) == 11)
			printf("Q");
		else if (*(Player1[i] + 1) == 12)
			printf("K");
		else
			printf("%d", *(Player1[i] + 1) + 1);
			
		if (*Player1[i] == 0)
			printf(" of Spades \n");
		else if (*Player1[i] == 1)
			printf(" of Hearts \n");
		else if (*Player1[i] == 2)
			printf(" of Diamonds \n");
		else if (*Player1[i] == 3)
			printf(" of Clubs \n");
	}
	
	return 0;
}

void shuffle(int deck[][13])
{
	int i;
	for (i = 1; i <= 52; i++)
	{
		int num;
		do
		{
			num = rand() % 52;
		}
		while (deck[num / 13][num % 13] != 0);
		// num / 13 은 0~3의 값을 갖고, num % 13 은 0~12 의 값을 갖는다.
		// do~while 루프는 리스트 안에 입력이 아직 안된 부분을 찾는다. 
		deck[num / 13][num % 13] = i;
		// i를 저장함으로써 몇번째 수인지 나타낸다. 
		sequence[i - 1][0] = num / 13; // 카드의 종류를 기록 
		sequence[i - 1][1] = num % 13; // 카드의 수를 기록 
	}
}
