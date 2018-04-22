#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

#define MSJ_FUERA_DE_RANGO "El dato ingresado no se encuentra"
#define MSJ_ERROR "ERROR"
#define MSJ_PROB_A "La probabilidad A es"
#define MSJ_PROB_B "La probabilidad B es"


/**************************probabilia a***************************/
int probabilidad_a (void){
	int g;
	float P;
	srand (time (NULL));
	P=(float) rand()/RAND_MAX ;
	if (0<P && P<=0.2){
		g=0;
	}
	else if (0.2<P && P<=1){
		g=1;
	}
	else printf("%s\n", MSJ_FUERA_DE_RANGO );
	return g;
}


/*************************************probabilidad b*********************/
int probabilidad_b (void){
	float a;
	srand (time (NULL));	
	a=(float) rand()/RAND_MAX;
	if (0<a && a<=0.1){
		return 3;
	}
	else if (0.1<a && a<=0.65){
		return 5;
	}
	else if (0.65<a && a<= 1){
		return 9;
	}
	else
		printf("%s\n", MSJ_FUERA_DE_RANGO );

	return -1;
}

/******************************moneda****************************/

#define MSJ_MONEDA_HEAD "HEAD"
#define MSJ_MONEDA_TAIL "TAIL"

typedef enum {
	HEAD, TAIL
}lado_t;

int moneda (void)
{
	int a;
	srand (time (NULL));
	a=rand();
	a=a%2;/*el resto va a ser 0 o 1*/

	switch (a){
		case (0):
			return 0;
			break;
		case (1):
			return 1;
			break;
		default:
			return -1;
			break;
	}
	
}

void imprimir_moneda (void){
	int l;
	l=moneda();	

	switch (l){
		case(0):
			printf("%s\n", MSJ_MONEDA_HEAD );
			break;
		case(1):
			printf("%s\n", MSJ_MONEDA_TAIL);
			break;
		default:
			break;
	}
}


/******************************dado**********************/
#define DBJ_0 "|     |"
#define DBJ_1_LEFT "|*    |"
#define DBJ_1_MIDDLE "|  *  |"
#define DBJ_1_RIGHT "|    *|"
#define DBJ_2 "|*   *|"



int tirar_dado (void){
	int c;
	srand (time (NULL));
	c=rand();
	c=(c%6)+1; 
	return c;
}

int imprimir_dado (int c){
	switch (c)
	{
		case (1):
			printf(" %s\n %s\n %s\n",DBJ_0, DBJ_1_MIDDLE, DBJ_0 );
			break;

		case (2):
			printf(" %s\n %s\n %s\n",DBJ_1_RIGHT, DBJ_0, DBJ_1_LEFT );
			break;

		case (3):
			printf(" %s\n %s\n %s\n",DBJ_1_LEFT, DBJ_1_MIDDLE, DBJ_1_RIGHT );
			break;

		case (4):
			printf(" %s\n %s\n %s\n",DBJ_2, DBJ_0, DBJ_2 );
			break;
						
		case (5):
			printf(" %s\n %s\n %s\n",DBJ_2, DBJ_1_MIDDLE, DBJ_2 );
			break;
			
		case (6):
			printf(" %s\n %s\n %s\n",DBJ_2, DBJ_2, DBJ_2 );
			break;
		
		default:
			fprintf(stderr, "%s\n", MSJ_FUERA_DE_RANGO);
			break;
	}
	return EXIT_SUCCESS;
}

int main (void){
	printf("%s %i\n",MSJ_PROB_A , probabilidad_a() );
	printf("%s %i\n",MSJ_PROB_B , probabilidad_b() );
	imprimir_moneda();
	imprimir_dado(tirar_dado() ) ;
	return 0;
}
