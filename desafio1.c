#include stdio.h

int main() {
     Declara un arreglo con dos números para sumarlos
    int numeros[] = {12, 8};   Los números son 12 y 8
    int suma = 0;

     Realizamos la suma en un ciclo (aunque no sea necesario, pero nos da un toque de elegancia)
    for (int i = 0; i  2; i++) {
        suma += numeros[i];
    }

     Imprime la suma de manera estilística
    printf(La magia de sumar %d y %d nos da %dn, numeros[0], numeros[1], suma);

    return 0;
}
