/*6 - A prefeitura de Macaé abriu uma linha de crédito para os funcionários estatutários. O valor
máximo da prestação não poderá ultrapassar 30% do salário bruto. Fazer um programa que
permita entrar com o salário bruto e o valor da prestação, e informar se o empréstimo pode ou
não ser concedido.*/
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
	printf("informe a prestação: ");
	scanf("%f",&prestacao);
	
	empres=(salario*0.30);
	
	
	if (empres>prestacao){
		printf("EMPRESTIMO CONCEDIDO COM SUCESSO");
	}
	else{
		printf("INFELIZMENTE NAO PODEMOS APROVAR SEU EMPRESTIMO");
	}
}
	
	
	
	
