#include <stdio.h>
#include <stdlib.h>

#define MSJ_ENT_KM "Ingrese los kilometros recorridos (-1 para terminar):"
#define MSJ_ENT_PRE "Ingrese el precio del combustible por litro:"
#define MSJ_ENT_GAS "Ingrese el monto total utilizado en este compra:"
#define MSJ_SAL_REND "Rendimiento (l/100km) de este tanque"
#define MSJ_SAL_REND_PROM "Rendimiento promedio (l/100km)"
#define MSJ_SAL_REND_MEJ "Mejor rendimiento (l/100km)"
#define MSJ_SAL_REND_PEOR "Peor rendimiento (l/100km)"
#define MSJ_SAL_DIST_TOT "Distancia total recorrida (km)"
#define MSJ_SAL_COMB_TOT "Combustible total consumidos (l)"
#define MSJ_SAL_COST_TOT "Costo total de su vehiculo ($) "
#define MSJ_ERROR "ERROR"
/*#define
#define
#define
#define
#define
#define
#define
#define
#define*/


int main()
{ 	float KM,PRE,GAS,rend;
	float PROM=0,MEJ=100000,PEOR=0,DIST=0,COMB=0,COST=0,LITROS=0;
	int R=0,i=0;

while(KM!=-1)	{

	printf("%s",MSJ_ENT_KM );
	if(scanf("%f",&KM)!=1){
		fprintf(stderr, "%s\n",MSJ_ERROR );
		return EXIT_FAILURE;
	}
if (KM == -1){ break;}

	printf("%s",MSJ_ENT_PRE );
	if(scanf("%f",&PRE)!=1){
		fprintf(stderr, "%s\n",MSJ_ERROR );
		return EXIT_FAILURE;
	}
	printf("%s",MSJ_ENT_GAS );
	if(scanf("%f",&GAS)!=1){
		fprintf(stderr, "%s\n",MSJ_ERROR );
		return EXIT_FAILURE;
	}
	rend = (GAS/PRE)/KM *100;
	printf("%s >> %.2f\n",MSJ_SAL_REND, rend );
	R+=rend;
	if (rend<MEJ){ MEJ=rend;}
	if (rend>PEOR){ PEOR=rend;}
	DIST+=KM;
	COMB+=(GAS/PRE);
	COST+=GAS;
	LITROS+=(GAS/PRE);
	i++;
}
	PROM=DIST/LITROS;




		printf("%-s >> %.4f\n",MSJ_SAL_REND_PROM, PROM );
		printf("%-s >> %.2f\n",MSJ_SAL_REND_MEJ, MEJ );
		printf("%-s >> %.2f\n",MSJ_SAL_REND_PEOR, PEOR );
		printf("%-s >> %.2f\n",MSJ_SAL_DIST_TOT, DIST );
		printf("%-s >> %.2f\n",MSJ_SAL_COMB_TOT, COMB);
		printf("%-s >> %.2f\n",MSJ_SAL_COST_TOT, COST );



return EXIT_SUCCESS;
}

/*int main()
{ 	float KM,PRE,GAS,rend;
	float PROM=0,MEJ=100000,PEOR=0,DIST=0,COMB=0,COST=0;
	int R=0,i=0;

while(KM!=-1)	{

	printf("%s",MSJ_ENT_KM );
	if(scanf("%f",&KM)!=1){
		fprintf(stderr, "%s\n",MSJ_ERROR );
		return EXIT_FAILURE;
	}
if (KM == -1){ break;}

	printf("%s",MSJ_ENT_PRE );
	if(scanf("%f",&PRE)!=1){
		fprintf(stderr, "%s\n",MSJ_ERROR );
		return EXIT_FAILURE;
	}
	printf("%s",MSJ_ENT_GAS );
	if(scanf("%f",&GAS)!=1){
		fprintf(stderr, "%s\n",MSJ_ERROR );
		return EXIT_FAILURE;
	}
	rend = (GAS/PRE)/KM *100;
	printf("%s >> %.2f\n",MSJ_SAL_REND, rend );
	R+=rend;
	if (rend<MEJ){ MEJ=rend;}
	if (rend>PEOR){ PEOR=rend;}
	DIST+=KM;
	COMB+=(GAS/PRE);
	COST+=GAS;
	i++;
}
	PROM=R/i;




		printf("%-s >> %.2f\n",MSJ_SAL_REND_PROM, PROM );
		printf("%-s >> %.2f\n",MSJ_SAL_REND_MEJ, MEJ );
		printf("%-s >> %.2f\n",MSJ_SAL_REND_PEOR, PEOR );
		printf("%-s >> %.2f\n",MSJ_SAL_DIST_TOT, DIST );
		printf("%-s >> %.2f\n",MSJ_SAL_COMB_TOT, COMB);
		printf("%-s >> %.2f\n",MSJ_SAL_COST_TOT, COST );



return EXIT_SUCCESS;
}*/