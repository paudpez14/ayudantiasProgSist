#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void dias(int d){
	int anio= d / 365;
	int res= d %365;
	int mes= res/30;
	int dia= res%30;
	printf("año\tmes\tdias\n");
	printf("%d\t%d\t%d\t",anio,mes,dia);
}
void segundos(int s){
	int horas= s / 3600;
	int res= s %3600;
	int minuto= res/60;
	int segundp= res%60;
	printf("horas\tminuto\tsegundos\n");
	printf("%d\t%d\t%d\t",hora,minuto,segundo);
}

void main(int argc, char** argv){
	dias(7264);
}
