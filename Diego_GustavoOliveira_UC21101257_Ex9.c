/*9. Escreva um programa em C que declare e inicialize (da forma que você quiser) um número real,
um número inteiro e uma string. Ele deverá:
a) imprimir os endereços e os valores de cada uma dessas variáveis. Lembre-se de que o
formato %p mostra o formato hexadecimal (base 16) de endereços de memória;
b) desenhar um diagrama da memória mostrando a localização e valores de cada variável.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int numI=4;
	float numR = 2.3;
	char nome[10];
	
	strcpy(nome,"Gustavo");
	printf("Nome: %s\n", nome);
    
	float *NumR = &numR;
	int *NumI = &numI;
	char *Nome = &nome[10];
	
	printf("O endereço do número inteiro é: %p \n", NumI); 
	
	printf("O valor do número inteiro acessado pelo ponteiro é: %d \n", *NumI);
	fflush(stdin);	
	
	printf("O endereço do número real é: %p \n", NumR); 
	
	printf("O valor do número real acessado pelo ponteiro é: %.2f \n", *NumR);
	fflush(stdin);
	
	printf("O endereço do nome é: %p \n", Nome);
			
	printf("O valor de string acessado pelo ponteiro é: %s \n", Nome);
	
	while(*Nome){
		printf("%s", *Nome);
		Nome++;
	}

return 0;
}
