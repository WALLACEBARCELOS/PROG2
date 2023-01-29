/*2-Faça  um  programa em  C chamando uma  função  que leia dois valores  Inteiros apresente  o maior deles.*/
#include <stdio.h>
#include <stdlib.h>

void maior()
{
	int n1, n2;
	printf("Informe o primeiro valor:");
	scanf("%d", &n1);
	printf("Informe o segundo valor:");
	scanf("%d", &n2);
	
	if (n1>n2)
	{
		printf("O maior valor he: %d", n1);
	}
	if (n2>n1)
	{
		printf("O maior valor he: %d",n2);
	}

}


main(){
 
	maior();
		
}
	
