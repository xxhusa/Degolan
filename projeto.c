#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){ 
	int n;
	float a, b, c, delta, x1, x2;
	printf("Resolucao de equacao de segundo grau\n");
	while (1) { // Cria um loop infinito que só será interrompido pelo comando break
        //printf("Resolucao de equacao de segundo grau\n");
		printf("Menu:\n");
        printf("1. Resolver equacao\n");
        printf("2. Sair\n");
        printf("Escolha uma opcao: ");
        scanf(" %d", &n); // Lê a opção do usuário
        
        if(n == 2) {
        	printf("programa encerrado.\n");
        	break;
        } else if (n == 1) { 
        //printf("Voltando ao Menu\n");
        printf("coloque os valores de a, b e c:\n");
	scanf("%f %f %f", &a, &b, &c); // scanf pede para mostrarmos quais numeros vao ser incluidos nas variveis
	delta = (b * b) -4 * a * c; // calculo sempre tem que vir apos, ser inseridos os valores das variaveis
	printf("valor de delta:%.2f\n", delta); // sempre mostre qual variavel vc esta puxando, e o caracter dela
	if (delta < 0) {
		printf("Nao ha raizes reais:%.2f\n", delta);
	} else if (delta == 0) {
		x1 = (-b + sqrt(delta)) / (2 * a);
		printf("a raiz real repetida: %.2f\n", x1);
	} else { 
		x1 = (-b + sqrt(delta)) / (2 * a);
		x2 = (-b - sqrt(delta)) / (2 * a);
		printf("As raizes sao: %.2f e %.2f\n", x1, x2);
	}
		printf("Voltando ao Menu\n");
        continue;
		}
		}
        printf("fim de programa...");
	return 0;
    }
	
	


	
	

