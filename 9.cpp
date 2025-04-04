 #include <stdio.h>
#include <string.h>

void alternarMayusMinus(char *str) {
    int i;
    for (i = 0; str[i] != '\0'; i++) {
        if (i % 2 == 0 && str[i] >= 'a' && str[i] <= 'z')
            str[i] -= 32;
        else if (i % 2 != 0 && str[i] >= 'A' && str[i] <= 'Z')
            str[i] += 32;
    }
}

void PrimerMayus(char *str) {
    int nuevo = 1;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ') {
            nuevo = 1;
        } else if (nuevo && str[i] >= 'a' && str[i] <= 'z') {
            str[i] -= 32;
            nuevo = 0;
        } else if (!nuevo && str[i] >= 'A' && str[i] <= 'Z') {
            str[i] += 32;
        }
    }
}

int main() {
    char oracion[200];
    int opcion;
    
    printf("ingresa una oracion: ");
    fgets(oracion, sizeof(oracion), stdin);
    oracion[strcspn(oracion, "\n")] = 0;
    
    printf("elige una opcion:\n");
    printf("1) mostrar la oracion toda en mayuscula\n");
    printf("2) mostrar la oracion toda en minuscula\n");
    printf("3) mostrar la oracion alternando mayuscula y minuscula\n");
    printf("4) mostrar la oracion comenzando todas las palabras con mayuscula\n");
    printf("opcion: ");
    scanf("%d", &opcion);
    getchar(); // limpiar el buffer de entrada
    
    switch (opcion) {
        case 1:
            for (int i = 0; oracion[i] != '\0'; i++) {
                if (oracion[i] >= 'a' && oracion[i] <= 'z')
                    oracion[i] -= 32;
            }
            break;
        case 2:
            for (int i = 0; oracion[i] != '\0'; i++) {
                if (oracion[i] >= 'A' && oracion[i] <= 'Z')
                    oracion[i] += 32;
            }
            break;
        case 3:
            alternarMayusMinus(oracion);
            break;
        case 4:
            PrimerMayus(oracion);
            break;
        default:
            printf("opcion no valida\n");
            return 1;
    }
    
    printf("oracion transformada: %s\n", oracion);
    return 0;
}

