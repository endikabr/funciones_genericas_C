int *buscaMaximosFilas(int **arraybidi, int filas, int columnas) {
    int *maximos = ReservamemoriaUni(filas);  // Reservamos memoria para almacenar los máximos de cada fila

    for (int i = 0; i < filas; i++) {
        int maximo = arraybidi[i][0];  // Inicializamos el máximo con el primer elemento de la fila
        for (int j = 1; j < columnas; j++) {
            if (arraybidi[i][j] > maximo) {
                maximo = arraybidi[i][j];
            }
        }
        maximos[i] = maximo;  // Guardamos el máximo de la fila en el array `maximos`
    }

    return maximos;  // Retornamos el array de máximos
}

int *buscaMinimosFilas(int **arraybidi, int filas, int columnas) {
    int *minimos = ReservamemoriaUni(filas);  // Reservamos memoria para almacenar los mínimos de cada fila
    
    for (int i = 0; i < filas; i++) {
        int minimo = arraybidi[i][0];  // Inicializamos el mínimo con el primer elemento de la fila
        for (int j = 1; j < columnas; j++) {
            if (arraybidi[i][j] < minimo) {
                minimo = arraybidi[i][j];
            }
        }
        minimos[i] = minimo;  // Guardamos el mínimo de la fila en el array `minimos`
    }

    return minimos;  // Retornamos el array de mínimos
}
