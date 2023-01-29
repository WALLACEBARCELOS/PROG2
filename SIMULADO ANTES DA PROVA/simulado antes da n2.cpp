#include<stdlib.h>
#include<stdio.h>
#include<time.h>
#include<string.h>
#include<locale.h>

struct radiologia{
	int cod;
	int tiposetor;
	char setor[15];
	int tipo;
	char tip[15];
	char p[15];
	char set[15];
	int idade;
	int sexo;
	char sex[15];
	int nota;
	int retornaria;
	char retor[15];
};
 float totalrad, mednota, percentplano;
 int menor;
void preenche(int n, radiologia *rad){
	int aux;
	aux=(rand()%100)+1001;
	
	for(int i=0; i<n; i++){
		//RAND
		rad[i].cod= aux+i;
		rad[i].tiposetor=(rand()%3)+1;//SETOR
		rad[i].tipo=(rand()%2)+1;//TIPO
		rad[i].idade=(rand()%52)+18;//IDADE
		rad[i].sexo=(rand()%2)+1;//SEXO
		rad[i].nota=(rand()%101);//NOTA
		rad[i].retornaria=(rand()%3)+1;//RETORNARIA
		
		
		//SETOR
		if(rad[i].tiposetor==1){
			sprintf(rad[i].setor,"RADIOLOGIA");
			sprintf(rad[i].set,"R");
		}
		if(rad[i].tiposetor==2){
			sprintf(rad[i].setor,"ULTRASSOM ");
			sprintf(rad[i].set,"U");
		}
		if(rad[i].tiposetor==3){
			sprintf(rad[i].setor,"TOMOGRAFIA");
			sprintf(rad[i].set,"T");
		}
		//TIPO
		if(rad[i].tipo==1){
			sprintf(rad[i].tip,"PARTICULAR");
			sprintf(rad[i].p,"PA");
		}
		if(rad[i].tipo==2){
			sprintf(rad[i].tip,"PLANO     ");
			sprintf(rad[i].p,"PL");
		}
		
		//SEXO
		if(rad[i].sexo==1){
			sprintf(rad[i].sex,"MASCULINO");
		}
		if(rad[i].sexo==2){
			sprintf(rad[i].sex,"FEMININO ");
		}
		
		//RETORNARIA
		if(rad[i].retornaria==1){
			sprintf(rad[i].retor,"SIM   ");
		}
		if(rad[i].retornaria==2){
			sprintf(rad[i].retor,"NÃO   ");
		}
		if(rad[i].retornaria==3){
			sprintf(rad[i].retor,"TALVEZ");
		}
		
	}
}

void q3(int n, radiologia *rad){
	float contrad, contnota;
	for(int i=0; i<n; i++){
		if(rad[i].tiposetor==1 && rad[i].nota>70 ){
			contrad++;
		}
		//if(rad[i].nota>70){
		//	contnota++;
		//}	
	}
	totalrad=(contrad/123)*100;
}
void q4(int n, radiologia *rad){
	 float cont;
	for(int i=0; i<n; i++){
		if(rad[i].tipo==1){
			mednota+=rad[i].nota;
			cont++;
		}
	//Para calcular a media voce deve pegar o total do valor informado (Ex. total de notas), fazendo uma variavel receber todas as "notas", depois vai criar um contatdor para verifcar a quantidade de invidios que declararam essas "notas".
	}
	mednota=mednota/cont;
	
}
void q5(int n, radiologia *rad){
	float cont;
	for(int i=0; i<n; i++){
		if(rad[i].tipo==2 && rad[i].retornaria==2){
			cont ++;
		}	
	}
	percentplano+=cont;
	percentplano=(percentplano/123)*100;
}

void q6(int n, radiologia *rad){
	float cont;
	int menorn=100;
	for(int i=0; i<n; i++){
		if(rad[i].nota<menorn){
			menorn=rad[i].nota;
			menor=i;
		}	
	}
	
}
	
	
	
	
void imprimir(int n, radiologia *rad){
	
	printf("Código   	  Setor  	  Tipo         Idade     Sexo           Nota   Retornaria\n");
	printf("=========================================================================================\n");
	for(int i=0; i<n; i++){
		printf("%d%s%s \t%s\t%s\t%d\t%s\t%3d\t%s     \n",rad[i].cod,rad[i].set,rad[i].p, rad[i].setor,rad[i].tip, rad[i].idade, rad[i].sex, rad[i].nota, rad[i].retor );	
	}	
	printf("\n\n\n");
	printf("O Percentual clientes do setor de Radiologia que deu notas maiores que 70 é: %f",totalrad );
	printf("\nA média das notas dadas pelos clientes Particulares é: %f",mednota);
	printf("\nO percentual de clientes do tipo Plano que indicaram que retornariam Não é: %f",percentplano );
	printf("\nOs dados do atendimento que teve a menor nota é: ");
	printf("\n%d%s%s \t%s\t%s\t%d\t%s\t%3d\t%s     \n",rad[menor].cod,rad[menor].set,rad[menor].p, rad[menor].setor,rad[menor].tip, rad[menor].idade, rad[menor].sex, rad[menor].nota, rad[menor].retor );
	
}
void arquivar (int n, radiologia *rad){
	FILE *pont_arq;
	pont_arq = fopen("SIMULADO.txt", "w");
	if(pont_arq == NULL)
	{
		printf("Erro na abertura do arquivo!");
	}
	fprintf(pont_arq,"Código   	  Setor  	  Tipo         Idade     Sexo           Nota   Retornaria\n");
	fprintf(pont_arq,"=========================================================================================\n");
	int i;
	for(int i=0; i<n; i++){
		fprintf(pont_arq,"%d%s%s \t%s\t%s\t%d\t%s\t%3d\t%s     \n",rad[i].cod,rad[i].set,rad[i].p, rad[i].setor,rad[i].tip, rad[i].idade, rad[i].sex, rad[i].nota, rad[i].retor );	
	}	
	fprintf(pont_arq,"\n\n\n");
	fprintf(pont_arq,"O Percentual clientes do setor de Radiologia que deu notas maiores que 70 é: %f",totalrad );
	fprintf(pont_arq,"\nA média das notas dadas pelos clientes Particulares é: %f",mednota);
	fprintf(pont_arq,"\nO percentual de clientes do tipo Plano que indicaram que retornariam Não é: %f",percentplano );
	fprintf(pont_arq,"\nOs dados do atendimento que teve a menor nota é: ");
	fprintf(pont_arq,"\n%d%s%s \t%s\t%s\t%d\t%s\t%3d\t%s     \n",rad[menor].cod,rad[menor].set,rad[menor].p, rad[menor].setor,rad[menor].tip, rad[menor].idade, rad[menor].sex, rad[menor].nota, rad[menor].retor );
	fclose(pont_arq);
	
}

main(){
	srand(time(NULL));
	setlocale(LC_ALL,"portuguese");
	radiologia rad[123];
	preenche (123, rad);
	q3 (123, rad);
	q4 (123, rad);
	q5 (123, rad);
	q6 (123, rad);
	imprimir (123, rad);
	arquivar (123, rad);
}












