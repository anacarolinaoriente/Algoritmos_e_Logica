#include <stdio.h>
#include <conio.h>
/*13 - Faça um algoritmo que ao receber um número qualquer, seja capaz de verificar se o mesmo é ou não negativo.*/
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
