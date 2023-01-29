/*5-Faça  um  programa em  C que receba três valores  e verifique se eles  são os lados  de  um triângulo.*/
#include <stdio.h>
#include <stdlib.h>

void triangulo()
{
	int n1, n2, n3;
	printf("Informe os tres valores:  ");
	scanf("%d%d%d", &n1, &n2, &n3);
	
	if (((n1+n2)>n3)&&((n1+n3)>n2)&&((n3+n2)>n1))
	{
		printf("Os tres valores formam um triangulo!");
	}
	else
		printf("Os tres valores NAO formam um triangulo!");

}
main()
{
 
	triangulo();
		
}
	
