

#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

#define MSJ_ERROR "Objetivo mayor que el mas grande o menor que el mas chico "
/*Debe recibir un vector ordenado*/


int busqueda_binaria(const int v[], size_t n, int objetivo, size_t izq, size_t der){
	int mitad;
	mitad= (n-1)/2;
	if (objetivo > der || objetivo < izq){
		fprintf(stderr, "%s\n", MSJ_ERROR );
		return -1; 
	}
	while (v[mitad] !=objetivo){
		if (v[mitad]>objetivo ){
			der=mitad-1;
			mitad= (der+izq)/2;
		}
		else{
			izq=mitad+1;
			mitad= (der+izq)/2;
		}
	}
	if (v[mitad]==objetivo){
		return mitad;
	}
	return 0;
}
/***********para probar**************/
int main (void){
	int v[]={1,2,3,4,5,6,7,8,9,10,11,12,13};
	int j;
	j=busqueda_binaria(v,13,8,0,12);
	printf("%i\n", j);
	return 0;
}
