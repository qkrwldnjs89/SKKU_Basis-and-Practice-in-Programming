#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void PrintMenu(void);
int AskUserInput(void);
void DisplayResult(int result);
int main(void){
	PrintMenu();
	int input = AskUserInput();
	int result = pow(input,3);
	DisplayResult(result);
	return 0;
}

void PrintMenu(void)
{
	printf("Please input an integer: ");
}
int AskUserInput(void)
{
	int input;
	scanf("%d", &input);
	printf("You entered: %d \n", input);
	return input;
}
void DisplayResult(int result)
{
	printf("The result is: %d", result);
}
