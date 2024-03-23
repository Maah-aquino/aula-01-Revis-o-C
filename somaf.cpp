#include <stdio.h>

int main() {
    int N, i;
    int soma = 0;
    

    // Ler o valor de N do teclado
    printf("Digite um número inteiro positivo N: ");
    scanf("%d", &N);

    // Usando o for para somar
    for (i = 1; i <= N; i++) {
        soma += i;
    }

    // Imprimir o valor da soma
    printf("Soma : %d\n", soma);}
