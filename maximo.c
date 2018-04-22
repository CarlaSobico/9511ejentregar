#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define MAX_COLUMNAS 500
#define MSJ_ERROR "ERROR"

int maximo (int M[][MAX_COLUMNAS] , size_t filas, size_t columnas){
	int i, j, max;
	i=0;
	j=0;
	if (i==0 && j==0){
		max=M[0][0];
	}
	for ( i = 0; i < filas; i++){
		for (j = 0; j < columnas; j++){
			if (M[i][j]>max ){
				max=M[i][j];
			}
		}
	}
	return max;
}
int main (void){
	int M[2][2]={
		{1,2},
		{3,4}
	};
	printf("%i\n", maximo(M,2,2 ));
	return 0;
}