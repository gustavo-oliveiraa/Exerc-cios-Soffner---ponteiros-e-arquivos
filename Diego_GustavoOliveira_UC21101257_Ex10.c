/*10. Crie as vari�veis x e y e os ponteiros p e q. Atribua o valor 2 a x, 8 a y, o endere�o de x para
p, e o endere�o de y para q. Depois, imprima os seguintes resultados:
a) o endere�o de x e o valor de x;
b) o valor de p e o valor de *p;
c) o endere�o de y e o valor de y;
d) o valor de q e o valor de *q;*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

	int x = 2, y = 8, *pontP = &x, *pontQ = &y;

	printf("VALOR DO N�1 = %d\n", x);
	printf("ENDERE�O DO N�1 = %d\n", pontP);

	printf("VALOR DE P = %d\n", *pontP);
	printf("ENDERE�O DE P = %d\n", pontP);

	printf("VALOR DO N�2 = %d\n", y);
	printf("ENDERE�O DO N�2 = %d\n", pontQ);

	printf("VALOR DE Q = %d\n", *pontQ);
	printf("ENDERE�O DE Q = %d\n", pontQ);

	printf("ENDERE�O DE P = %d\n", pontP);
	printf("ENDERE�O DE Q = %d\n", pontQ);
	
	return 0;
}
