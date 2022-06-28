/*9. Escreva um programa em C que declare e inicialize (da forma que voc� quiser) um n�mero real,
um n�mero inteiro e uma string. Ele dever�:
a) imprimir os endere�os e os valores de cada uma dessas vari�veis. Lembre-se de que o
formato %p mostra o formato hexadecimal (base 16) de endere�os de mem�ria;
b) desenhar um diagrama da mem�ria mostrando a localiza��o e valores de cada vari�vel.*/

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
	
	printf("O endere�o do n�mero inteiro �: %p \n", NumI); 
	
	printf("O valor do n�mero inteiro acessado pelo ponteiro �: %d \n", *NumI);
	fflush(stdin);	
	
	printf("O endere�o do n�mero real �: %p \n", NumR); 
	
	printf("O valor do n�mero real acessado pelo ponteiro �: %.2f \n", *NumR);
	fflush(stdin);
	
	printf("O endere�o do nome �: %p \n", Nome);
			
	printf("O valor de string acessado pelo ponteiro �: %s \n", Nome);
	
	while(*Nome){
		printf("%s", *Nome);
		Nome++;
	}

return 0;
}
