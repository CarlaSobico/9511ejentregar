#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#ifndef M_PI
#define M_PI 3.14159265359
#endif

#define MSJ_INGRESO_RADIO "Ingrese el radio del cilindro"
#define MSJ_INGRESO_ALTURA "Ingrese la altura del cilindro"
#define MSJ_ERROR "Valor inesperado"
#define MSJ_DIAMETRO "El diametro es"
#define MSJ_CIRCUNFERENCIA "La circunferencia es"
#define MSJ_BASE "La base es"
#define MSJ_VOLUMEN "El volumen es"

float cilindro_diametro (float radio){
	float diametro;
	return diametro = radio * 2;
}

float cilindro_circunferencia (float radio){
	float diametro, circunferencia;
	diametro = /*cilindro_diametro(radio)*/ radio*2;
	return circunferencia = M_PI * diametro;
}

float cilindro_base (float radio){	
	float base;
	return base = M_PI * radio * radio;
}

float cilindro_volumen (float radio, float altura){
	float base, volumen;
	base = cilindro_base(radio);
	return volumen = base * altura;
}

int main (void){
	int c;
	float radio, altura;
	printf("%s\n", MSJ_INGRESO_RADIO);
	if(scanf("%f", &radio)!=1){
			fprintf(stderr, "%s\n", MSJ_ERROR );
			return EXIT_FAILURE;
		} 
	while ((c=getchar())!='\n' && c!= EOF);
	printf("%s\n", MSJ_INGRESO_ALTURA);
	if(scanf("%f", &altura)!=1){
			fprintf(stderr, "%s\n", MSJ_ERROR );
			return EXIT_FAILURE;
		} 
	while ((c=getchar())!='\n' && c!= EOF);

	printf("%s %.2f\n", MSJ_DIAMETRO, cilindro_diametro(radio));
	printf("%s %.2f\n", MSJ_CIRCUNFERENCIA, cilindro_circunferencia(radio));
	printf("%s %.2f\n", MSJ_BASE, cilindro_base(radio));
	printf("%s %.2f\n", MSJ_VOLUMEN, cilindro_volumen(radio, altura));

	return 0;
}