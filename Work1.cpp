#include <stdio.h>

int main(void)
{
	int N, K, M;
	printf("%d:", &N);
	scanf("%d", &N);
	K = N;

	for(;N >= K * K;K--)
	{
		M = K * K;
		if(N >= M)
		{
			printf ("%i", K);
		}
		else
		{
			continue;
		}
	}
				printf ("%i", M);

}
