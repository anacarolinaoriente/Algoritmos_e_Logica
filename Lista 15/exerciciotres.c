#include <stdio.h>
#include <conio.h>
/*3 - Escreva um algoritmo que leia seu nome e em uma segunda vari�vel 
leia seu sobrenome e ao final exiba seu nome concatenado com seu sobrenome.*/
void main(){
	char nome[100], sobrenome[100];
	
	printf("Informe seu nome: ");
	scanf("%s", nome);
	printf("Informe seu sobrenome: ");
	scanf("%s", sobrenome);
	printf("Nome Informado: %s %s", nome, sobrenome);
}
