#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int GCD(int m, int n);

int main(void) 
{
	int m, n, a;
	printf("Input two integer: ");
	scanf("%d %d", &m, &n);
	printf("M = %d, N = %d \n", m, n);
	if (m < n)
	{
		a = m;
		m = n, n = a;
	}
	printf("GCD = %d", GCD(m, n));

	return 0;
}

int GCD(int m, int n)
{
	if (n == 0)
	{
		return m;
	}
	else
	{
		return GCD(n, m % n);
	}

}
