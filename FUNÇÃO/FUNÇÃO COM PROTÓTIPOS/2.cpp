/*2-Faça  um  programa  em  C que dados dois valores Inteiros apresente o maior deles.*/
#include <stdio.h>
#include <stdlib.h>

void numero(int num1,int num2);

main()
{
 	int n1, n2;
	printf("Informe um numero:");
	scanf("%d", &n1);
	printf("Informe outro numero:");
	scanf("%d", &n2);
	numero(n1, n2);
}
void numero(int num1, int num2)
{
	if (num1<num2)
	{
		printf("O maior numero informado he %d", num2);
	}
	else
	{
		printf("O maior numero informado he %d", num1);
	}
}
