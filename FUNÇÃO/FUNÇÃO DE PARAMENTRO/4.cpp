/*4-Faça um  programa  em C com uma função  que receba  a dist â ncia  em Km e  a quantidade  de litros de gasolina consumidos  por um  carro  em um percurso como parâmetro,  calcule e apresente  o consumo em Km/l  .*/
#include <stdio.h>
#include <stdlib.h>

void media (int num1, int num2)
{
	float total=num1/num2;
	printf("O consumo por km/l he %2.0f", total);		
}
main(){
	int km, l;
	
	printf("Informe a distancia percorrida(km):");
	scanf("%d", &km);
	printf("Informe a quantidade de litros consumidos:");
	scanf("%d", &l);
	media(km,l);
}
	
