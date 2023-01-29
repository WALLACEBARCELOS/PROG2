/*Faça um programa que crie preencha com valores aleatórios entre 0 e 100 e apresente uma
matriz 10x5 de inteiros. Crie um vetor que some e apresente o total de cadacol una e um segundo
vetor com a média de cada coluna.*/
#include <stdio.h>
#include <stdlib.h>
#include<time.h> 
#include<locale.h>
main(){
	
	setlocale(LC_ALL,"");
	srand(time(NULL));
	
	int j,i,matriz[10][5];
	float vetor[10], media[10];
	
	for(i=0;i<10;i++){
			
		for(j=0;j<5;j++){
			matriz[i][j]=(rand()%100);
			vetor[j]=vetor[j]+matriz[i][j];
			media[j]=vetor[j]/5;
			printf("%d\t ",matriz[i][j]);
		
			
		}
		printf("\n");
	}
	for(j=0;j<5;j++){
	printf("=%3.f    ", vetor[j]);
	}
	printf("SOMA");
	printf("\n");
	for(j=0;j<5;j++){
	printf("=%3.f    ", media[j]);
	}
	printf("MÉDIA");
}
