//ENTRADA Y SALIDA DE DATOS

#include<stdio.h>

int main(){
	
	char x[50];
	
	printf("Digite SU Nombre: ");
	gets(x);// para guardar una cadena de caracteres
	printf("Su Nombre es : %s \n",x);
	return 0;
}
