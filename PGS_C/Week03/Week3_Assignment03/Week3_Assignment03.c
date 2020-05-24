#include <stdio.h>
#include <stdlib.h>
int main(void) 
{
	int Date, MM, DD, YYYY;
	printf("Input a date: ");
	scanf("%d",&Date);
	MM = Date / 1000000;
	Date %= 1000000;
	DD = Date / 10000;
	YYYY = Date % 10000;
	if (DD % 10 == 1)
	{switch(MM)
		{case 1: printf("%dst January %d",DD ,YYYY);break;
		case 2: printf("%dst February %d",DD ,YYYY);break;
		case 3: printf("%dst March %d",DD ,YYYY);break;
		case 4: printf("%dst April %d",DD ,YYYY);break;
		case 5: printf("%dst May %d",DD ,YYYY);break;
		case 6: printf("%dst June %d",DD ,YYYY);break;
		case 7: printf("%dst July %d",DD ,YYYY);break;
		case 8: printf("%dst August %d",DD ,YYYY);break;
		case 9: printf("%dst September %d",DD ,YYYY);break;
		case 10: printf("%dst October %d",DD ,YYYY);break;
		case 11: printf("%dst November %d",DD ,YYYY);break;
		case 12: printf("%dst December %d",DD ,YYYY);break;}}
	else if (DD % 10 == 2)
	{switch(MM)
		{case 1: printf("%dnd January %d",DD ,YYYY);break;
		case 2: printf("%dnd February %d",DD ,YYYY);break;
		case 3: printf("%dnd March %d",DD ,YYYY);break;
		case 4: printf("%dnd April %d",DD ,YYYY);break;
		case 5: printf("%dnd May %d",DD ,YYYY);break;
		case 6: printf("%dnd June %d",DD ,YYYY);break;
		case 7: printf("%dnd July %d",DD ,YYYY);break;
		case 8: printf("%dnd August %d",DD ,YYYY);break;
		case 9: printf("%dnd September %d",DD ,YYYY);break;
		case 10: printf("%dnd October %d",DD ,YYYY);break;
		case 11: printf("%dnd November %d",DD ,YYYY);break;
		case 12: printf("%dnd December %d",DD ,YYYY);break;}}
	else if (DD % 10 == 3)
	{switch(MM)
		{case 1: printf("%drd January %d",DD ,YYYY);break;
		case 2: printf("%drd February %d",DD ,YYYY);break;
		case 3: printf("%drd March %d",DD ,YYYY);break;
		case 4: printf("%drd April %d",DD ,YYYY);break;
		case 5: printf("%drd May %d",DD ,YYYY);break;
		case 6: printf("%drd June %d",DD ,YYYY);break;
		case 7: printf("%drd July %d",DD ,YYYY);break;
		case 8: printf("%drd August %d",DD ,YYYY);break;
		case 9: printf("%drd September %d",DD ,YYYY);break;
		case 10: printf("%drd October %d",DD ,YYYY);break;
		case 11: printf("%drd November %d",DD ,YYYY);break;
		case 12: printf("%drd December %d",DD ,YYYY);break;}}
	else
	{switch(MM)
		{case 1: printf("%dth January %d",DD ,YYYY);break;
		case 2: printf("%dth February %d",DD ,YYYY);break;
		case 3: printf("%dth March %d",DD ,YYYY);break;
		case 4: printf("%dth April %d",DD ,YYYY);break;
		case 5: printf("%dth May %d",DD ,YYYY);break;
		case 6: printf("%dth June %d",DD ,YYYY);break;
		case 7: printf("%dth July %d",DD ,YYYY);break;
		case 8: printf("%dth August %d",DD ,YYYY);break;
		case 9: printf("%dth September %d",DD ,YYYY);break;
		case 10: printf("%dth October %d",DD ,YYYY);break;
		case 11: printf("%dth November %d",DD ,YYYY);break;
		case 12: printf("%dth December %d",DD ,YYYY);break;}}}
