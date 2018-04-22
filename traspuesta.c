
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define MAX_COLUMNAS 5
#define MAX_FILAS 5

void  traspuesta(int matriz[][MAX_COLUMNAS] , size_t filas, size_t columnas);

int main(void)
{
	int M[3][3]={
				{1,2,3},
				{4,5,6},
				{7,8,9}
				};
	int j,i;
	traspuesta(M , 3,3);
	for (i=0; i<3;i++){
		for (j=0; j<3 ;j++){
			printf(" %i ",M[i][j] );/*imprimo a ver que volvio*/
		}
	puts("\n");
	}
	return 0;
}
void traspuesta( int matriz[][MAX_COLUMNAS] , size_t filas, size_t columnas){
	int i,j;
	int traspuesta[MAX_COLUMNAS][MAX_FILAS];	
	for (i=0; i<3;i++){
		for (j=0; j<3 ;j++){
			printf(" %i ",matriz[i][j] );/*imprimo a ver que llego*/
		}
	puts("\n");
	}
	for (i = 0; i < columnas; i++){
		for (j=0; j <filas; j++){
			traspuesta[j][i] = matriz[i][j] ;
		}
	}
	for (i = 0; i < columnas; i++){
			for (j=0; j <filas; j++){
				matriz[i][j]= traspuesta[i][j];
		}
	}
}/***********************dudas********************/
	/*me llegan algunas cosas de la matriz como basura*/
	/*compila pero al correr da error*/