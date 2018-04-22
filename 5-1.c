#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

#define CANT 5
#define MSJ_ERROR "ERROR"
#define MSJ_INGRESO "Ingrese la cantidad de segundos que quiere convertir a hora"

typedef enum{
	ST_OK,
	ST_NO_OK
	}status_t;

status_t convertir (int segundos);

int main(void){
	/*srand (time (NULL));
	convertir(rand() );*/
	int c;
	int segundos;
	printf("%s\n", MSJ_INGRESO);
	if(scanf("%i", &segundos)!=1){
			fprintf(stderr, "%s\n", MSJ_ERROR );
			return EXIT_FAILURE;
		} 
	while ((c=getchar())!='\n' && c!= EOF);
	convertir (segundos);
	return 0;
}

status_t convertir (int segundos){
	int seg, min, hor;
	seg=0;
	min=0;
	hor=0;
	if ( segundos<0 ){
		fprintf(stderr, "%s\n", MSJ_ERROR);
		return ST_NO_OK;
	}
	min=segundos/60;
	hor=min/60;
	min=min%60;
	seg=segundos%60;
	printf("%i:%i:%i\n",hor,min,seg );
	return ST_OK;
}