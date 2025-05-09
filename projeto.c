#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){ 
	int n;
	float a, b, c, delta, x1, x2;
	int numero1;
	int numero2;
	int resultado;
	float nota1;
	float nota2;
	float nota3;
	float media;
	float cel;
	float fah;
	
	
	
	
	
	
	printf("Resolucao de equacao de segundo grau\n");
	while (1) { // Cria um loop infinito que só será interrompido pelo comando break
        //printf("Resolucao de equacao de segundo grau\n");
		printf("Menu:\n");
        printf("1. Resolver equacao\n");
        printf("2. Diga Ola Mundo\n");
        printf("3. Soma\n");
        printf("4. calcule a media de nota\n");
        printf("5. Conversao de temperatura celsius para fahrenheit\n");
        printf("6. Sair\n");
        printf("Escolha uma opcao: ");
        scanf(" %d", &n); // Lê a opção do usuário,
        
        system("cls || clear");
        
        if(n == 6) {
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
	printf("\nVoltando ao Inicio\n");
        continue;
		} else if(n == 2){
			printf("Hello Mundo\n");
		} else if (n == 3){
			printf("Digite um numero:\n");
	scanf("%d",&numero1);
	printf("Digite outro numero:\n");
	scanf("%d",&numero2);
	resultado = numero1+numero2;
	printf("O resultado:%d\n",resultado);
		} else if(n == 4){
			printf("insira a nota 1:\n");
	scanf("%f",&nota1);
	printf("insira a nota 2:\n");
	scanf("%f",&nota2);
	printf("insira a nota 3:\n");
	scanf("%f",&nota3);
	media = (nota1 + nota2 + nota3) / 3;
	printf("Sua media sera:%.2f\n", media);
	if(media>=7){
		printf("Aprovado");}
	else{
		printf("Reprovado");}
		} else if(n == 5){
			printf("Digite a temperatura em graus celsius:\n");
	scanf("%f",&cel);
	fah = cel * 9/5 + 32;
	printf("A temperatura em fahrenheit sera: %f\n", fah);
		
		}
		printf("\nVoltando ao Menu\n");
        continue;
	
		}
        printf("fim de programa...");
	return 0;
    }
	
	


	
	

