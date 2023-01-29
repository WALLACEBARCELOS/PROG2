/*9
Fa�a um programa que gere aleatoriamente a Linha de Produ��o (1 ou 2), o sexo (0 Feminino
ou 1 Masculino) e a produ��o (80 150) de um grupo de 100 oper�rios e calcule:
a . A m�dia da produ��o dos homens;
b . A m�dia da produ��o das mulheres;
*/

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
	int i;
	int linha_producao[100], tipo_sexo[100],producao[100], producao_masc, masc_total, producao_femin, femin_total;
	float media_masc, media_femin;
	char sexo[11];

	printf("_________________________________________________________\n");	
	printf("       LINHA     SEXO         PRODU��O    \n");
	printf("_________________________________________________________\n");
	for( i=0;i<100;i++){

		linha_producao[i]=(rand()%2)+1;
		tipo_sexo[i]=(rand()%2);
		producao[i]=(rand()%80)+70;
		
		if(tipo_sexo[i]==0){
			sprintf(sexo,"FEMININO ");
			producao_femin+=producao[i];
			femin_total ++;
		}
		if(tipo_sexo[i]==1){
			sprintf(sexo,"MASCULINO");
			producao_masc+=producao[i];
			masc_total ++;
			
			
		}
		printf("%d\t%d\t%s\t%3d\n",i+1,linha_producao[i],sexo,producao[i]);
	}
	printf("\n \n \n");
	media_femin=(producao_femin/femin_total);
	media_masc=(producao_masc/masc_total);
	printf("A m�dia da produ��o de HOMENS �: %3.0f\n",media_masc);
	printf("A m�dia da produ��o de MULHERES �: %3.0f\n",media_femin);
}
