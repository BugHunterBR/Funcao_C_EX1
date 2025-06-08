#include <stdio.h>

int Maior(int a, int b) {
    return (a > b) ? a : b;
}

int main() {
    int num1, num2;
    printf("Informe dois numeros: ");
    scanf("%d %d", &num1, &num2);

    int maior = Maior(num1, num2);
    printf("O maior numero e: %d\n", maior);

    return 0;
}
