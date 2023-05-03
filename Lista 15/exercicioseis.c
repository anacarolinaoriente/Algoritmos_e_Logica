#include <stdio.h>
#include <conio.h>
/*6 - Escreva um algoritmo que leia 3 números e ao final subtraia o primeiro do segundo e divida o resultado pelo terceiro.*/
void main(){
	int n1, n2, n3, sub;
	float div;
	printf("Informe o numero um: ");
	scanf("%d", &n1);
	printf("Informe o numero dois: ");
	scanf("%d", &n2);
	printf("Informe o numero tres: ");
	scanf("%d", &n3);
	sub = n1 - n2;
	div = (float)sub / (float)n3;
	printf("Resultado: %0.2f", div);
}
