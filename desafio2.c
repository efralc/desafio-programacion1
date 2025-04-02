#include <stdio.h>

int main() {
    // Definir un par de valores para representar las dimensiones del rectángulo
    float dimensiones[2] = {7.5, 20.0};  // Ancho y largo
    float area = dimensiones[0] * dimensiones[1];

    // Definir una cadena que describa el propósito del programa
    char descripcion[] = "Calculando área...";
    
    // Presentar el resultado con un mensaje sofisticado y visual
    printf("%s El área de un rectángulo con ancho %.2f y largo %.2f es: %.2f\n", descripcion, dimensiones[0], dimensiones[1], area);

    return 0;
}
