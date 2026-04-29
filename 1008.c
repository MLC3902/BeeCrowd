#include <stdio.h>
#include <math.h>

int main()
{
	int n_escravo, h_trabalhadas;
	double valor_p_h, salario;
	
	scanf("%d", &n_escravo);
	scanf("%d", &h_trabalhadas);
	scanf("%lf", &valor_p_h);
		
	salario = valor_p_h*h_trabalhadas;
	
	printf("NUMBER = %d\n", n_escravo);
	printf("SALARY = U$ %.2lf\n", salario);
		
	return 0;
}
