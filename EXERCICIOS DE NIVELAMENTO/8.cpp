/*8
Escreva um programa q ue leia o número de habitantes de uma determinada cidade, o valor do
kwh, e para cada habitante gere aleatoriamente os seguintes dados: consumo do mês (0 500)e o
código do consumidor (1 Residencial, 2 Comercial, 3 Industrial). No final imprima o maior, o menor
e a média do consumo dos habitantes; e por fim o total do consumo de cada categoria de
consumidor.*/
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
	int h;
	float kwh;
	
	printf("Informe o numero de habitantes: ");
	scanf("%d",&h);
	
	printf("Informe o numero do Kwh: ");
	scanf("%f",&kwh);
	int i,consumo[h], maior=-1, menor=501, indice_maior, indice_menor;
	float consumo_residencial, consumo_comercial, consumo_industrial;
	float habitantes_residencial, habitantes_comercial, habitantes_industrial;
	int cod_consumidor[h];
	char consumidor_tipo[11];	
	float  consumo_habitantes;
	printf("####################################################\n");
	printf("COD   CONSUMO TIPO\n");
	printf("####################################################\n");

	for(i=0;i<h;i++){
		consumo[i]=(rand()%501);
		cod_consumidor[i]=(rand()%3)+1;
		consumo_habitantes+=consumo[i];
		if (cod_consumidor[i]==1){
			sprintf (consumidor_tipo,"Residencial");
			consumo_residencial+=consumo[i];
			habitantes_residencial++;
		}
		if (cod_consumidor[i]==2){
			sprintf (consumidor_tipo,"Comercial  ");
			consumo_comercial+=consumo[i];
			habitantes_comercial++;
		
		}		
		if (cod_consumidor[i]==3){
			sprintf (consumidor_tipo,"Industrial ");
			consumo_industrial+=consumo[i];
			habitantes_industrial++;
		}		

		
		if(consumo[i]>maior){
			maior=consumo[i];
			indice_maior=i;	
		}	
			
		if(consumo[i]<menor){
			menor=consumo[i];
			indice_menor=i;			
		}

		printf("%3d\t%3d\t%s\n",i+1 ,consumo[i],consumidor_tipo);
	}
	printf("====================================================");
	printf("\n\n\n");	
	printf("O MAIOR vetor é:");	
	printf("%3d\t%3d\t%s\n",indice_maior+1 ,consumo[indice_maior],consumidor_tipo);
	printf("O MENOR vetor é:");	
	printf("%3d\t%3d\t%s\n",indice_menor+1 ,consumo[indice_menor],consumidor_tipo);
	
	consumo_habitantes=consumo_habitantes/h;
	printf("A média de consumo por habitantes é: %3.0f\n", consumo_habitantes);
	
	printf("Consumo total RESIDENCIAL: %3.0f\n",consumo_residencial);
	printf("Consumo total CORMERCIAL: %3.0f\n",consumo_comercial);
	printf("Consumo total INDUSTRIAL: %3.0f\n",consumo_industrial);
	
	consumo_residencial=consumo_residencial/habitantes_residencial;
	consumo_comercial=consumo_comercial/habitantes_comercial;
	consumo_industrial=consumo_industrial/habitantes_industrial;
	printf("A média de consumo por habitantes RESINDECIAL é: %3.0f\n", consumo_residencial);
	printf("A média de consumo por habitantes COMERCIAL é: %3.0f\n", consumo_comercial);
	printf("A média de consumo por habitantes INDUSTRIAL é: %3.0f\n", consumo_industrial);
	
	
}
		
	
	
	
