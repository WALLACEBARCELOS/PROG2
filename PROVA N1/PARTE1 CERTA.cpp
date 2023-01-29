#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>

struct plataforma{
	char cod[20];
	int codigo;
	int tipo;
	char ramo[20];
	int anof;
	int anof2;
	int camp;
	char campo[15];
	int horashp;
	char hora_hc[10];
	int hora;
	char hora_hp[10]; 
	float coeficiente;
	int prod;
	float aux;
	int med;
	int total_paradas;
	int totalh;

	
	
	
};
int med,total_paradas, c;

float mediahoras;



void preencher(int n,plataforma *vetor){
	int i;
	for(i=0; i<n;i++)
	{
		vetor[i].codigo=i+101;
		vetor[i].tipo=(rand()%3)+1;
		vetor[i].hora=(rand()%2);
		vetor[i].camp=(rand()%3)+1;
		vetor[i].anof=(rand()%19)+2000;//ano 
		vetor[i].anof2=vetor[i].anof%2000;//dezena do codigo
		vetor[i].horashp=(rand()%3601);//horas hc
		vetor[i].prod=(rand()%1000)+2500;
		
		
		vetor[i].totalh++;
	
		
		//TIPO	E  CODIGO
		if(vetor[i].tipo==1)
		{
			sprintf(vetor[i].ramo,"FIXA            ");
			sprintf(vetor[i].cod,"%dFX%.2d",vetor[i].codigo, vetor[i].anof2 );
		}
		if(vetor[i].tipo==2)
		{
			sprintf(vetor[i].ramo,"NAVIO SONDA     ");
			sprintf(vetor[i].cod,"%dNS%.2d",vetor[i].codigo, vetor[i].anof2 );
		}
		if(vetor[i].tipo==3)
		{
			sprintf(vetor[i].ramo,"SEMI SUBMERSIVEL");
			sprintf(vetor[i].cod,"%dSS%.2d",vetor[i].codigo, vetor[i].anof2 );
		}
		
		// CAMPO
		if(vetor[i].camp==1)
		{
			sprintf(vetor[i].campo,"MARLIM  ");
		}
		if(vetor[i].camp==2)
		{
			sprintf(vetor[i].campo,"ALBACORA");
		}
		if(vetor[i].camp==3)
		{
			sprintf(vetor[i].campo,"RONCADOR");
		}
		
		//HORA CONTRATADAS
		if(vetor[i].hora==0)
		{
			sprintf(vetor[i].hora_hc,"8760 ");
		}
		if(vetor[i].hora==1)
		{
			sprintf(vetor[i].hora_hc,"17520");
		}
		
		
		//COEFICIENTE
		
	
		if(vetor[i].hora==0)
		{
			vetor[i].aux=(8760-vetor[i].horashp);
			vetor[i].coeficiente=(vetor[i].prod/vetor[i].aux)*1000;
		}
		if(vetor[i].hora==1)
		{
			vetor[i].aux=(17520-vetor[i].horashp);
			vetor[i].coeficiente=(vetor[i].prod/vetor[i].aux)*1000;
		}
		
		
		
		
	}
}

void media(int n,plataforma *vetor){
	int i;
	for(i=0; i<n;i++)
	{	
		if(vetor[i].tipo==3)
		{
			med++;
			total_paradas+=vetor[i].horashp;
		}	
	}
	mediahoras=(total_paradas/med);
}

void maior(int n,plataforma *vetor){
	int i, maior=-1;
	for(i=0; i<n;i++)
	{	
		if(vetor[i].coeficiente>maior){
			maior=vetor[i].coeficiente;
			c=i;
		}

	}
}

void percentual (int n,plataforma *vetor){
	int i, percent;
	float percentual;
	for(i=0; i<n;i++)
	{	
	if(vetor[i].camp==1)
	{
		if(vetor[i].camp==3)	
		{
			if (vetor[i].horashp<=800)
			{
				percent++;
			}
		}
	}

	}
	percentual=percent;
}

void imprimir(int n,plataforma *vetor){
	int i;
	for(i=0; i<n;i++)
	{	
		printf("%s    %s    %d    %s     %s    %4.d    %d     %.2f\n",vetor[i].cod,vetor[i].ramo, vetor[i].anof, vetor[i].campo, vetor[i].hora_hc, vetor[i].horashp, vetor[i].prod, vetor[i].coeficiente);
		
	}
	
	printf("\n \nA media de horas paradas he: %.2f", mediahoras);
	printf("\n\nA plataforma de maior coeficiente com todos os seus dados he:");
	printf("\n%s    %s    %d    %s     %s    %4.d    %d     %.2f\n",vetor[c].cod,vetor[c].ramo, vetor[c].anof, vetor[c].campo, vetor[c].hora_hc, vetor[c].horashp, vetor[c].prod, vetor[c].coeficiente);
	printf("O percentual de Plataformas dos Campos de Roncador e Marlim com HP menor que 800 he: %f", percentual);
		
}
void cabecalho(int n,plataforma *vetor){
	printf("=======================================================================================\n");
	printf("Cod.           Tipo            Ano      Campo        HC       HP     Prod   Coeficiente\n");
	printf("=======================================================================================\n");
}


main()
{
	srand(time(NULL));
	plataforma plat[12];
	cabecalho (12,plat);
	preencher (12,plat);
	media (12,plat);
	maior (12,plat);
	imprimir (12,plat);
}
