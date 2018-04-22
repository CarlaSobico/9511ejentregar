#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define MAX_COLUMNAS 500
#define MSJ_ERROR "ERROR"
#define MSJ_FUERA_DE_RANGO "Matriz sobredimencionada"

void mult_mat (int A[][MAX_COLUMNAS], int B[][MAX_COLUMNAS], int C[][MAX_COLUMNAS], size_t afil, size_t acol, size_t bfil, size_t bcol){
	int i,j,v,k;
	if (afil!=bcol || bfil!=acol ){
		fprintf(stderr, "%s\n", MSJ_FUERA_DE_RANGO );
	}
	for (i = 0; i < afil; i++){
		for (k = 0; k < bcol; k++){
			v=0;
			for (j = 0; j < bfil; j++){
				v+= A[i][j] * B[j][k];
				C[i][k]=v;
			}
		}
	}
}

int main (void){
	int M[2][2]={
		{1,2},
		{3,4}
	};
	int C[2][2];
	int i,j;
	mult_mat(M,M,C,2,2,2,2);
	for (i=0; i<2 ; i++){
		for ( j = 0; j < 2; j++){
			printf("%i\n",C[i][j]);
		}
	}
	return 0;
}