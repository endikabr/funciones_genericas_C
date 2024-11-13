void leerArrayBidi(int **puntero, int filas, int columnas) {
    int i, j;

    for (i = 0; i < filas; i++) {
        for (j = 0; j < columnas; j++) {
            printf("Introduce el valor [%d][%d]: ", i, j);
            scanf("%d", &puntero[i][j]);
        }
    }
}

void muestraArrayBidi(int **puntero, int filas, int columnas) {
    int i, j;

    for (i = 0; i < filas; i++) {
        for (j = 0; j < columnas; j++) {
            printf("%d ", *(*(puntero + i) + j));
        }
        printf("\n"); // Salto de línea después de cada fila
    }
}

//Esta La funcion de aqui abajo no permite introducir valores repetidos, para eso vamos a necesitar una funcion que compare los valores.
void leeArraybidi(int **arraybidi, int filas, int columnas) {
    int valor, valorrep;

    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            do {
                printf("Introduce el valor [%d][%d]: ", i, j);
                scanf("%d", &valor);

                // Verificar si el valor ya existe en el array
                valorrep = valorRepetido(valor, arraybidi, i, j);
                if (valorrep == 1) {
                    printf("Por favor, introduce un valor que no se haya introducido antes.\n");
                }
            } while (valorrep == 1); // Repite hasta que no sea repetido

            arraybidi[i][j] = valor; // Asigna el valor si no es repetido
        }
    }
}

int valorRepetido(int valor, int **arraybidi, int filas, int columnas) {
    int repetido = 0; // Inicializamos como no repetido

    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            if (arraybidi[i][j] == valor) {
                repetido = 1; // Marcamos como repetido si encontramos el valor
            }
        }
    }
    return repetido; // Retornamos si el valor es repetido o no
}

