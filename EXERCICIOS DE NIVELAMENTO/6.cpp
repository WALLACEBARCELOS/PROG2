/*6 - A prefeitura de Maca� abriu uma linha de cr�dito para os funcion�rios estatut�rios. O valor
m�ximo da presta��o n�o poder� ultrapassar 30% do sal�rio bruto. Fazer um programa que
permita entrar com o sal�rio bruto e o valor da presta��o, e informar se o empr�stimo pode ou
n�o ser concedido.*/
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
	
	float prestacao, salario, empres;
	printf("informe o valor do salario: ");
	scanf("%f",&salario);
	printf("informe a presta��o: ");
	scanf("%f",&prestacao);
	
	empres=(salario*0.30);
	
	
	if (empres>prestacao){
		printf("EMPRESTIMO CONCEDIDO COM SUCESSO");
	}
	else{
		printf("INFELIZMENTE NAO PODEMOS APROVAR SEU EMPRESTIMO");
	}
}
	
	
	
	
