/*3-Fa�a um  programa em  C com uma fun��o  que receba  tr�s valores  como par�metro apresente  a sua  m�dia.*/
#include <stdio.h>
#include <stdlib.h>

void media (int num1, int num2, int num3)
{
	float media=(num1+num2+num3)/3;	
	printf("A m�dia dos numeros he %2.f", media);		
}
main(){
	int n1, n2,n3;
	
	printf("Diginte o primeiro valor:");
	scanf("%d", &n1);
	printf("Diginte o segundo valor:");
	scanf("%d", &n2);
	printf("Diginte o terceiro valor:");
	scanf("%d", &n3);
	media(n1,n2,n3);
}
	
