#include <stdio.h>
#include <string.h>

int buscarSubcadena(const char *cadena, const char *subcadena) {
    int largo_cadena = strlen(cadena);
    int largo_subcadena = strlen(subcadena);
    
    for (int i = 0; i <= largo_cadena - largo_subcadena; i++) {
        int j;
        for (j = 0; j < largo_subcadena; j++) {
            if (cadena[i + j] != subcadena[j]) {
                break;
            }
        }
        if (j == largo_subcadena) {
            return i; 
        }
    }
    return -1;
}

int main() {
    char cadena[200], subcadena[100];
    
    printf("ingresa una cadena: ");
    fgets(cadena, sizeof(cadena), stdin);
    cadena[strcspn(cadena, "\n")] = 0;
    
    printf("ingresa la subcadena a buscar: ");
    fgets(subcadena, sizeof(subcadena), stdin);
    subcadena[strcspn(subcadena, "\n")] = 0;
    
    int posicion = buscarSubcadena(cadena, subcadena);
    
    if (posicion != -1) {
        printf("la subcadena se encuentra en la posicion %d\n", posicion);
    } else {
        printf("la subcadena no se encuentra en la cadena\n");
    }
    
    return 0;
}

