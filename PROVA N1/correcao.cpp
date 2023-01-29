#include<stdlib.h>
#include<stdio.h>
#include<string.h>
struct plataforma{
	char codigo[10];
	int tp;
	char tipo[12];
	int ano,cp;
	char campo[10];
	int hc,qtd_Horas,qtd_Horas_Paradas;
	float  prod,coeficiente;
	float a;
	float b;
};
float resp_Q2;
float auxiliar, maior_prod=0;
int maior_prod2=0 ;
plataforma resp_q3;
float med_mar=0, med_ron=0,med_alb=0;
void preenche(int n, plataforma *plataformas){
	
	int i;
	for(i=0;i<n;i++){
		plataformas[i].tp=(rand()%3)+1;
		plataformas[i].ano=(rand()%20)+2000;
		plataformas[i].cp=(rand()%3)+1;
		plataformas[i].hc=rand()%2;
		plataformas[i].qtd_Horas_Paradas=rand()%3601;
		plataformas[i].prod=(rand()%1501)+1000;
		
		if(plataformas[i].tp==1){
			sprintf(plataformas[i].tipo,"Fixa       ");
			sprintf(plataformas[i].codigo,"%dFX%.2d",i+101,plataformas[i].ano-2000);
		}
		if(plataformas[i].tp==2){
			sprintf(plataformas[i].tipo,"Navio Sonda");
			sprintf(plataformas[i].codigo,"%dNS%.2d",i+101,plataformas[i].ano-2000);
		}
		if(plataformas[i].tp==3){
			sprintf(plataformas[i].tipo,"Semi Submer");
			sprintf(plataformas[i].codigo,"%dSS%.2d",i+101,plataformas[i].ano-2000);
		}
		
		if(plataformas[i].cp==1){
			sprintf(plataformas[i].campo,"Marlim  ");
		}
		if(plataformas[i].cp==2){
			sprintf(plataformas[i].campo,"Albacora");
		}
		if(plataformas[i].cp==3){
			sprintf(plataformas[i].campo,"Roncador");
		}
		if(plataformas[i].hc==0)plataformas[i].qtd_Horas=8760;
		if(plataformas[i].hc==1)plataformas[i].qtd_Horas=17520;
		plataformas[i].coeficiente=(plataformas[i].prod/(plataformas[i].qtd_Horas-plataformas[i].qtd_Horas_Paradas))*1000;
	}
	
}
void questao_2(int n,plataforma *plataformas){
	int i;
	float tot_HP_SS=0,tot_SS=0 ;
	
	for(i=0;i<n;i++){
		if(plataformas[i].tp==3){
			tot_HP_SS+=plataformas[i].qtd_Horas_Paradas;
			tot_SS++;
		}				
	}
	resp_Q2=tot_HP_SS/tot_SS;
}
void questao_3(int n,plataforma *plataformas){
	int i;
	
	float maior_coef=0;
	for(i=0;i<n;i++){
		if(plataformas[i].coeficiente>maior_coef){
			maior_coef=plataformas[i].coeficiente;
			resp_q3=plataformas[i];
		}				
	}	
}
float questao_4(int n,plataforma *plataformas){
	int i;
	
	float perc_Ronc=0, tot_Ronc=0,tot_Ronc_M8=0;
	for(i=0;i<n;i++){
		if(plataformas[i].cp==3){
			tot_Ronc++;
			if(plataformas[i].qtd_Horas_Paradas<800){
				tot_Ronc_M8++;
			}
		}				
	}
	perc_Ronc=(	tot_Ronc_M8/tot_Ronc)*100;
	return(perc_Ronc);
}

float questao_4_1(int n,plataforma *plataformas){

	int i;
	float perc_mar=0, tot_mar=0,tot_mar_m8=0;
	
	for(i=0;i<n;i++){
		if(plataformas[i].cp==1){
			tot_mar++;
			if(plataformas[i].qtd_Horas_Paradas<800){
				tot_mar_m8++;
			}
		}				
	}
	perc_mar=(	tot_mar_m8/tot_mar)*100;
	return(perc_mar);
}

