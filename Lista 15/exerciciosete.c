#include <stdio.h>
#include <conio.h>
/*7 - Escreva um algoritmo que leia o ano de nascimento de uma pessoa e o ano atual, ao final exiba a idade que essa pessoa tem.*/
void main(){
	int anonasc, anoatual, sub;
	printf("Informe o ano de nascimento: ");
	scanf("%d", &anonasc);
	printf("Informe o ano atual: ");
	scanf("%d", &anoatual);
	sub = anoatual - anonasc;
	printf("Idade: %d", sub);
}
