/*4-Faça um programa em C que gere com a função rand dois valores entre 0 e 100, transforme em
números com uma casa decimal e apresente estes números além da média entre eles, em seguida,
apresente a mensagem aprovado caso o valor seja superior ou igual a seis e reprovado caso
contrário.*/

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
#include<time.h> 
#include<locale.h>
#include<string.h>
main(){
	
	setlocale(LC_ALL,"");
	
	float n1, n2, m;
	
	srand(time(NULL));
	n1=(rand()%101);
	n2=(rand()%101);
	
	printf("Gerando rand de dois valores ........  %.1f e %.1f \n", n1,n2);
	
	m=(n1+n2)/2;
	
	printf("\nA media dos valores %.1f e %.1f é: %.1f", n1, n2, m);
	
	if(m>=6){
		printf("\n************APROVADO*************");
	}
	else
		if(m<6){
			printf("\n************REPROVADO************");
		}
	

}
