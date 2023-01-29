
#include <stdio.h>
#include <stdlib.h>
#include<time.h> 
#include<locale.h>
main(){
	
	setlocale(LC_ALL,"");
	srand(time(NULL));
	
	int n1, *p1;
	float n2, *p2;
	
	n1=(rand()%200);
	p1=&n1;
	
	printf("%d\t%x\t%d\t%x", n1, &n1, *p1, p1);
	
	
}
