#include <string.h>
#include <stdio.h>
//Realiza un programa que cuente cuántas vocales tiene una cadena de
//caracteres ingresada por el usuario.
int main(){
	char palabra[50];
	const char a='a';
	const char e='e';
	const char i='i';
	const char o='o';
	const char u='u';
	
	int cantVocales=0;
	
		printf("ingrese su palabra\n");
	scanf("%s", palabra);

	for(int i=0;i<=strlen(palabra);i++){
		if(palabra[i]==a||palabra[i]==e||palabra[i]==i||palabra[i]==o||palabra[i]==u){

			cantVocales++;
		}
	}
	printf("%d", cantVocales);
}
