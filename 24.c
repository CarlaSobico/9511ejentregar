#include <stdio.h>
#include <stdlib.h>

#define MSJ_ENTRADA "Ingrese un día del año. Siendo 1 domingo y 7 sábado"
#define MSJ_DIA "El día será"
#define MSJ_DIA_SABADO "sabado"
#define MSJ_DIA_DOMINGO "domingo"
#define MSJ_DIA_LUNES "lunes"
#define MSJ_DIA_MARTES "martes"
#define MSJ_DIA_MIERCOLES "miercoles"
#define MSJ_DIA_JUEVES "jueves"
#define MSJ_DIA_VIERNES "viernes"
#define MSJ_ERROR "No es un día del año"
#define PRIMERDIA 1
#define ULTIMODIA 366



int main(void)
{
	int dia;

	printf("%s\n",MSJ_ENTRADA );
	if(scanf("%d", &dia)!=1)
	{
		fprintf(stderr, "%s\n",MSJ_ERROR );
		return EXIT_FAILURE;
	}
	//Falta limpiar buffer
	
	if (PRIMERDIA > dia || dia > ULTIMODIA)
	{ 
		fprintf(stderr, "%s\n", MSJ_ERROR);
	}
	else
	{
		dia = dia % 7;
       	                                                        
		switch (dia)
		{
			case(0):
				printf("%s %s\n",MSJ_DIA, MSJ_DIA_SABADO);
				break;
			case(1):
				printf("%s %s\n",MSJ_DIA, MSJ_DIA_DOMINGO);
				break;
			case(2):
				printf("%s %s\n",MSJ_DIA, MSJ_DIA_LUNES);
				break;
			case(3):
				printf("%s %s\n",MSJ_DIA, MSJ_DIA_MARTES);
				break;
			case(4):
				printf("%s %s\n",MSJ_DIA, MSJ_DIA_MIERCOLES);
				break;
			case(5):
				printf("%s %s\n", MSJ_DIA, MSJ_DIA_JUEVES);
				break;
			case(6):
				printf("% %s\n", MSJ_DIA, MSJ_DIA_VIERNES);
				break;
			default: 
				break;
		}
	}


	return EXIT_SUCCESS;
}
