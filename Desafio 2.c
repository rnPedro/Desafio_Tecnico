#include <stdio.h>

int isFibonacci(int num) {
    int a = 0, b = 1, temp;

    if (num == 0 || num == 1) {
        return 1;
    }

    while (b < num) {
        temp = b;
        b = a + b;
        a = temp;
    }

    if (b == num) {
        return 1;  
    }
    
    return 0;  
}

int main() {
    int numero;

    printf("Informe um número: ");
    scanf("%d", &numero);

    if (isFibonacci(numero)) {
        printf("%d pertence à sequência de Fibonacci.\n", numero);
    } else {
        printf("%d não pertence à sequência de Fibonacci.\n", numero);
    }

    return 0;
}
