#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

#define CANT 5
#define MSJ_ERROR "ERROR"

typedef enum{
	ST_OK,
	ST_NO_OK
	}status_t;

status_t convertir (int segundos);

int main(void){
	srand (time (NULL));
	convertir(rand() );
	return 0;
}

status_t convertir (int segundos){
	int seg=0, min=0, hor=0;
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