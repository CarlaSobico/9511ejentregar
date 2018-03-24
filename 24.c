#include <stdio.h>
#include <stdlib.h>

#define MSJ_ENTRADA "Ingrese un día del año"
#define MSJ_SABADO "El día será sabado"
#define MSJ_DOMINGO "El día será domingo"
#define MSJ_LUNES "El día será lunes"
#define MSJ_MARTES "El día será martes"
#define MSJ_MIERCOLES "El día será miercoles"
#define MSJ_JUEVES "El día será jueves"
#define MSJ_VIERNES "El día será viernes"
#define MSJ_ERROR "No es un día del año"
#define primerdia 1
#define ultimodia 366



int main(void)
{
	int DIA,A,P,U;
	P=primerdia;
	U=ultimodia;
	printf("%s\n",MSJ_ENTRADA );
	if(scanf("%d", &DIA)!=1){
		fprintf(stderr, "%s\n",MSJ_ERROR );
		return EXIT_FAILURE;
	}
if (P <= DIA && DIA <= U)
{
	A = DIA % 7;
	switch (A){
		case(0):
			printf("%s\n", MSJ_SABADO);
			break;
		case(1):
			printf("%s\n", MSJ_DOMINGO);
			break;
		case(2):
			printf("%s\n", MSJ_LUNES);
			break;
		case(3):
			printf("%s\n", MSJ_MARTES);
			break;
		case(4):
			printf("%s\n", MSJ_MIERCOLES);
			break;
		case(5):
			printf("%s\n", MSJ_JUEVES);
			break;
		case(6):
			printf("%s\n", MSJ_VIERNES);
			break;
		default: 
			break;
		}
}
else
	{ 
	fprintf(stderr, "%s\n", MSJ_ERROR);


	}

	return EXIT_SUCCESS;
}
