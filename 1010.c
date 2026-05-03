#include <stdio.h>


int main()
{
	int codP1, numP1, codP2, numP2;
	float precoP1, precoP2, R1, R2, VLP;	
	
	scanf("%d", &codP1);
	scanf("%d", &numP1);
	scanf("%f", &precoP1);

	scanf("%d", &codP2);
	scanf("%d", &numP2);
	scanf("%f", &precoP2);
	
	R1 = numP1*precoP1; 
	R2 = numP2*precoP2; 
	
	VLP= R1 + R2;

	printf("VALOR A PAGAR: R$ %.2f\n", VLP);
					
	return 0;
}
