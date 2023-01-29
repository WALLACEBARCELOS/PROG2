/*Faça um programa que crie preencha com valores aleatórios entre 0 e 100 e apresente uma
matriz 10x5 de inteiros. Crie um vetor que s ome e apresente o total de cada linha e um segundo
vetor com a média de cada linha.*/
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
			vetor[i]=vetor[i]+matriz[i][j];
			media[i]=vetor[i]/5;
			printf("%d\t ",matriz[i][j]);
		
			
		}
		printf("=  %.0f   = %.1f\n", vetor[i], media[i]);
	}

}
