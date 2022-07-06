//tipos de Datos

#include<stdio.h>

int main(){
	
	char a = 'e'; //tamaño = 1byte rango: 0 a 255
	short b = -15; //tamaño = 2 byte rango: -128 a 127
	int c = 1024; //tamaño =  2bytes rango: -32768 a 32767
	unsigned int d = 128; //tamaño = 2bytes rango: 0 a 65535
	long e = 123456; //tamaño 4bytes 
	float f = 15.678; //tamaño 4bytes
	double m = 12345678; //tamaño 8bytes
	printf("El elemento es: %c\n",a);
	printf("El elemento es: %i\n",b);
    printf("El elemento es: %i\n",c);
     printf("El elemento es: %i\n",d);
	printf("El elemento es: %li\n",e);
	printf("El elemento es: %f\n",f);
	printf("El elemento es: %.lf\n",m);
	return 0;
}
