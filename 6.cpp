#include <stdio.h>
#include <string.h>


int main() {
    char cadena[150];
    char palabras[150][150];
    int count = 0;
    
    printf("ingresa una cadena: ");
    fgets(cadena, 150, stdin);
    
    cadena[strcspn(cadena, "\n")] = 0;
    
    int i = 0, j = 0, k = 0;
    while (cadena[i] != '\0') {
        if (cadena[i] != ' ') {
            palabras[k][j++] = cadena[i];
        } else {
            palabras[k][j] = '\0';
            k++;
            j = 0;
        }
        i++;
    }
    palabras[k][j] = '\0';
    
    for (int m = k; m >= 0; m--) {
        printf("%s", palabras[m]);
        if (m > 0) printf(" ");
    }
    printf("\n");
    
    return 0;
}

