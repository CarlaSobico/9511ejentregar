#include <stdio.h>
#include <stdlib.h>

#define MSJ_ENT_KM "Ingrese los kilometros recorridos (-1 para terminar):"
#define MSJ_ENT_PRE "Ingrese el precio del combustible por litro:"
#define MSJ_ENT_GAS "Ingrese el monto total utilizado en este compra:"
#define MSJ_SAL_REND "Rendimiento (l/100 [km]) de este tanque"
#define MSJ_SAL_REND_PROM "Rendimiento promedio (l/100 [km])"
#define MSJ_SAL_REND_MEJ "Mejor rendimiento (l/100 [km])"
#define MSJ_SAL_REND_PEOR "Peor rendimiento (l/100 [km])"
#define MSJ_SAL_DIST_TOT "Distancia total recorrida [km]"
#define MSJ_SAL_COMB_TOT "Combustible total consumidos [l]"
#define MSJ_SAL_COST_TOT "Costo total de su vehiculo [$]"
#define MSJ_ERROR "ERROR"



int main(void)
{ 	
	float km, precio, gasto, rendimiento;
	float promedio=0, mejorrendimiento=0, peorrendimiento=0, distancia=0, combustible=0, costo=0,/*litros=0*/;
	int rendtot=0, i=0;

	while(km!=-1)
	{

		printf("%s",MSJ_ENT_KM );
		if(scanf("%f",&km)!=1 || km<-1 /*verificar si funciona mejor con km<-1 || km<0 || km>-1*/)
		{
			fprintf(stderr, "%s\n", MSJ_ERROR );
			return EXIT_FAILURE;
		}
		if (km == -1)
		{
			break;
		}
		
		printf("%s",MSJ_ENT_PRE );
		if(scanf("%f",&precio)!=1 || precio<0)
		{
			fprintf(stderr, "%s\n", MSJ_ERROR );
			return EXIT_FAILURE;
		}
		printf("%s",MSJ_ENT_GAS );
		if(scanf("%f",&gasto)!=1 || gasto<0)
		{
			fprintf(stderr, "%s\n", MSJ_ERROR );
			return EXIT_FAILURE;
		}

		rendimiento = (gasto/precio)/km * 100;
		printf("%s >> %.2f\n", MSJ_SAL_REND, rendimiento );
		rendtot+=rendimiento;
		while (i=0)
		{
			mejorrendimiento=rendimiento;
			peorrendimiento=rendimiento;
		}
		if (rendimiento<mejorrendimiento)
		{ 
			mejorrendimiento=rendimiento;
		}
		if (rendimiento>peorrendimiento)
		{ 
			peorrendimiento=rendimiento;
		}
		
		distancia+=km;
		combustible+=(gasto/precio);
		costo+=gasto;
		/*litros+=(gasto/precio);*/
		i++;
		}
		/*promedio=litros/distancia * 100;*/
		promedio=combustible/distancia * 100;
	
	printf("%-s >> %.4f\n", MSJ_SAL_REND_PROM, promedio );
	printf("%-s >> %.2f\n", MSJ_SAL_REND_MEJ, mejorrendimiento );
	printf("%-s >> %.2f\n", MSJ_SAL_REND_PEOR, peorrendimiento );
	printf("%-s >> %.2f\n", MSJ_SAL_DIST_TOT, distancia );
	printf("%-s >> %.2f\n", MSJ_SAL_COMB_TOT, combustible);
	printf("%-s >> %.2f\n", MSJ_SAL_COST_TOT, costo );

return EXIT_SUCCESS;
}