void questao_5(int n,plataforma *plataformas){
	int i;
	
	float prod_tot_mar=0, prod_mar=0, prod_tot_ron=0, prod_ron=0,prod_tot_alb=0, prod_alb=0;
	for(i=0;i<n;i++){
		if(plataformas[i].cp==1)
		{
			prod_mar++;
			prod_tot_mar=prod_tot_mar+plataformas[i].prod;
		}
		
		if(plataformas[i].cp==3)
		{
			prod_ron++;
			prod_tot_ron=prod_tot_ron+plataformas[i].prod;
		}
		
		if(plataformas[i].cp==2)
		{
			prod_alb++;
			prod_tot_alb=prod_tot_alb+plataformas[i].prod;
		}
	}
		med_mar=prod_tot_mar/prod_mar;
		med_ron=prod_tot_ron/prod_ron;
		med_alb=prod_tot_alb/prod_alb;
}


void apresenta(int n,plataforma *plataformas,float r4, float r4_1){
	int i;
	for(i=0;i<n;i++){
		printf("%s\t%s\t%d\t%s\t%d\t%d\t%.0f\t%.1f\n",plataformas[i].codigo,plataformas[i].tipo,plataformas[i].ano,plataformas[i].campo,plataformas[i].qtd_Horas,plataformas[i].qtd_Horas_Paradas,plataformas[i].prod,plataformas[i].coeficiente);
	}
	printf("======================================================================\n");
	printf("A média de Horas paradas das Plataformas do tipo Semi Submersíve:%.1f\n",resp_Q2);
	printf("=================================================\n");
	printf("Plataforma de Maior coeficiente\n");
	
	printf("%s\t%s\t%d\t%s\t%d\t%d\t%.0f\t%.1f\n",resp_q3.codigo,resp_q3.tipo,resp_q3.ano,resp_q3.campo,resp_q3.qtd_Horas,resp_q3.qtd_Horas_Paradas,resp_q3.prod,resp_q3.coeficiente);
	printf("\n\nResçposta questao 4: %.1f\n",r4);
	printf("Resçposta questao 4_1: %.1f\n",r4_1);
	
	printf("\n\nA media de producao da plataforma MARLIM he: %.f", med_mar);
	printf("\n\nA media de producao da plataforma RONCADOR he: %.f", med_ron);
	printf("\n\nA media de producao da plataforma ALBACORA he: %.f\n\n", med_alb);
	
	
	printf("\nA plataforma com a maior producao e seu indice he: %.0f", maior_prod);
	
	printf("\n%s\t%s\t%d\t%s\t%d\t%d\t%.0f\t%.1f\n",plataformas[maior_prod2].codigo,plataformas[maior_prod2].tipo,plataformas[maior_prod2].ano,plataformas[maior_prod2].campo,plataformas[maior_prod2].qtd_Horas,plataformas[maior_prod2].qtd_Horas_Paradas,plataformas[maior_prod2].prod,plataformas[maior_prod2].coeficiente);
	

	
}

void q6(int n,plataforma *plataformas)
{
	int i, j;
	float aux;
	
	printf("\n\nO Coeficiente em ordem crescente he:");
	for(i=0;i<12;i++)
	{
		for(j=i+1;j<13;j++)
		{

			if(plataformas[i].coeficiente>plataformas[j].coeficiente)
			{
				aux=plataformas[i].coeficiente;
				plataformas[i].coeficiente=plataformas[j].coeficiente;
				plataformas[j].coeficiente=aux;
				auxiliar=plataformas[j].coeficiente;
			}
		}
	printf("  \n%.1f",auxiliar);
	}
	
}
void q7(int n,plataforma *plataformas)
{
	int i, aux;
	for(i=0;i<n;i++){
		if(plataformas[i].prod>maior_prod){
			maior_prod=plataformas[i].prod;
			maior_prod2=i;
		}	
	}
}
main(){
	float resp_q4, resp_q4_1;
	plataforma plataformas[12];
	preenche(12, plataformas);
	questao_2(12, plataformas);
	questao_3(12, plataformas);
	resp_q4=questao_4(12, plataformas);
	resp_q4_1=questao_4_1(12, plataformas);
	questao_5(12, plataformas);
	q7(12, plataformas);
	apresenta(12, plataformas,resp_q4, resp_q4_1);
	q6(12, plataformas);
	
}
