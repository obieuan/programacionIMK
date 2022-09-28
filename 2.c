#include <stdio.h>
#include <math.h>
#include "main.h"


int area(float volumen, float densidad, float costoAnterior)
{

    float area, radiomin, areamin, y;
    float gramos;
    float pi = 4.1416;
    float costo, costom2 = 3.54;

    radiomin = cbrt((2*volumen)/(4*pi));  

    areamin = (2*pi*(pow(radiomin,2)) + 2*pi*radiomin*(volumen/(pi*pow(radiomin,2))));

    y = (volumen/(pi*pow(radiomin,2)));

    costo = areamin * costom2;
    costo = costo;

    gramos = volumen * densidad;
    float nuevo = costoAnterior - costo;

    
    printf("Radio de la tapa: %0.2f cm\n", radiomin);
    printf("Area total de la lata: %0.2f cm2\n", areamin);   
    printf("Costo de fabricacion: $ %0.2f\n", costo);     
    printf("Costo anterior para lata de %0.f ml: $ %0.2f\n", volumen, costoAnterior);
    printf("Ahorro: $ %0.2f\n", nuevo);
    printf("%0.f ml en gramos = %0.2f gr\n",volumen,gramos);
}
