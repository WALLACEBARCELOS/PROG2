/*5-Faça  um  programa em  C que receba três valores  e verifique se eles  são os lados  de  um triângulo.*/
#include <stdio.h>
#include <stdlib.h>

void triangulo(int num1,int num2, int num3);

main()
{
	int n1, n2, n3;
	printf("Informe os tres valores:  ");
	scanf("%d%d%d", &n1, &n2, &n3);
	triangulo(n1, n2,n3);
}
void triangulo(int num1, int num2, int num3)
{
	if (((num1+num2)>num3)&&((num1+num3)>num2)&&((num3+num2)>num1))
	{
		printf("Os tres valores formam um triangulo!");
	}
	else
	{
		printf("Os tres valores NAO formam um triangulo!");
	}
}
