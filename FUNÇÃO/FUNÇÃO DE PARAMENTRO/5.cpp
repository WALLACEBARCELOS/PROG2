/*5-Faça  um  programa com uma  função que receba  um  inteiro  positivo  como parâmetro e  retorne  seu  somatório..*/
#include <stdio.h>
#include <stdlib.h>

void somatorio (int num1)
{
	int total;
	for(int i=1;i<=num1;i++)	
	{
		total=total+i;
	}
	printf("O somatorio %d he %d",num1,total);
}
main(){
	int n1;
	
	printf("Informe um numero:");
	scanf("%d", &n1);
	somatorio(n1);
}
	
