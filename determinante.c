#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define MAX_COLUMNAS 500
#define MSJ_ERROR "ERROR"
#define MSJ_FUERA_DE_RANGO "Matriz sobredimencionada"

int determinante (int M[][MAX_COLUMNAS] , size_t filas, size_t columnas){
	/* fila tiene que ser de dos o tres fila y columna*/
	int det;
	if (filas!=columnas || filas>3 || columnas>3 ){
		fprintf(stderr, "%s\n", MSJ_FUERA_DE_RANGO );
		return EXIT_FAILURE;
	}
	else if ( (filas=2) && (columnas=2)){
		det = ( M[0][0] * M[1][1] ) - ( M[0][1] * M[1][0] ) ;
	}
	else {
		det = ( ( M[0][0] * M[1][1] * M[2][2] ) + ( M[0][1] * M[1][2] * M[2][0] ) + ( M[0][2] * M[1][0] * M[2][1] ) - ( M[0][2] * M[1][1] * M[2][0] ) - ( M[0][1] * M[1][0] * M[2][2] ) - ( M[0][0] * M[1][2] * M[2][1] ) );
	}
	return det;
}

int main (void){
	int M[2][2]={
		{1,2},
		{3,4}
	};
	printf("%i\n", determinante(M,2,2 ));
	return 0;
}