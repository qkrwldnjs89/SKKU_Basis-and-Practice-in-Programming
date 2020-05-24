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
	i�� 0~3�� ���� Spades, Hearts, Diamonds, Clubs �̴�.
	j �� 0~12�� ī�忡 �����ִ� ���� ���Ѵ�.
	0 �� ���� 1��, ACE
	1 ~ 9�� ���� 2~10�� ����. 
	10 -> Jack, 11 -> Queen, 12 -> King �̴�.
	*/
	
	// # ù��°���� 52��° ī���� ����: 28~51�� 
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
	// # �÷��̾�� ī�� ���. 
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
		// num / 13 �� 0~3�� ���� ����, num % 13 �� 0~12 �� ���� ���´�.
		// do~while ������ ����Ʈ �ȿ� �Է��� ���� �ȵ� �κ��� ã�´�. 
		deck[num / 13][num % 13] = i;
		// i�� ���������ν� ���° ������ ��Ÿ����. 
		sequence[i - 1][0] = num / 13; // ī���� ������ ��� 
		sequence[i - 1][1] = num % 13; // ī���� ���� ��� 
	}
}
