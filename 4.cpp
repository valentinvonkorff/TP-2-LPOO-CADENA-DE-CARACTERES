/*Realiza un programa que reemplace todas las apariciones de un car�cter
en una cadena de caracteres ingresada por el usuario por otro car�cter
tambi�n ingresado por el usuario.*/

#include <stdio.h>
#include <string.h>

int main(){
	char palabra[50];
	char acambiar;
	char reemplazo;
	
	printf("ingrese la palabra\t");
	scanf("%s", palabra);
	
 	printf("ingrese la letra a cambiar\t");
 	scanf(" %c", &acambiar);
 	
 	printf("ingrese la letra de reemplazo\t");
 	scanf(" %c", &reemplazo);
	
	for(int i=0;i<strlen(palabra);i++){
		if(palabra[i]==acambiar){
			palabra[i]=reemplazo;
		}
		
	}
printf("La palabra quedaria: %s\n", palabra);

}
