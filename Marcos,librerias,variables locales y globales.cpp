//Directivas del procesador y variables
//librerias
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>

#define PI 3.1416 //macro
int y = 5; //variables global
int main(){
	int x = 10; //variable local
	int suma = 0;
	float suma1 = 0;
	
	suma1 = PI + x;
	suma = PI + x;
	
	printf("La suma es: %i \n",suma);
	
	printf("La suma es: %.2f",suma1);
	return 0;
}
