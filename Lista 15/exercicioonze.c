#include <stdio.h>
#include <conio.h>
/*11 - Construa um algoritmo para calcular a média de dois valores inteiros positivos, previamente conhecidos.*/
void main(){
	int nota1, nota2, media;
	printf("Informe a primeira nota: ");
	scanf("%d", &nota1);
	printf("Informe a segunda nota: ");
	scanf("%d", &nota2);
	if (nota1 > 0 && nota2 > 0){
		media = (nota1 + nota2) / 2;
		printf("A media e: %d", media);
	}
	else{
		printf("Nota Invalida");
	}
	
}
