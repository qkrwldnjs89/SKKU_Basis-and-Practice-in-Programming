#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) 
{
	char shape;
	char a,b,c;
	float radius, width, height;
	printf("Enter the shape: ");
	scanf("%c",&shape);
	
	
	if (shape == 'a')
	{
	printf("Enter the radius of the circle: ");
	scanf("%f",&radius);
	printf("The area of the circle is %f.\n",radius * radius * 3.14);
	}
	else if (shape == 'b')
	{
	printf("Enter the width of the rectangle: ");
	scanf("%f",&width);
	printf("Enter the height of the rectangle: ");
	scanf("%f",&height);
	printf("The area of the rectangle is %f.\n",width * height);
	}
	else if (shape == 'c')
	{
	printf("Enter the width of the triangle: ");
	scanf("%f",&width);
	printf("Enter the height of the triangle: ");
	scanf("%f",&height);
	printf("The area of the Triangle is %f.\n",width * height * 0.5);
	}
	return 0;
}

