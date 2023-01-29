#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
#include<time.h> 
#include<locale.h>
#include<string.h>
int main()
{
	struct transporte{
		char mes[14];
		char nt[20];
		int numero_nt;
		int tp_servico;
		char servico[14];
		int tipo_local;
		char local[14];
		int dias;
		int valor;
		float m_dias;

	};
	transporte trans[123];

	int i;
	float total_inter, m_valor,m_valor_s, m_valor_o,m_valor_n;
	float valor_set, valor_out, valor_nov;
	float m_dias, m_dias_t;
	int m_freta, m_transp,imaior,total_set=0, total_out=0, total_nov=0;
	float geral;
	float total_dias;
	float maior=-1;
	

	
	setlocale(LC_ALL,"");
	srand(time(NULL));
	
//	printf("******************************************************************************\n");
	printf("CÓDIGO             MÊS             TIPO              LOCAL      DIAS     VALOR\n");
//	printf("******************************************************************************\n");
	for ( i=0;i<123;i++){
		trans[i].numero_nt=(rand()%250)+1550;
		trans[i].tp_servico=(rand()%2);
		trans[i].tipo_local=(rand()%2);
		trans[i].dias=(rand()%30)+1;
		total_dias+=trans[i].dias;
		if(i<40){
			sprintf(trans[i].mes,"SETEMBRO");
			total_set++;	
			m_valor_s+=trans[i].valor;
			
		}
		if((i>39)&&(i<81)){
			sprintf(trans[i].mes,"OUTUBRO ");
			total_out++;
			m_valor_o+=trans[i].valor;	
			
		}
		if((i>=80)&&(i<=123)){
			sprintf(trans[i].mes,"NOVEMBRO ");
			total_nov++;
			m_valor_n+=trans[i].valor;	
			
		}
		
		if(trans[i].tp_servico==0){
			sprintf(trans[i].servico,"FRETAMENTO");
			sprintf(trans[i].nt,"NT%dF",trans[i].numero_nt);
			trans[i].valor=(trans[i].dias*300)+500;
			m_dias+=trans[i].dias;// Para somar a media devemos criar uma variavel para receber o total de dias da variavel
			m_freta++;//criar um contador para somar todos os numeros de fretamento
			
		}
		if(trans[i].tp_servico==1){
			sprintf(trans[i].servico,"TRANSPORTE");
			sprintf(trans[i].nt,"NT%dT",trans[i].numero_nt);
			trans[i].valor=trans[i].dias*450+750;
			m_dias_t+=trans[i].dias;
			m_transp++;
		}
		if(trans[i].tipo_local==0){
			sprintf(trans[i].local,"ESTADUAL     ");
			
		}
		if(trans[i].tipo_local==1){
			sprintf(trans[i].local,"INTERESTADUAL");
			if(trans[i].dias<15){
				total_inter++;
			}
		}
		
		if(trans[i].valor>maior){
			maior=trans[i].valor;
			imaior=i;
		}
		
			
		printf("%s\t\t%s\t%s\t %s\t %2.d\t %0.2d\n",trans[i].nt,trans[i].mes, trans[i].servico,trans[i].local,trans[i].dias, trans[i].valor );
		
	}
	printf("\n\n\n");
	
	total_inter=(total_inter/123*100);
	printf("O percentual de NT's com duração menor que 15 dias que eram interestaduais: %0.2f\n",total_inter );
	
	m_dias=m_dias/m_freta;
	printf("\nA médias de dias das NT's' do tipo FRETAMENTOS é: %.2f",m_dias );
	
	m_dias_t=m_dias_t/m_transp;
	printf("\nA médias de dias das NT's' do tipo TRANSPORTE é: %.2f",m_dias_t );
	
	geral=(total_dias)/123;
	printf("\nA médias de dias das NT's' de TODOS os tipos é: %.2f",geral );	
	
	printf("\nA NT de maior valor é: %2.f\t", maior);
	printf("%s\t\t%s\t%s\t %s\t %2.d\t \n",trans[imaior].nt,trans[imaior].mes, trans[imaior].servico,trans[imaior].local,trans[imaior].dias);	
	
	valor_set=m_valor_s/30;
	printf("\nO valor médio das NT's no mês de SETEMBRO %.2f\n",valor_set);
	valor_out=m_valor_o/total_out;
	printf("O valor médio das NT's no mês de OUTUBRO %.2f\n",valor_out);
	valor_nov=m_valor_n/total_nov;
	printf("O valor médio das NT's no mês de NOVEMBRO %.2f\n",valor_nov);


}














