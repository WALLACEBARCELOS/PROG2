/*4-Faça um  programa que receba  dois número  e  a operação  desejada,calcule e  apresente  o resultado.*/
#include <stdio.h>
#include <stdlib.h>

void operacao(float num1,float num2, char op);

main()
{
 	float n1, n2;
	char oper;
	printf("Informe o primeiro valor:");
	scanf("%f", &n1);
	printf("Informe o segundo valor:");
	scanf("%f", &n2);
	printf("Informe a operação desejada(+,-,*,/):");
	scanf("%s", &oper);
	operacao(n1, n2, oper);
}
void operacao(float num1, float num2, char op)
{
	float res;
	
	switch (op)
	{
		case'+':
			res=(num1+num2);
			printf("A soma de %2.f + %2.f he: %2.f",num1,num2,res);
		break;	
		
		case'-':
			res=(num1-num2);
			printf("A subtracao de %2.f - %2.f he: %2.f",num1,num2,res);
		break;	
		
		case'*':
			res=(num1*num2);
			printf("A multiplicacao de %2.f * %2.f he: %2.f",num1,num2,res);
		break;	
		
		case'/':
			res=(num1/num2);
			printf("A divisao de %2.f / %2.f he: %2.f",num1,num2,res);
		break;	
	}

}
