#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void PrintMenu(void);
double CurrencyConversion(double AmountInWon, double rate);
void PrintMenu(void);
double AmountInWon, rate;
char option;

int main(void) {
	for (;;){
		PrintMenu();
		scanf("%c", &option);
		getchar();
		if (option == 'E') {break;}
		switch(option){
			case 'A':
				rate = 0.000905;
				printf("Enter the amount in Korean Won: ");
				scanf("%lf", &AmountInWon);getchar();
				double result = CurrencyConversion(AmountInWon, rate);
				printf("%d Won equals to %.6lf USD \n", (int)AmountInWon, result);
				break;
			case 'B':
				rate = 0.000807350908;
				printf("Enter the amount in Korean Won: ");
				scanf("%lf", &AmountInWon);getchar();
				result = CurrencyConversion(AmountInWon, rate);
				printf("%d Won equals to %.12lf Euro \n", (int)AmountInWon, result);
				break;
			case 'C':
				rate = 0.0919061643;
				printf("Enter the amount in Korean Won: ");
				scanf("%lf", &AmountInWon);getchar();
				result = CurrencyConversion(AmountInWon, rate);
				printf("%d Won equals to %.10lf Yen \n", (int)AmountInWon, result);
				break;
			case 'D':
				rate = 0.00603703605;
				printf("Enter the amount in Korean Won: ");
				scanf("%lf", &AmountInWon);getchar();
				result = CurrencyConversion(AmountInWon, rate);
				printf("%d Won equals to %.11lf RMB \n", (int)AmountInWon, result);
				break;
			default: printf("You entered an invalid input.\n");break;
		}
		
	}
	return 0;
}

void PrintMenu(void)
{
	printf("Please choose which currency you want to convert: \n");
	printf("A - Korean Won to US Dollar (Exchange Rate: 0.000905) \n");
	printf("B - Korean Won to Euro (Exchange Rate: 0.000807350908) \n");
	printf("C - Korean Won to Japanese Yen (Exchange Rate: 0.0919061643) \n");
	printf("D - Korean Won to Chinese RMB (Exchange Rate: 0.00603703605) \n");
	printf("E - Quit \nEnter your option: ");
}

double CurrencyConversion(double AmountInWon, double rate)
{
	return AmountInWon * rate;
}
