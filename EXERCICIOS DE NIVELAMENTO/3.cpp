#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
#include<time.h> 
#include<locale.h>
#include<string.h>
main(){
	int a, b, c, m;
	
	printf("informe o primeiro valor: ");
	scanf("%d",&a);
	
	printf("informe o segundo valor: ");
	scanf("%d",&b);
	
	printf("informe o terceiro valor: ");
	scanf("%d",&c);
	
	m=(a+b+c)/3;
	
	printf("A media dos 3 valores he: %d", m);
	
}
