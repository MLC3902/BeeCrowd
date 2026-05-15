#include <stdio.h>
#include <math.h>

int main()
{
	double A, B, C;
	double tri,circulo, trapezio, quadrado, retangulo;
	scanf("%lf", &A);
	scanf("%lf", &B);
	scanf("%lf", &C);
	
	tri= (A*C)/2;
	printf("TRIANGULO: %.3f\n", tri);

	circulo= pow(C,2)*3.14159;
	printf("CIRCULO: %.3f\n",circulo);
	
	trapezio= ((A+B)*C)/2;
	printf("TRAPEZIO: %.3f\n",trapezio);
	
	quadrado= pow(B, 2);
	printf("QUADRADO: %.3f\n",quadrado);
	
	retangulo=A*B;
	printf("RETANGULO: %.3f\n",retangulo);
	return 0;
}
