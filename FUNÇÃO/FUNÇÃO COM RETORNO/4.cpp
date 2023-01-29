/*4-Faça uma  função que  receba  a distancia em Km e a quantidade  de litros de gasolina  consumidos  por um carro  em um  percurso, calcule e retorne  o consumo em Km/l .*/
#include <stdio.h>
#include <stdlib.h>

int media (int num1, int num2)
{
	float consumo=num1/num2;
	return (consumo);
}
main(){
	int km,l;
	float d;
	
	printf("Imforme a distancia percorrida: ");
	scanf("%d", &km);
	printf("Informe a quantidade de litros gastas:");
	scanf("%d", &l);
	d=media(km,l);
	printf("O consumo foi: %2.f", d);
}
