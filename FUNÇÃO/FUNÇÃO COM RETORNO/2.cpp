/*2-Faça um programa em  C com função que receba  3 n ú meros uma inteiros como par â minutos metro , representando  horas e segundos,  e os  converta em segundos .*/
#include <stdio.h>
#include <stdlib.h>

int segundo (int num1, int num2, int num3)
{
	num1=num1*120;
	num2=num2*60;
	num3=num3;
	int total=num1+num2+num3;
	return (total);
}
main(){
	int n1, n2,n3, total,d;
	
	printf("Diginte a hora:");
	scanf("%d", &n1);
	printf("Diginte o minuto:");
	scanf("%d", &n2);
	printf("Diginte o segundo:");
	scanf("%d", &n3);
	d=segundo(n1,n2,n3);
	printf("O total de segundos he %dseg", d);
	
	
}
	
