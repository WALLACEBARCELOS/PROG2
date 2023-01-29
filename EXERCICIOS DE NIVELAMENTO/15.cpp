/*15-Faça um programa que crie preencha com valores aleatórios entre 10 e 30 e apresente uma
matriz 5x5 de inteiros.*/
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
	
	int j,i,matriz[5][5];
	
	for(i=0;i<5;i++){
			
		for(j=0;j<5;j++){
		matriz[i][j]=(rand()%20)+10;
		printf("%d\t",matriz[i][j]);
		



		}
		printf("\n");
	}
	
	
}
