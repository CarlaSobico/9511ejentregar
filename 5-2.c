#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#define MAX_COL 4

void imp_matriz (int matriz[][MAX_COL], int col, int fil, int * ptr, int (*ptr2vector)[4]){
	for (ptr2vector=matriz ; ptr2vector< matriz +col; ptr2vector++){
		for (ptr = *ptr2vector; ptr < *ptr2vector + fil; ptr++){
			printf(" %i ",*ptr );
		}
	putchar('\n');
	}
}

int main(void){
	int matriz[3][4] = {{ 1, 2, 3, 4}, { 5, 6, 7, 8}, { 9,10,11,12}};
	int * ptr;
	int (*ptr2vector)[4];
	int fil, col;
	fil=3;
	col=4;
	imp_matriz(matriz,fil,col, ptr, ptr2vector );
	return 0;
}