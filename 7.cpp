/*Realiza un programa que determine si una cadena de caracteres ingresada
por el usuario es un anagrama de otra cadena también ingresada por el
usuario. Un anagrama es una palabra o frase formada por las mismas
letras de otra palabra o frase, pero en un orden diferente, como por
ejemplo &quot;roma&quot; y &quot;amor&quot;.*/

#include<stdio.h>
#include<string.h>
int main(){
	char palabra[50];
	char palabra2[50];	
	printf("Ingrese la primer palabra:");
	scanf("%s",palabra);
	
	printf("Ingrese la segunda palabra: ");
	scanf("%s",palabra2);
	if (palabra[strlen(palabra)] != palabra2[strlen(palabra2)]){
		printf("no tienen la misma cantidad de letras");
		return 0;
	}
	
	for(int i=0;i<strlen(palabra);i++){
		for(int k=0;k<strlen(palabra);k++){
			if(palabra[i]>palabra[k]){
				char temp = palabra[i];
				palabra[i]=palabra[k];
				palabra[k]=temp;
			}
				if(palabra2[i]>palabra2[k]){
				char temp2 = palabra2[i];
				palabra2[i]=palabra2[k];
				palabra2[k]=temp2;
				}
		}}
		
		if(strcmp(palabra,palabra2)== 0){
			printf("Son anagramas\n");
    } else {
        printf("No son anagramas\n");
    }
	
			
	}
