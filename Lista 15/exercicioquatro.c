#include <stdio.h>
#include <conio.h>
/*4 - Escreva um algoritmo que leia 2 números, após a leitura somar e exibir o resultado.*/
void main(){
	int n1, n2, soma;
	
	printf("Informe o numero um: ");
	scanf("%d", &n1);
	printf("Informe o numero dois: ");
	scanf("%d", &n2);
	soma = n1 + n2;
	printf("A soma e: %d", soma);
	system("pause");
}
