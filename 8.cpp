#include <stdio.h>
#include <string.h>

#define MAX_PALABRAS 5
#define MAX_LONGITUD 100

tiene_subcadena(const char *subcadena, char palabras[MAX_PALABRAS][MAX_LONGITUD]) {
    for (int i = 0; i < MAX_PALABRAS; i++) {
        if (strstr(palabras[i], subcadena) == NULL) {
            return 0;
        }
    }
    return 1;
}

int main() {
    char palabras[MAX_PALABRAS][MAX_LONGITUD];
    char subcadena[MAX_LONGITUD];
    char resultado[MAX_LONGITUD] = "";

    for (int i = 0; i < MAX_PALABRAS; i++) {
        printf("Ingrese la palabra %d: ", i + 1);
        scanf("%s", palabras[i]);
    }

    int len = strlen(palabras[0]);
    
    for (int i = 0; i < len; i++) {
        for (int j = i; j < len; j++) {
            strncpy(subcadena, palabras[0] + i, j - i + 1);
            subcadena[j - i + 1] = '\0';
            
            if (tiene_subcadena(subcadena, palabras) && strlen(subcadena) > strlen(resultado)) {
                strcpy(resultado, subcadena);
            }
        }
    }
    
    printf("La cadena comun mas larga es: %s\n", resultado);
    return 0;
}

