#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <stdbool.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) 
{
	char pwd[50];
	printf("Enter your password: ");
	scanf("%s", pwd);
	
	if (strlen(pwd) < 6)
		printf("This is Not a valid password");
	else
	{
		bool tof1 = false, tof2 = false, tof3 = false, tof4 = false;
		int i = 0;
		while (pwd[i] != '\0')
		{
			tof1 = (islower(pwd[i])) ? true : tof1;
			tof2 = (isupper(pwd[i])) ? true : tof2;
			tof3 = (isdigit(pwd[i])) ? true : tof3;
			tof4 = (ispunct(pwd[i])) ? true : tof4;
			i++;
		}
		if (tof1 && tof2 && tof3 && tof4)
			printf("This is a valid password");
		else
			printf("This is Not a valid password");
	}
	return 0;
}
