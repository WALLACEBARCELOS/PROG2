/*11-Utilizando o Vetor apresentado na questão 10 apresente o vetor na ordem inversa.*/
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
	
		
	setlocale(LC_ALL,"");
	srand(time(NULL));
	
	int i,vetor[10];
	
	for(i=10;i>0;i--){
		vetor[i]=i;
		printf("%d\n", vetor[i]);
	}
	
	
}
