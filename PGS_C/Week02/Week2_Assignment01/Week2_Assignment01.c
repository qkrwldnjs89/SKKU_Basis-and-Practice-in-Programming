#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) 
{	float John, Mary,Peter,Jane, result;

	printf("Input John's score : ");
	scanf("%f",&John); 
	printf("Input Mary's score : ");
	scanf("%f",&Mary);
	printf("Input Peter's score : ");
	scanf("%f",&Peter);
	printf("Input Jane's score : ");
	scanf("%f",&Jane);
	result = (John + Mary + Peter + Jane)/4;
	printf("Average : %f",result);
	return 0;
}
