#include <stdio.h>
#include <conio.h>
/*9 - Faça um algoritmo que leia a idade de uma pessoa e ao final exiba quando meses, dias, horas, minutos e segundo que essa pessoa já viveu.*/
void main(){
	int idade, meses, dias;
	float min, seg, horas;
	printf("Informe a sua idade: ");
	scanf("%d", &idade);
	meses = idade * 12;
	dias = meses * 30;
	horas = dias * 24;
	min = horas * 60;
	seg = min * 60;
	printf("Voce ja viveu : %d meses \n", meses);
	printf("Voce ja viveu : %d dias \n", dias);
	printf("Voce ja viveu : %0.2f horas \n", horas);
	printf("Voce ja viveu : %0.2f minutos \n", min);
	printf("Voce ja viveu : %0.2f segundos \n", seg);
}
