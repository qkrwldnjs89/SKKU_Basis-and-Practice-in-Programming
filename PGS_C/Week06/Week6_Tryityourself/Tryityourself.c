#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
float Fahrenheit2Celsius(float input);

int main(void) {
	float Celsius1 = 32.0;
	int Celsius2 = 28;
	printf("%f\n", Fahrenheit2Celsius(Celsius1));
	printf("%f\n", Fahrenheit2Celsius(Celsius2));
	// input 으로 int 를 넣더라도 argument coercion 에 의해 float 로 바뀌어 들어간다. 
	return 0;
}

float Fahrenheit2Celsius(float input){
	return input * 1.8 + 32;
}
