/*3-Faça um  programa  em  C que receba três valores  do teclado apresente a sua média.*/
#include <stdio.h>
#include <stdlib.h>

void media(int num1,int num2, int num3);

main()
{
 	int n1, n2, n3;
	printf("Informe o primeiro numero:");
	scanf("%d", &n1);
	printf("Informe o segundo numero:");
	scanf("%d", &n2);
	printf("Informe o terceiro numero:");
	scanf("%d", &n3);
	media(n1, n2, n3);
}
void media(int num1, int num2, int num3)
{
	float media;
	
	media=(num1+num2+num3)/3;
	printf("A media he %2.f", media);
}
