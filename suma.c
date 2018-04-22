#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define MAX_COLUMNAS 500
#define MSJ_ERROR "ERROR"

int suma (int M[][MAX_COLUMNAS] , size_t filas, size_t columnas, int n ){
	int i, j;
	for (i=0; i<filas ; i++){
		for ( j = 0; j < columnas; j++){
			M[i][j]+=n;
		}
	}
	return 0;
}

int main (void){
	int M[2][2]={
		{1,2},
		{3,4}
	},i,j;
	suma(M,2,2,2);
	for (i=0; i<2 ; i++){
		for ( j = 0; j < 2; j++){
			printf("%i\n",M[i][j]);
		}
	}
	return 0;
}