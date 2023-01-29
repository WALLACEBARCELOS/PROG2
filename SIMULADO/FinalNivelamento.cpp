#include<stdlib.h>
#include<stdio.h>
#include<time.h>
#include<string.h>
main(){
	struct nota_trans{
		int ordem;
		char codigo[10];
		int qtd_dias;
		char mes[12];
		float valor;
		char tipo[12];
		char local[12];	
	};
	srand(time(NULL));
	nota_trans nt[123],nt_Aux;
	int aux,tp,lc,imv;
	float  pie15,tot_Ie15=0,tot_Ie=0;
	float  med_Dias_Tran,tot_Dias_Tran=0,tot_Tran=0,med_Dias_Fret,tot_Dias_Fret=0,tot_Fret=0;
	float val_Med_Set,tot_Val_Set=0,tot_Set=0,val_Med_Out,tot_Val_Out=0,tot_Out=0,val_Med_Nov,tot_Val_Nov=0,tot_Nov=0;
	aux=(rand()%251)+1550;
	for(int i=0;i<123;i++){
		tp=rand()%2;
		lc=rand()%2;
		nt[i].qtd_dias=(rand()%30)+1;
		nt[i].ordem=i+1;
		if(tp==0){
			sprintf(nt[i].codigo,"NT%dF",aux+i);
			sprintf(nt[i].tipo,"Fretamento");
			nt[i].valor = nt[i].qtd_dias * 300 + 500;
			tot_Fret++;
			tot_Dias_Fret+=nt[i].qtd_dias;
		}
		else{
			sprintf(nt[i].codigo,"NT%dT",aux+i);
			sprintf(nt[i].tipo,"Transporte");
			nt[i].valor= nt[i].qtd_dias*450 + 750;
			tot_Tran++;
			tot_Dias_Tran+=nt[i].qtd_dias;
		}
		if(i==0){
			imv=i;
		}
		else{
			if(nt[i].valor>nt[imv].valor)
				imv=i;
		}
		if(i<39){
			sprintf(nt[i].mes,"Setembro");
			tot_Set++;
			tot_Val_Set+=nt[i].valor;
		}
		else{
			if(i<80){
				sprintf(nt[i].mes,"Outubro ");
				tot_Out++;
				tot_Val_Out+=nt[i].valor;
			}
			else{
				sprintf(nt[i].mes,"Novembro");
				tot_Nov++;
				tot_Val_Nov+=nt[i].valor;
			}
		} 
		if(lc==0){
			sprintf(nt[i].local,"Estadual     ");			
		} 
		if(lc==1){
			sprintf(nt[i].local,"InterEstadual");
			tot_Ie++;
			if(nt[i].qtd_dias<15){
				tot_Ie15++;	
			} 
		} 		
		printf("%d\t%s\t%s\t%s\t%s\t%2d\t%9.2f\n",nt[i].ordem,nt[i].codigo,nt[i].mes,nt[i].tipo,nt[i].local,nt[i].qtd_dias,nt[i].valor);		
	}
	printf("======================================================\n");
	pie15=tot_Ie15/tot_Ie*100;
	printf("\n\nPercentual de NT’s com duração menor que 15 dias que eram interestaduais %.1f%%\n",pie15);
	med_Dias_Tran=tot_Dias_Tran/tot_Tran;
	med_Dias_Fret=tot_Dias_Fret/tot_Fret;
	printf("======================================================\n");
	printf("Media de Dias das NT’s de Fretamento:%.1f.\n",med_Dias_Fret);
	printf("Media de Dias das NT’s de Transporte:%.1f.\n",med_Dias_Tran);
	printf("======================================================\n");
	printf("Nota de maior valor.\n");
	printf("%d\t%s\t%s\t%s\t%s\t%2d\t%9.2f\n",nt[imv].ordem,nt[imv].codigo,nt[imv].mes,nt[imv].tipo,nt[imv].local,nt[imv].qtd_dias,nt[imv].valor);
	val_Med_Set=tot_Val_Set/tot_Set;
	val_Med_Out=tot_Val_Out/tot_Out;
	val_Med_Nov=tot_Val_Nov/tot_Nov;
	printf("======================================================\n");
	printf("Valor médios das NT´s do mês de Setembro R$ %9.2f\n",val_Med_Set);
	printf("Valor médios das NT´s do mês de Outubro  R$ %9.2f\n",val_Med_Out);
	printf("Valor médios das NT´s do mês de Novembro R$ %9.2f\n",val_Med_Nov);
}
