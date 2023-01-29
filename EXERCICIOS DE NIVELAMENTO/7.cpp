/*7-Escreva um programa que gere 10 números inteiros aleatórios entre 0 e 100 e escreva o menor
e o maior valor*/
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
	
	int n1, maior, menor=101;
	
	for(int i=0;i<10;i++){
		n1=(rand()%101);
		printf("%d\t",n1);
		
		if(n1>maior){
			maior=n1;
		}

		
		if(n1<menor){
			menor=n1;
		}
	}
	
	printf("\nO maior número é: %d", maior);
	printf("\nO menor número é: %d", menor);
	
	
}



