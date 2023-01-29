/*4-Faça um  programa que receba  dois número  e  a operação  desejada (+,calcule e  apresente  o resultado.*/
#include <stdio.h>
#include <stdlib.h>

void operacao()
{
	float n1, n2;
	float res;
	char oper;
	printf("Informe o primeiro valor:");
	scanf("%f", &n1);
	printf("Informe o segundo valor:");
	scanf("%f", &n2);
	printf("Informe a operação desejada(+,-,*,/):");
	scanf("%s", &oper);
	
	switch (oper)
	{
		case'+':
			res=(n1+n2);
			printf("A soma de %2.f + %2.f he: %2.f",n1,n2,res);
		break;	
		
		case'-':
			res=(n1-n2);
			printf("A subtracao de %2.f - %2.f he: %2.f",n1,n2,res);
		break;	
		
		case'*':
			res=(n1*n2);
			printf("A multiplicacao de %2.f * %2.f he: %2.f",n1,n2,res);
		break;	
		
		case'/':
			res=(n1/n2);
			printf("A divisao de %2.f / %2.f he: %2.f",n1,n2,res);
		break;	
	}

}


main()
{
 
	operacao();
		
}
	
