/*12-Faça um programa que crie preencha e apresente dois vetores de 5 posições de inteiros, em
seguida concatene os dois vetores um a um em um terceiro vetor de 10 posições.*/

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
	
	int i, vetor1[5], vetor2[5], vetor3[10];
	
	for(i=0;i<5;i++){
	vetor1[i]=(rand()%5);
	vetor2[i]=(rand()%5);
	
	
	printf("%d\t%d\n", vetor1[i]+1, vetor2[i]+1);
	}
	printf("\n");
	
	for(i=0;i<5;i++){
		vetor3[i*2]=vetor1[i];
		vetor3[i*2+1]=vetor2[i];
		printf("\t\t%d\t%d\t\n", vetor3[i*2]+1, vetor3[i*2+1]+1);
	}
	
}
