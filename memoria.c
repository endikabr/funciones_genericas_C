#include <stdio.h>
#include <stdlib.h>

// Función para reservar memoria para un array bidimensional
int** reservarMemoria(int filas, int columnas) {
    // Reservamos memoria para el array de punteros a las filas
    int** array = (int**)malloc(filas * sizeof(int*));
    
    // Reservamos memoria para cada fila del array
    for (int i = 0; i < filas; i++) {
        array[i] = (int*)malloc(columnas * sizeof(int));
    }

    return array;
}

// Función para liberar la memoria de un array bidimensional
void liberarMemoria(int** array, int filas) {
    // Liberamos cada fila
    for (int i = 0; i < filas; i++) {
        free(array[i]);
    }
    // Liberamos el array de punteros
    free(array);
}