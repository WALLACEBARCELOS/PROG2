#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<locale.h>
#include<time.h>

struct servicos{
	int cod;
	char os[15];
	char servico[10];
	int tipo_servico;
	int dia;
	int mes;
	char data[15];
	int horas;
	float valor;
	float totalhrep;
	float totalhman;
	float total;
};
	int maior;

void preencher (int n, servicos *os){
	
	int i;
	for (i=0;i<n;i++){
		os[i].cod=(rand()%1001)+1000; // RAND O.S
		os[i].tipo_servico=(rand()%2)+1;
		os[i].dia=(rand()%30)+1;
		os[i].mes=(rand()%12)+1;
		os[i].horas=(rand()%81)+20;//QUANTIDADE DE HORAS
	
		//TIPO DO SERVÇO E CODIGO
		if(os[i].tipo_servico==1){
			sprintf(os[i].servico, "MANUTENÇÃO");
			sprintf(os[i].os,"OS-%dM",os[i].cod);
		}
		if(os[i].tipo_servico==2){
			sprintf(os[i].servico, "REPARO    ");
			sprintf(os[i].os,"OS-%dR",os[i].cod);
		}
	}
}
void data (int n, servicos *os){
	
	int i;
	for (i=0;i<n;i++){		
		//DATA
		sprintf(os[i].data,"%.2d/%.2d",os[i].dia, os[i].mes);
	}
}
void valor (int n, servicos *os){
	
	int i;
	for (i=0;i<n;i++){		
		if(os[i].tipo_servico==1){
			os[i].valor=(os[i].horas*100)+500;
		}
		if(os[i].tipo_servico==2){
			os[i].valor=(os[i].horas*150)+750;
		}
	}	
}

//QUESTOES 3 
void q3 (int n, servicos *os){
	
	int i;
	float cont40M=0, conts=0, cont40R=0, conth=0, totalM=0, totalR=0, total=0;
	for (i=0;i<n;i++){
		
		//SERVIÇO COM MENOS DE 40 HORAS
		if(os[i].tipo_servico){	
		conts++;
			if(os[i].horas<40){
				conth++;
			}
		}	
	}
	total=(conth/conts);
	os[i].total=(total)*100;	
}

//A média de Horas das OS’s de cada tipo e geral
void q4 (int n, servicos *os){
	
	int i;
	float totalh1=0,  totalh2=0, cont2=0, cont=0;
	for (i=0;i<n;i++){		
			if(os[i].tipo_servico==1){
			cont++; 
			totalh1=totalh1+os[i].horas;
			}
			
			if(os[i].tipo_servico==2){
			cont2++;
			totalh2=totalh2+os[i].horas;
			}
	}
	os[i].totalhman=(totalh1/cont);
	os[i].totalhrep=(totalh2/cont2);
}

//A OS de maior custo com todas as suas informações.
void q5 (int n, servicos *os){
	
	int i;
	int maior_os=0;
	for (i=0;i<n;i++){
		if(os[i].valor>maior_os){
			maior_os=os[i].valor;
			maior=i;
		}	
	}
}

//IMPRESSAO DO PROGRAMA
void imprimir (int n, servicos *os){
	
	int i;
	printf("   COD\t\tTIPO SERVIÇO\tDATA\tHORAS\tVALOR SERV.\n");
	printf("***************************************************************\n");
	for (i=0;i<n;i++){
	
	printf("%s\t%s\t%s\t %d \t%.2f\n",os[i].os, os[i].servico, os[i].data, os[i].horas, os[i].valor);
	}
	printf("\n\nO percentual de Serviços com duração menor que 40 Horas é: %.2f%%",os[i].total);
	printf("\nA média de Horas das OS’s de manutenção é: %.2f horas", os[i].totalhman);
	printf("\nA média de Horas das OS’s de reparo é: %.2f horas", os[i].totalhrep);
	printf("\nA OS de maior custo é: ");
	printf("%s\t%s\t%s\t %d \t%.2f\n",os[maior].os, os[maior].servico, os[maior].data, os[maior].horas, os[maior].valor);
	
}

//ARQUIVANDO O CODIDO
void arquivar (int n, servicos *os){
	FILE *pont_arq;
	pont_arq = fopen("PRE_SIMULADO.txt", "w");
	if(pont_arq == NULL)
	{
		printf("Erro na abertura do arquivo!");
	}
	int i;
	fprintf(pont_arq,"   COD\t\tTIPO SERVIÇO\tDATA\tHORAS\tVALOR SERV.\n");
	fprintf(pont_arq,"***************************************************************\n");
	for (i=0;i<n;i++){
	
	fprintf(pont_arq,"%s\t%s\t%s\t %d \t%.2f\n",os[i].os, os[i].servico, os[i].data, os[i].horas, os[i].valor);
	}
	fprintf(pont_arq,"\n\nO percentual de Serviços com duração menor que 40 Horas é: %.2f%%",os[i].total);
	fprintf(pont_arq,"\nA média de Horas das OS’s de manutenção é: %.2f horas", os[i].totalhman);
	fprintf(pont_arq,"\nA média de Horas das OS’s de reparo é: %.2f horas", os[i].totalhrep);
	fprintf(pont_arq,"\nA OS de maior custo é: ");
	fprintf(pont_arq,"%s\t%s\t%s\t %d \t%.2f\n",os[maior].os, os[maior].servico, os[maior].data, os[maior].horas, os[maior].valor);
	
	
}

main(){
	
	srand(time(NULL));
	setlocale(LC_ALL,"portuguese");
	servicos os[42];
	preencher (42, os);
	data (42, os);
	valor (42, os);
	q3 (42, os);
	q4 (42, os);
	q5 (42, os);
	imprimir (42, os);
	arquivar (42, os);
	
}
