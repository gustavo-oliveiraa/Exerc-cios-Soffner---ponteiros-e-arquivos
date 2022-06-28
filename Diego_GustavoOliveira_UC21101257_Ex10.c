/*10. Crie as variáveis x e y e os ponteiros p e q. Atribua o valor 2 a x, 8 a y, o endereço de x para
p, e o endereço de y para q. Depois, imprima os seguintes resultados:
a) o endereço de x e o valor de x;
b) o valor de p e o valor de *p;
c) o endereço de y e o valor de y;
d) o valor de q e o valor de *q;*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

	int x = 2, y = 8, *pontP = &x, *pontQ = &y;

	printf("VALOR DO N°1 = %d\n", x);
	printf("ENDEREÇO DO N°1 = %d\n", pontP);

	printf("VALOR DE P = %d\n", *pontP);
	printf("ENDEREÇO DE P = %d\n", pontP);

	printf("VALOR DO N°2 = %d\n", y);
	printf("ENDEREÇO DO N°2 = %d\n", pontQ);

	printf("VALOR DE Q = %d\n", *pontQ);
	printf("ENDEREÇO DE Q = %d\n", pontQ);

	printf("ENDEREÇO DE P = %d\n", pontP);
	printf("ENDEREÇO DE Q = %d\n", pontQ);
	
	return 0;
}
