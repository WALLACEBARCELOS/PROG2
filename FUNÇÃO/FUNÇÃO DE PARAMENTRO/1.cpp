/*1-Faça um  programa em  C com uma função  que receba  dois  números  positivos por parâmetro  e retorne  a soma dos  N  números existentes entre eles..*/
#include <stdio.h>
#include <stdlib.h>

void soma_numero (int num1, int num2)
{
	int soma;
	soma=num1+num2;
	printf("A soma dos numeros %d e %d = %d", num1, num2, soma);
}
main(){
	int n1, n2,soma;
	
	printf("Diginte o primeiro numero:");
	scanf("%d", &n1);
	printf("Diginte o segundo numero:");
	scanf("%d", &n2);
	soma_numero(n1,n2);
}
	
