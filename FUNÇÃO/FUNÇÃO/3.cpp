/*3-Faça um  programa em  C chamando uma  função  que receba três valores  do teclado apresente  a sua média.*/
#include <stdio.h>
#include <stdlib.h>

void maior()
{
	int n1, n2, n3;
	float media;
	printf("Informe o primeiro valor:");
	scanf("%d", &n1);
	printf("Informe o segundo valor:");
	scanf("%d", &n2);
	printf("Informe o terceiro valor:");
	scanf("%d", &n3);
	
	media=(n1+n2+n3)/3;
	
	printf("%2.f", media);
	

}


main(){
 
	maior();
		
}
	
