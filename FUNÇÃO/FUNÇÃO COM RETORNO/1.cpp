/*1-Faça  um programa  que  crie  preencha  e  apresente  um  vetor  de  dez  posições  com valores  
aleatórios  entre  0.0  e  10.0, em  seguida  passe  o vetor  para  uma  função utilizando  ponteiro  
e  verifique  e  apresente  o  percentual  de  valores  maiores  do  que  6.0..*/
#include <stdio.h>
#include <stdlib.h>
#include<time.h> 


float vetor(int indice, float *n1);
 main()
{
	srand(time(NULL));
	int i;
	float n1[10], porcentagem;
	for(i=0;i<10;i++)
	{
		n1[i]=(rand()%101);	
		n1[i]=n1[i]/10;
		printf("%2.1f\n", n1[i]);
	}
	porcentagem=vetor(10,n1);
	printf("\nO percentual de numeros maiores que 6 he: %2.1f\n",porcentagem );
}

float vetor(int indice,float *n1)
{
	srand(time(NULL));
	int i;
	float percent;
	for(i=0;i<indice;i++)
	{
		if (n1[i]>6)
		{
			percent ++;
		}
	}
	percent=(percent*100)/10;
	return (percent);
}
