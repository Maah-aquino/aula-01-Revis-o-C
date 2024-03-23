#include <stdio.h>

// Função recursiva para imprimir números naturais no intervalo [start, end]
void print_natural_numbers(int start, int end) {
    if (start <= end) {
        printf("%d\n", start);
        print_natural_numbers(start + 1, end);
    }
}

int main() {
    int start = 1; // Início do intervalo
    int end = 15; // Fim do intervalo

    printf("Números naturais no intervalo [%d, %d]:\n", start, end);
    print_natural_numbers(start, end);

    return 0;
}