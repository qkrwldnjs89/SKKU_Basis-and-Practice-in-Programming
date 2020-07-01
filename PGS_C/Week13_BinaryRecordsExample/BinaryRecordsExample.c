#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) 
{
	int x[2] = {10, 20};
	FILE *f1Ptr = fopen("ascii.dat", "w");
	FILE *f2Ptr = fopen("binary.dat", "wb");
	
	fprintf(f1Ptr, "%d %d", x[0], x[1]);
	fwrite(&x, sizeof(int), 2, f2Ptr);
	
	fclose(f1Ptr); fclose(f2Ptr);
	return 0;
}
