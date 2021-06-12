#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdbool.h>

bool s_flag, d_flag = false;
void dias(int d){
	int anio= d / 365;
	int res= d %365;
	int mes= res/30;
	int dia= res%30;
	printf("\naño\tmes\tdias\n");
	printf("%d\t%d\t%d\t",anio,mes,dia);
}
void segundos(int s){
	int horas= s / 3600;
	int res= s %3600;
	int minutos= res/60;
	int segundos= res%60;
	printf("\nhoras\tminuto\tsegundos\n");
	printf("%d\t%d\t%d\t\n",horas,minutos,segundos);
}
void print_help(){
	printf("Con -s ingresa números y con -d también");

}
int main(int argc, char** argv){
	int opt;
	int num_segundos, num_dias;

	while((opt=getopt(argc,argv,"sdh"))!=-1){
		switch(opt){
			case 's':
				num_segundos=atoi(argv[optind]);
				s_flag=true;
				break;
			case 'd':
				num_dias=atoi(argv[optind]);
				d_flag=true;
				break;
			case 'h':
				print_help();
				return 0;
			default:
				fprintf(stderr,"No lo usó correctamente");
				return -1;
		}
	}
	
	if(d_flag){
		segundos(num_segundos);
	}
	if(s_flag){
		dias(num_dias);
	}
	
	return 0;
}
