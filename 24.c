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
#define PRIMERDIA 1
#define ULTIMODIA 366



int main(void)
{
	int dia;

	printf("%s\n",MSJ_ENTRADA );
	if(scanf("%d", &dia)!=1){
		fprintf(stderr, "%s\n",MSJ_ERROR );
		return EXIT_FAILURE;
	}
if (PRIMERDIA <= dia && dia <= ULTIMODIA)
	{
	dia = dia % 7;

	switch (dia){
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
