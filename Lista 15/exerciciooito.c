#include <stdio.h>
#include <conio.h>
/*8 - Fa�a um algoritmo que leia as 3 notas de um aluno e calcule a m�dia final deste aluno.*/
void main(){
	int n1, n2, n3, media;
	printf("Informe o numero um: ");
	scanf("%d", &n1);
	printf("Informe o numero dois: ");
	scanf("%d", &n2);
	printf("Informe o numero tres: ");
	scanf("%d", &n3);
	media = (n1 + n2 + n3) / 3;
	printf("A media e: %d", media);
}
