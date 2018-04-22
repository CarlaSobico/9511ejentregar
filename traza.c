#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define MAX_COLUMNAS 500
#define MSJ_ERROR "ERROR"


int traza (int M[][MAX_COLUMNAS] , size_t filas, size_t columnas ){
	int i;
	int traza;
	traza=0;
	if (columnas!=filas){
		fprintf(stderr, "%s\n", MSJ_ERROR );
		return EXIT_FAILURE;
	}
	for (i = 0; i < columnas; i++){
		traza+=M[i][i]; 
	}
	return traza;
}

int main (void){
	int M[2][2]={
		{1,2},
		{3,4}
	};
	printf("%i\n", traza(M,2,2 ));
	return 0;
}