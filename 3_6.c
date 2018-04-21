#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#ifndef M_PI
#define M_PI 3.14159265359
#endif

float cilindro_diametro (float radio){
	float diametro;
	return diametro = radio * 2;
}

float cilindro_circunferencia (float radio){
	/*float diametro, circunferencia;*/
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
