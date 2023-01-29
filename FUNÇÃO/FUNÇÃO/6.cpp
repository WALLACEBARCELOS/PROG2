/*6-Faça  um  programa em  C que receba três valores  e coloque em  ordem crescente.*/
#include <stdio.h>
#include <stdlib.h>

void ordem()
{
	int n1, n2, n3, aux;
	printf("Informe o primeiro valor:");
	scanf("%d", &n1);
	printf("Informe o segundo valor:");
	scanf("%d", &n2);
	printf("Informe o terceiro valor:");
	scanf("%d", &n3);
	
	if(n2<n1)//se o valor digitado de n2 for menor que n1
	{
		aux=n1;//auxiliar vai salvar n1
		n1=n2;//n1 vai salvar o valor de n2
		n2=aux;// n2 vai salvar o valor que estava em aux
	}
	if(n3<n1)
	{
		aux=n1;
		n1=n3;
		n3=aux;	
	}
	if(n3<n2)
	{
		aux=n2;
		n2=n3;
		n3=aux;
	}

	printf("O valor na ordem he: %d  /  %d  /  %d", n1, n2, n3);

}
main()
{
 
	ordem();
		
}
	
