#include <stdio.h>

int main(void)
{
	int A, B, N, i;
	printf("A:");
	scanf("%i", &A);
	printf("B:");
	scanf("%i", &B);
	N = B;
	
	for(i = 0; N > A + 1; i++)
	{
		N--;
		printf("%i\n", N);
	}
	printf("How much Numbers: %d", i);
}
