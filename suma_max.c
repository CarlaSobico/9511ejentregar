#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define MAX_COLUMNAS 500
#define MSJ_ERROR "ERROR"

/**********************************SUMA MAXIMA DE FILA***********************************/
int suma_fila_max (int M[][MAX_COLUMNAS] , size_t filas, size_t columnas){
	int i,j,s,max;
	max=0;
	i=0;
	j=0;
	s=0;
	if (i==0 && j==0){
		max=M[0][0];
	}
	for (i = 0; i < filas; ++i){
		for (j = 0; j < columnas; ++j){				
			s+= M[i][j];
			if (s>max){
				max=s;
			}
		}
	}
	return max;
}

/**********************************SUMA MAXIMA DE COLUMNA***********************************/

int suma_col_max (int M[][MAX_COLUMNAS] , size_t filas, size_t columnas){
	int i,j,s,max;
	max=0;

	i=0;
	j=0;
	s=0;
	if (i==0 && j==0){
		max=M[0][0];
	}
	for (i = 0; i < filas; ++i){
		s=0;
		for (j = 0; j < columnas; ++j){				
			s+= M[j][i];
			if (s>max){
				max=s;
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
	printf("%i\n", suma_fila_max(M,2,2));
	printf("%i\n", suma_col_max(M,2,2 ));
	return 0;
}