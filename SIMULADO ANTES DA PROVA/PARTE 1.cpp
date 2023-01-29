#include<stdlib.h>
#include<stdio.h>
#include<time.h>
#include<string.h>

struct empresa
{
	int funcionarios; 
	int origem;
	int ano_cria;
	char regiao[15];
	char cod[15];
	char tipo_ramo[15];
	char porte[15];
	int ativo;
	char ativ[15];
};
empresa ordem[180];
	
void preenche (int indice, empresa *vetor)
{
	int i, ramo;
	for (i=0;i<180;i++)
	{
	//RAND
		ramo=(rand()%3)+1;
		ordem[i].funcionarios=(rand()%99)+1;
		ordem[i].origem=(rand()%2);
		ordem[i].ano_cria=(rand()%20)+2000;
		ordem[i].ativo=(rand()%2);
	//CODIGO E RAMOS
		if (ramo ==1)
		{
			sprintf(ordem[i].cod,"%dIND%3d",265+i, i+1);
			sprintf(ordem[i].tipo_ramo,"INDUSTRIA");
			if (ordem[i].funcionarios<=19)
			{
			sprintf(ordem[i].porte,"MEI");
			}
			if (ordem[i].funcionarios>=20 && ordem[i].funcionarios<=99)
			{
			sprintf(ordem[i].porte,"EPP");
			}
			
		}	
		if (ramo ==2)
		{
			sprintf(ordem[i].cod,"%dCOM%3d",i+265, i+1);
			sprintf(ordem[i].tipo_ramo,"COMERCIAL");
			
			if (ordem[i].funcionarios<=9)
			{
			sprintf(ordem[i].porte,"MEI");
			}
			if (ordem[i].funcionarios>=10 && ordem[i].funcionarios<=49)
			{
			sprintf(ordem[i].porte,"EPP");
			}
			if (ordem[i].funcionarios>=50 && ordem[i].funcionarios<=99)
			{
			sprintf(ordem[i].porte,"EMP");
			}
		
		
		}	
		if (ramo ==3)
		{
			sprintf(ordem[i].cod,"%dSER%3d",i+265, i+1);
			sprintf(ordem[i].tipo_ramo,"SERVICOS ");
			
			if (ordem[i].funcionarios<=9)
			{
			sprintf(ordem[i].porte,"MEI");
			}
			if (ordem[i].funcionarios>=10 && ordem[i].funcionarios<=49)
			{
			sprintf(ordem[i].porte,"EPP");
			}
			if (ordem[i].funcionarios>=50 && ordem[i].funcionarios<=99)
			{
			sprintf(ordem[i].porte,"EMP");
			}
		}
		//ORIGEM
		if (ordem[i].origem==0)
		{
		sprintf(ordem[i].regiao,"MACAE  ");	
		}	
		
		if (ordem[i].origem==1)
		{
		sprintf(ordem[i].regiao,"REGIOES");	
		}
		
		//ATIVO
		if (ordem[i].ativo==0)
		{
		sprintf(ordem[i].ativ,"SIM");
		}
		if (ordem[i].ativo==1)
		{
		sprintf(ordem[i].ativ,"NAO");	
		}
		
		//ENCERRAMENTO
		
		
		
		
	
	}	
}
void imprimir (int indice, empresa *vetor)
{
	int i;
	for (i=0;i<180;i++)
	{
		printf("%s    %s      %2d     %s    %s    %d   %s\n",ordem[i].cod, ordem[i].tipo_ramo,ordem[i].funcionarios,ordem[i].porte, ordem[i].regiao, ordem[i].ano_cria, ordem[i].ativ );
	}	
}

main()
{
	printf("=========================================================================\n");
	printf("CÓDIGO         RAMO       NºFUN   PORTE   ORIGEM    ANOCRI ATIVO ANOENC\n");
	printf("=========================================================================\n");
	srand(time(NULL));
	preenche(180,ordem);
	imprimir(180,ordem);
}


