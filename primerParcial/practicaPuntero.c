#include <stdio.h>

void main(){
	int k=25;
	int constante1=15;
	int* p;
	p=&k; //p ahora tiene la direccion de memoria de k es decir comparte la misma memoria
	*p=30;
	k=56;
	printf("%d\n",*p);
	printf("%d\n",k);
	int *p2=&constante1; //p2 tiene la direccion de memoria de constante1
	printf("%d\n",*p2);
	p2=p;//Mediante esta intruccion ahora p2 tiene la misma memoria que p
	*p=12;
	printf("%d\n",*p2);

}
