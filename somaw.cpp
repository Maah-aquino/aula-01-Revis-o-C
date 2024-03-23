#include <stdio.h>

int main() {
    int N, i;
    int soma = 0;
    i = 1;

    // Ler o valor de N do teclado
    printf("Digite um número inteiro positivo N: ");
    scanf("%d", &N);

 // Usando a estrutura de repetição WHILE
    while (i <= N) {
        soma += i;
        i++;
    }

    // Imprimir a soma usando WHILE
    printf("Soma usando WHILE: %d\n", soma);

    return 0;
}