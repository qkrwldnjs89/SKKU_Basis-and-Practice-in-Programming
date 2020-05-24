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
	switch (MM)
	{ 
	case 1:
		switch (DD % 10)
		{ case 1:printf("%dst January %d",DD ,YYYY);break;
		  case 2:printf("%dnd January %d",DD ,YYYY);break;
		  case 3:printf("%drd January %d",DD ,YYYY);break;
		  default:printf("%dth January %d",DD ,YYYY);break;}break;
	case 2:
		switch (DD % 10)
		{ case 1:printf("%dst February %d",DD ,YYYY);break;
		  case 2:printf("%dnd February %d",DD ,YYYY);break;
		  case 3:printf("%drd February %d",DD ,YYYY);break;
		  default:printf("%dth February %d",DD ,YYYY);break;}break;
	case 3:
		switch (DD % 10)
		{ case 1:printf("%dst March %d",DD ,YYYY);break;
		  case 2:printf("%dnd March %d",DD ,YYYY);break;
		  case 3:printf("%drd March %d",DD ,YYYY);break;
		  default:printf("%dth March %d",DD ,YYYY);break;}break;
	case 4:
		switch (DD % 10)
		{ case 1:printf("%dst April %d",DD ,YYYY);break;
		  case 2:printf("%dnd April %d",DD ,YYYY);break;
		  case 3:printf("%drd April %d",DD ,YYYY);break;
		  default:printf("%dth April %d",DD ,YYYY);break;}break;
	case 5:
		switch (DD % 10)
		{ case 1:printf("%dst May %d",DD ,YYYY);break;
		  case 2:printf("%dnd May %d",DD ,YYYY);break;
		  case 3:printf("%drd May %d",DD ,YYYY);break;
	  	  default:printf("%dth May %d",DD ,YYYY);break;}break;
	case 6:
		switch (DD % 10)
		{ case 1:printf("%dst June %d",DD ,YYYY);break;
		  case 2:printf("%dnd June %d",DD ,YYYY);break;
		  case 3:printf("%drd June %d",DD ,YYYY);break;
		  default:printf("%dth June %d",DD ,YYYY);break;}break;
	case 7:
		switch (DD % 10)
		{ case 1:printf("%dst July %d",DD ,YYYY);break;
		  case 2:printf("%dnd July %d",DD ,YYYY);break;
		  case 3:printf("%drd July %d",DD ,YYYY);break;
		  default:printf("%dth July %d",DD ,YYYY);break;}break;
	case 8:
		switch (DD % 10)
		{ case 1:printf("%dst August %d",DD ,YYYY);break;
		  case 2:printf("%dnd August %d",DD ,YYYY);break;
		  case 3:printf("%drd August %d",DD ,YYYY);break;
		  default:printf("%dth August %d",DD ,YYYY);break;}break;
	case 9:
		switch (DD % 10)
		{ case 1:printf("%dst September %d",DD ,YYYY);break;
		  case 2:printf("%dnd September %d",DD ,YYYY);break;
		  case 3:printf("%drd September %d",DD ,YYYY);break;
		  default:printf("%dth September %d",DD ,YYYY);break;}break;
	case 10:
		switch (DD % 10)
		{ case 1:printf("%dst October %d",DD ,YYYY);break;
		  case 2:printf("%dnd October %d",DD ,YYYY);break;
		  case 3:printf("%drd October %d",DD ,YYYY);break;
		  default:printf("%dth October %d",DD ,YYYY);break;}break;
	case 11:
		switch (DD % 10)
		{ case 1:printf("%dst November %d",DD ,YYYY);break;
		  case 2:printf("%dnd November %d",DD ,YYYY);break;
		  case 3:printf("%drd November %d",DD ,YYYY);break;
		  default:printf("%dth November %d",DD ,YYYY);break;}break;
	case 12:
		switch (DD % 10)
		{ case 1:printf("%dst December %d",DD ,YYYY);break;
		  case 2:printf("%dnd December %d",DD ,YYYY);break;
		  case 3:printf("%drd December %d",DD ,YYYY);break;
		  default:printf("%dth December %d",DD ,YYYY);break;}break;
	}
}
