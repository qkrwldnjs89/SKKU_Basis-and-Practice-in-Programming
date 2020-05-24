#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void)
{
   char randomNumber1, randomNumber2, randomNumber3;
   srand(time(NULL));   
   
   randomNumber1 = rand() % 6 + 1;
   randomNumber2 = rand() % 6 + 1;
   randomNumber3 = rand() % 6 + 1;

   printf("Result: %d %d %d \n", randomNumber1, randomNumber2, randomNumber3);   
   
   if (randomNumber1 == randomNumber2 && randomNumber2 == randomNumber3 && randomNumber3 == randomNumber1)
   {
      printf("Triple!");
   }
   
   else if (randomNumber1 + randomNumber2 + randomNumber3 >= 4 && randomNumber1 + randomNumber2 + randomNumber3 <= 10)
   {
      printf("SMALL!");
   }
   
   else if (randomNumber1 + randomNumber2 + randomNumber3 >= 11 && randomNumber1 + randomNumber2 + randomNumber3 <= 17)
   {
      printf("BIG!");
   }
   
   
   
   return 0;
}
