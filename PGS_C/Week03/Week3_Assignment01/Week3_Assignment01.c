#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) 
{
	int Date, MM, DD, YYYY;
	printf("Input a date: ");
	scanf("%d",&Date);
	MM = Date / 1000000;
	Date %= 1000000;
	DD = Date / 10000;
	YYYY = Date % 10000;
	/* printf("%d.%d.%d",MM,DD,YYYY); */
	if (MM == 1)
	{
		if (DD % 10 == 1)
			{printf("%dst January %d",DD , YYYY);}
		else
			{if (DD % 10 == 2)
				printf("%dnd January %d",DD , YYYY);
			else
				if (DD % 10 == 3)
					printf("%drd January %d",DD , YYYY);
					else
						printf("%dth January %d",DD , YYYY);
			}
		
	}
	else if (MM == 2)
	{
		if (DD % 10 == 1)
			{printf("%dst February %d",DD , YYYY);}
		else
			{if (DD % 10 == 2)
				printf("%dnd February %d",DD , YYYY);
			else
				if (DD % 10 == 3)
					printf("%drd February %d",DD , YYYY);
					else
						printf("%dth February %d",DD , YYYY);
			}
		
	}
	else if (MM == 3)
	{
		if (DD % 10 == 1)
			{printf("%dst March %d",DD , YYYY);}
		else
			{if (DD % 10 == 2)
				printf("%dnd March %d",DD , YYYY);
			else
				if (DD % 10 == 3)
					printf("%drd March %d",DD , YYYY);
					else
						printf("%dth March %d",DD , YYYY);
			}
		
	}
	else if (MM == 4)
	{
		if (DD % 10 == 1)
			{printf("%dst April %d",DD , YYYY);}
		else
			{if (DD % 10 == 2)
				printf("%dnd April %d",DD , YYYY);
			else
				if (DD % 10 == 3)
					printf("%drd April %d",DD , YYYY);
					else
						printf("%dth April %d",DD , YYYY);
			}
		
	}
	else if (MM == 5)
	{
		if (DD % 10 == 1)
			{printf("%dst May %d",DD , YYYY);}
		else
			{if (DD % 10 == 2)
				printf("%dnd May %d",DD , YYYY);
			else
				if (DD % 10 == 3)
					printf("%drd May %d",DD , YYYY);
					else
						printf("%dth May %d",DD , YYYY);
			}
		
	}
	else if (MM == 6)
	{
		if (DD % 10 == 1)
			{printf("%dst June %d",DD , YYYY);}
		else
			{if (DD % 10 == 2)
				printf("%dnd June %d",DD , YYYY);
			else
				if (DD % 10 == 3)
					printf("%drd June %d",DD , YYYY);
					else
						printf("%dth June %d",DD , YYYY);
			}
		
	}
	else if (MM == 7)
	{
		if (DD % 10 == 1)
			{printf("%dst July %d",DD , YYYY);}
		else
			{if (DD % 10 == 2)
				printf("%dnd July %d",DD , YYYY);
			else
				if (DD % 10 == 3)
					printf("%drd July %d",DD , YYYY);
					else
						printf("%dth July %d",DD , YYYY);
			}
		
	}
	else if (MM == 8)
	{
		if (DD % 10 == 1)
			{printf("%dst August %d",DD , YYYY);}
		else
			{if (DD % 10 == 2)
				printf("%dnd August %d",DD , YYYY);
			else
				if (DD % 10 == 3)
					printf("%drd August %d",DD , YYYY);
					else
						printf("%dth August %d",DD , YYYY);
			}
		
	}
	else if (MM == 9)
	{
		if (DD % 10 == 1)
			{printf("%dst September %d",DD , YYYY);}
		else
			{if (DD % 10 == 2)
				printf("%dnd September %d",DD , YYYY);
			else
				if (DD % 10 == 3)
					printf("%drd September %d",DD , YYYY);
					else
						printf("%dth September %d",DD , YYYY);
			}
		
	}
	else if (MM == 10)
	{
		if (DD % 10 == 1)
			{printf("%dst October %d",DD , YYYY);}
		else
			{if (DD % 10 == 2)
				printf("%dnd October %d",DD , YYYY);
			else
				if (DD % 10 == 3)
					printf("%drd October %d",DD , YYYY);
					else
						printf("%dth October %d",DD , YYYY);
			}
		
	}
	else if (MM == 11)
	{
		if (DD % 10 == 1)
			{printf("%dst November %d",DD , YYYY);}
		else
			{if (DD % 10 == 2)
				printf("%dnd November %d",DD , YYYY);
			else
				if (DD % 10 == 3)
					printf("%drd November %d",DD , YYYY);
					else
						printf("%dth November %d",DD , YYYY);
			}
		
	}
	else if (MM == 12)
	{
		if (DD % 10 == 1)
			{printf("%dst December %d",DD , YYYY);}
		else
			{if (DD % 10 == 2)
				printf("%dnd December %d",DD , YYYY);
			else
				if (DD % 10 == 3)
					printf("%drd December %d",DD , YYYY);
					else
						printf("%dth December %d",DD , YYYY);
			}
		
	}
	
	return 0;
}
