#include <stdio.h>
#include <conio.h>
/*10 - Elabore um algoritmo que informe o maior número entre dois números conhecido pelo usuário.*/
void main(){
	int n1, n2;
	printf("Informe o numero um: ");
	scanf("%d", &n1);
	printf("Informe o numero dois: ");
	scanf("%d", &n2);
	if (n1 > n2){
		printf("Numero um maior: %d", n1);
	}
	else{
		if (n1 == n2){
			printf("Numeros iguais");
		}
		else{
			printf("Numero dois maior %d", n2);
		}
	}
}
