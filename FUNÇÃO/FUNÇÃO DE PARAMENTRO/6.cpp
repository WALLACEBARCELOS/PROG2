/*6-Faça  um  programa em  C função  que com uma receba  três valores  e os coloque  e apresente  em  ordem decrescente.*/
#include <stdio.h>
#include <stdlib.h>

void ordem(int num1,int num2,int num3)
{
	int aux;
	
	if(num2>num1)//se o valor digitado de num2 for maior que num1
	{
		aux=num1;//auxiliar vai salvar num1
		num1=num2;//num1 vai salvar o valor de num2
		num2=aux;// num2 vai salvar o valor que estava em aux
	}
	if(num3>num1)
	{
		aux=num1;
		num1=num3;
		num3=aux;	
	}
	if(num3>num2)
	{
		aux=num2;
		num2=num3;
		num3=aux;
	}

	printf("O valor na ordem he: %d  /  %d  /  %d", num1, num2, num3);

}
main()
{
 	int n1, n2, n3;
	printf("Informe o primeiro valor:");
	scanf("%d", &n1);
	printf("Informe o segundo valor:");
	scanf("%d", &n2);
	printf("Informe o terceiro valor:");
	scanf("%d", &n3);
	ordem(n1,n2,n3);
		
}
	
