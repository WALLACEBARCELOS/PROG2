/*5 - Fa�a um programa em C que gere 20 valores aleat�rios entre 50 e 100 utilizando a fun��o rand
e apresente o quantos por cento dos n�meros s�o maiores que 80.*/
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
#include<time.h> 
#include<locale.h>
#include<string.h>
main(){
	
	setlocale(LC_ALL,"");
	srand(time(NULL));
	float n2;
	float porcento;
		
	for(int i=0;i<=20;i++){
		int n1=(rand()%50)+50;
		porcento=(n1*0.80);
		printf("%d\n", n1);
		if(n1>80){
		n2++;
		}
	}
	n2=(n2*100/20);
	printf("A porcentagem de numeros maiores que 80 por cento �: %.1f ", porcento);
}
