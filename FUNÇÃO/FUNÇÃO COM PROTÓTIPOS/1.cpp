/*1-Fa�a um  programa que leia um  �mero e responda  se ele �  positivo  ou negativo.*/
#include <stdio.h>
#include <stdlib.h>

void numero(int num1);

main()
{
 	int n1;
	printf("Informe um numero:");
	scanf("%d", &n1);
	numero(n1);
}
void numero(int num1)
{
	if (num1<0)
	{
		printf("O numero informado he negativo");
	}
	else
	{
		printf("O numero informado he positivo");
	}
}
