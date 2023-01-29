/*3-Faça um  programa em  C que receba três  valores  do teclado apresente a  sua média.*/
#include <stdio.h>
#include <stdlib.h>

int media (int num1, int num2, int num3)
{
	float media=(num1+num2+num3)/3;
	return (media);
}
main(){
	int n1,n2,n3;
	float d;
	
	printf("Diginte o primeiro valor:");
	scanf("%d", &n1);
	printf("Diginte o segundo  valor:");
	scanf("%d", &n2);
	printf("Diginte o terceiro valor:");
	scanf("%d", &n3);
	d=media(n1,n2,n3);
	printf("a media he: %2.f", d);
	
}
	
