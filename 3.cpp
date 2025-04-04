/*Realiza un programa que determine si una cadena de caracteres ingresada
por el usuario es palíndromo (se lee igual de izquierda a derecha que de
derecha a izquierda).*/

#include <stdio.h>
#include <string.h>

int main(){
	char palabra[50];
	
	printf("ingrese la palabra");
	scanf("%s", palabra);
	
	for(int i=0;i<strlen(palabra);i++){
		if(palabra[i] != palabra[srtlen(palabra)-i-1]){
			printf("no es palindromo");
			return 0;
		}
	}
	printf("si es palindromo");
}
