#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define MAX_COLUMNAS 500
#define MSJ_MATRIZ "La matriz es"
#define MSJ_POSITIVA "positiva"
#define MSJ_NOPOSITIVA "no positiva"
#define MSJ_NEGATIVA "negativa"
#define MSJ_NONEGATIVA "no negativa"
#define MSJ_NADA "no cumple ninguna de las condiciones"

typedef enum {positiva/*0*/,
			  nopositiva/*1*/,
			  negativa/*2*/,
			  nonegativa/*3*/,
			  cero/*4*/,
			  nocero/*5*/,
			  nada/*6*/
			  }tipo_t ;


tipo_t matriz_positiva (int M[][MAX_COLUMNAS], size_t filas, size_t columnas){

	tipo_t a;
	int i,j;

	for (i = 0; i < columnas; ++i){
		for ( j = 0; j < filas; ++j){
			if (M[i][j] < 0){
				return a = nopositiva;
			}
		}
	}
	return a = positiva;
}

tipo_t matriz_negativa (int M[][MAX_COLUMNAS], size_t filas, size_t columnas){

	tipo_t a;
	int i,j;

	for ( i = 0; i < columnas; ++i){
		for ( j = 0; j < filas; ++j){
			if (M[i][j] > 0){
				return a = nonegativa;
			}
		}
	}
	return a = negativa;
}

tipo_t matriz_cero (int M[][MAX_COLUMNAS], size_t filas, size_t columnas){

	tipo_t a;
	int i,j;
	for (i = 0; i < columnas; ++i){
		for ( j = 0; j < filas; ++j){
			if (M[i][j] == 0){
				return a = cero;
			}
		}
	}
	return a = nocero;
}

tipo_t tipo_matriz (int M[][MAX_COLUMNAS], size_t filas, size_t columnas){

	tipo_t p,n,c,tipo;

	p = matriz_positiva(M, filas, columnas);
	n = matriz_negativa (M, filas, columnas);
	c = matriz_cero (M, filas, columnas);

	if (p == positiva && c == nocero && n == nonegativa ){
		
		return tipo = positiva;
	}
	else if (p == positiva && c == cero && n == nonegativa ){
		
		return tipo = nopositiva;
	}
	else if (n == negativa && c == nocero && p == nopositiva){
		
		return tipo = negativa;
	} 
	else if (n == negativa && c == cero && p == nopositiva){
		
		return tipo = nopositiva;
	}
	else 
		return nada;
} 

int main(void){
	int M[3][3]={ {1,2,3},
					{4,5,6},
					{7,8,9}
				};
	tipo_t a;
	a = tipo_matriz(M,3,3);
	printf("%c\n", a);
	switch (a){
		case (positiva):
			printf("%s %s\n", MSJ_MATRIZ, MSJ_POSITIVA );
			break;

		case (nopositiva):
			printf("%s %s\n", MSJ_MATRIZ, MSJ_NOPOSITIVA );
			break;

		case (negativa):
			printf("%s %s\n", MSJ_MATRIZ, MSJ_NEGATIVA );
			break;

		case (nonegativa):
			printf("%s %s\n", MSJ_MATRIZ, MSJ_NONEGATIVA );
			break;

		default:
			printf("%s %s\n", MSJ_MATRIZ, MSJ_NADA );
			break;
	}
	return 0;
}