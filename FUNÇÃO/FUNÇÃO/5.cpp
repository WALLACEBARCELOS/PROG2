/*5-Fa�a  um  programa em  C que receba tr�s valores  e verifique se eles  s�o os lados  de  um tri�ngulo.*/
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
	
