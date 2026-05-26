#include <stdio.h>

int main() {
    int i, j;
    int matriz[5][2] = { {0,0}, {1,2}, {2,4}, {3,6}, {4,8} };
    int suma = 0;
    float promedio;

    printf("Visualización de la Matriz (5x2):\n");
    for (i = 0; i < 5; i++) {
        printf("|"); 
        for (j = 0; j < 2; j++) {
            // Usamos %3d para que las columnas queden alineadas y compactas
            printf("%3d ", matriz[i][j]); 
            
            // Operación: Sumar cada elemento al total
            suma += matriz[i][j];
        }
        printf("|\n");
    }

    // Operación: Promedio (Suma total dividida el total de elementos: 10)
    promedio = suma / 10.0;

    // --- Resultados ---
    printf("\n----------------------------------");
    printf("\nSuma total de los elementos: %d", suma);
    printf("\nPromedio de los elementos:   %.2f", promedio);
    printf("\n----------------------------------\n");

    return 0;
}