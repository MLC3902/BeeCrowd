#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	int A, B, C, Maior_AB, Maior_final;
	
	scanf("%d", &A);
	scanf("%d", &B);
	scanf("%d", &C);
	
	Maior_AB = (A+B+ abs(A-B))/2;
	
	Maior_final = (Maior_AB+C+ abs(Maior_AB - C))/2;
	
	printf("%d eh o maior\n", Maior_final);
	return 0;
}
