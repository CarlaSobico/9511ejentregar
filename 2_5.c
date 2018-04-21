#include <stdio.h>
#include <stdlib.h>

#define MSJ_INGRESO "Ingrese la temperatura de la estrella en Kelvin"
#define MSJ_ERROR_TEMP "Temperatura ingresada menor o mayor a lo esperado"
#define MSJ_ERROR "ERROR"
#define MSJ_COLOR "El color de la estrella es"
#define MSJ_COLOR_O "azul"
#define MSJ_COLOR_B "blanco azulado"
#define MSJ_COLOR_A "blanco"
#define MSJ_COLOR_F "blanco amarillento"
#define MSJ_COLOR_G "amarillo"
#define MSJ_COLOR_K "naranja"
#define MSJ_COLOR_M "rojo"

typedef enum {
		clase_O,
		clase_B,
		clase_A,
		clase_F,
		clase_G,
		clase_K,
		clase_M
	}espectral_t;


int main(void){

	espectral_t clase;

	int temp=0, c;

	printf("%s\n", MSJ_INGRESO);

	if(scanf("%i", &temp)!=1){
			fprintf(stderr, "%s\n", MSJ_ERROR );
			return EXIT_FAILURE;
		} 
	while ((c=getchar())!='\n' && c!= EOF);

	if (temp<1700 || temp>50000){
		fprintf(stderr, "%s\n", MSJ_ERROR_TEMP);
	}
	else
	{

		if (28000<temp && temp<=50000){
			clase = clase_O ;
		}
		else if (9600<temp && temp<=28000){
			clase = clase_B ;
		}
		else if (7100<temp && temp<=9600){
			clase = clase_A ;
		}
		else if (5700<temp && temp<=7100){
			clase = clase_F ;
		}
		else if (4600<temp && temp<=5700){
			clase = clase_G ;
		}
		else if (3200<temp && temp<=4600){
			clase = clase_K ;
		}
		else if (1700<=temp && temp<=3200){
			clase = clase_M ;
		}
		else 
			fprintf(stderr, "%s\n", MSJ_ERROR );
	}

	switch(clase){
			case (clase_O):
				printf("%s %s\n", MSJ_COLOR, MSJ_COLOR_O );
				break;

			case (clase_B):
				printf("%s %s\n", MSJ_COLOR, MSJ_COLOR_B );
				break;

			case (clase_A):
				printf("%s %s\n", MSJ_COLOR, MSJ_COLOR_A );
				break;

			case (clase_F):
				printf("%s %s\n", MSJ_COLOR, MSJ_COLOR_F );
				break;

			case (clase_G):
				printf("%s %s\n", MSJ_COLOR, MSJ_COLOR_G );
				break;

			case (clase_K):
				printf("%s %s\n", MSJ_COLOR, MSJ_COLOR_K );
				break;

			case (clase_M):
				printf("%s %s\n", MSJ_COLOR, MSJ_COLOR_M );
				break;

			default:
				fprintf(stderr, "%s\n", MSJ_ERROR ); 
				break; 
		}
	return 0;
}