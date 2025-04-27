#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main ()
{
	float a, b, c, delta, x1, x2;
	printf("coloque os valores de a, b e c:\n");
	scanf("%f %f %f", &a, &b, &c); // scanf pede para mostrarmos quais numeros vao ser incluidos nas variveis
	delta = (b * b) -4 * a * c; // calculo sempre tem que vir apos, ser inseridos os valores das variaveis
	printf("resultado do valor:%.2f\n", delta); // sempre mostre qual variavel vc esta puxando, e o caracter dela
	if (delta < 0) {
		printf("Nao ha raizes reais:%.2f\n", delta);
	} else if (delta == 0) {
		x1 = (-b + sqrt(delta)) / (2 * a);
		printf("a raiz real repetida é: %.2f\n", x1);
	} else { 
		x1 = (-b + sqrt(delta)) / (2 * a);
		x2 = (-b - sqrt(delta)) / (2 * a);
		printf("As raizes sao: %.2f e %.2f\n", x1, x2);
	}
	
	return 0;
	
        }
	
	


	
	

