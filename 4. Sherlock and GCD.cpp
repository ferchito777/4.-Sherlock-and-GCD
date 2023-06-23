#include <stdio.h>

// Funcion para calcular el maximo comun divisor entre dos numeros utilizando el algoritmo de Euclides
int calcularMCD(int a, int b) {
    if (b == 0)
        return a;
    return calcularMCD(b, a % b);
}

// Funcion para verificar si hay algun par de numeros en el conjunto cuyo MCD sea mayor que 1
int verificarSubconjunto(int conjunto[], int tamano) {
    for (int i = 0; i < tamano - 1; i++) {
        for (int j = i + 1; j < tamano; j++) {
            if (calcularMCD(conjunto[i], conjunto[j]) > 1)
                return 0;
        }
    }
    return 1;
}

int main() {
    int casosPrueba;
    scanf("%d", &casosPrueba); // Lee el numero de casos de prueba

    while (casosPrueba--) {
        int tamanoConjunto;
        scanf("%d", &tamanoConjunto); // Lee el tamano del conjunto

        int conjunto[tamanoConjunto];
        for (int i = 0; i < tamanoConjunto; i++) {
            scanf("%d", &conjunto[i]); // Lee los elementos del conjunto
        }

        if (verificarSubconjunto(conjunto, tamanoConjunto))
            printf("YES\n");
        else
            printf("NO\n");
    }

    return 0;
}

