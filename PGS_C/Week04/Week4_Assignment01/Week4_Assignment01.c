#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	char option;
	int won;

	for (;;){
		printf("Please choose which currency you want to convert: \n");
		printf("A - Korean Won to US Dollar (Exchange Rate: 0.000905)\n");
		printf("B - Korean Won to Euro (Exchange Rate: 0.000807350908)\n");
		printf("C - Korean Won to Japanese Yen (Exchange Rate: 0.0919061643)\n");
		printf("D - Korean Won to Chinese RMB (Exchange Rate: 0.00603703605)\n");
		printf("E - Quit\nEnter your option: ");
		scanf("%c", &option);
		getchar();
		if (option == 'E'){
			break;
		}
		switch(option){
			case 'A': printf("Enter the amount in Korean Won: ");
					  scanf("%d", &won);
					  getchar();
					  printf("%d Won equals to %f USD\n", won, (float) won * 0.000905);break;
			case 'B': printf("Enter the amount in Korean Won: ");
					  scanf("%d", &won);		
					  getchar();
					  printf("%d Won equals to %f Euro\n", won, (float) won * 0.000807350908);break;
			case 'C': printf("Enter the amount in Korean Won: ");
					  scanf("%d", &won);
					  getchar();
				      printf("%d Won equals to %f Yen\n", won, (float) won * 0.0919061643);break;
			case 'D': printf("Enter the amount in Korean Won: ");
					  scanf("%d", &won);
					  getchar();
					  printf("%d Won equals to %f RMB\n", won, (float) won * 0.00603703605);break;
			default: printf("You entered an invalid input.\n");break;
		}		
		}
	return 0;
}
