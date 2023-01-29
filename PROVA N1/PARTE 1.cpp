#include<stdlib.h>
#include<stdio.h>
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
};

void preencher(int n,plataforma *vetor){
	int i;
	for(i=0; i<n;i++)
	{
		vetor[i].codigo=i+101;
		vetor[i].tipo=(rand()%3)+1;
		vetor[i].camp=(rand()%3)+1;
		vetor[i].anof=(rand()%19)+2000;
		vetor[i].anof2=vetor[i].anof%2000;
		
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
		
		
	}
}
		
void imprimir(int n,plataforma *vetor){
	int i;
	for(i=0; i<n;i++)
	{	
		printf("%s    %s    %d    %s \n",vetor[i].cod,vetor[i].ramo, vetor[i].anof, vetor[i].campo);
	}
		
}
void cabecalho(int n,plataforma *vetor){
	printf("===========================================================================\n");
	printf("Cod.           Tipo            Ano    Campo      HC    HP    Prod Coeficiente\n");
	printf("===========================================================================\n");
}


main()
{
	
	plataforma plat[12];
	cabecalho (12,plat);
	preencher (12,plat);
	imprimir (12,plat);
}
