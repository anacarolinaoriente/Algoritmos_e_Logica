#include <stdio.h>
#include <conio.h>
/*13 - Fa�a um algoritmo que ao receber um n�mero qualquer, seja capaz de verificar se o mesmo � ou n�o negativo.*/
void main(){
	int num;
	printf("Informe o numero: ");
	scanf("%d", &num);
	if (num > 0){
		printf("Numero Positivo");
	}
	else{
		if (num == 0){
			printf("Numero Nulo");
		}
		else{
			printf("Numero Negativo");
		}
	}
}
