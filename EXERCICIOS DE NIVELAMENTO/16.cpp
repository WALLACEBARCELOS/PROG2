/*16-Dada a matriz encontrada no exercíci o 15 some 5 a cada elemento com valor inferior a 20 e
apresente a matriz alterada e quantos números foram modificados.*/
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
	
	int j,i,matriz[5][5], modificados;
	
	for(i=0;i<5;i++){
			
		for(j=0;j<5;j++){
			matriz[i][j]=(rand()%20)+10;
			printf("%d\t",matriz[i][j]);
		}
		printf("\n");
	}
	
	
	printf("\n\n\n");
	for(i=0;i<5;i++){
			
		for(j=0;j<5;j++){
			//matriz[i][j]=(rand()%20)+10;
			//printf("%d\t",matriz[i][j]);
		
			if(matriz[i][j]<20){
				matriz[i][j]+=5;
				printf("%d\t",matriz[i][j]);
				modificados++;
			}
			else{
				printf("%d\t", matriz[i][j]);
			}
		

		}
		printf("\n");
	}
	
	printf("\n");
	printf("Foram modificados %d numeros da matriz",modificados);		
	

	
}
