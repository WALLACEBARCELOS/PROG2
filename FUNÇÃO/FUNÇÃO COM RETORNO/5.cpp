/*5-Faça um  programa em  C com uma função  que receba  dois  números  positivos por parâmetro  e retorne  a soma dos  N  números existentes entre eles..*/
#include <stdio.h>
#include <stdlib.h>

int soma_numero (int num1, int num2)
{
	int aux;
	for(num1=num1+1;num1<num2;num1++){
		aux+=num1;
	}
	return(aux);	
}
main(){
	int n1, n2;
	float total;
	printf("Diginte o primeiro numero:");
	scanf("%d", &n1);
	printf("Diginte o segundo numero:");
	scanf("%d", &n2);
	total=soma_numero(n1,n2);
	printf("O somatorio he: %2.f",total);
}
	
