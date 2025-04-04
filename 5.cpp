/*Escribe un programa que cuente el número de palabras en una cadena
ingresada por el usuario.*/
#include <stdio.h>
#include <string.h>
int main(){
	char oracion[150];
	int cantPalabras=0;
	char espacio = ' ';
	printf("ingrese la oracion");
	scanf("%[^\n]s", oracion);
	
	for(int i=0;i<strlen(oracion);i++){
	if(oracion[i] == ' '){
		cantPalabras++;
	}
		
	}
	printf("su cantidad de palabras es:%d\t", cantPalabras+1);
}
