/*5-Fa�a  um  programa com uma  fun��o que receba  um  inteiro  positivo  como par�metro e  retorne  seu  somat�rio..*/
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
	
