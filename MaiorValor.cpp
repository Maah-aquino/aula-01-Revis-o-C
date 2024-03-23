#include <stdio.h>

// Função para encontrar o maior valor em um vetor
int encontrarMaiorValor(int vetor[], int tamanho) {  //recebe um tamanha e um vetor
    int n = vetor[0]; // Inicializa a variavel n com o primeiro elemento do vetor

    for (int i = 1; i < tamanho; i++) { //percorre o vetor
        if (vetor[i] > n) {       // compara o valor da posição atual do vetor com o valor em n
            n = vetor[i]; // Atualiza n com o maior valor se encontrarmos um elemento maior
        }
    }

    return n;
}

int main() {
    int tamanho;
// recebe do teclado o tamanho do vetor para inicializar a variavel vetor (ficou muito vetor rsrs)
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tamanho);

    int vetor[tamanho];
// recebee do teclado os valores de cada posição do vetor
    printf("Digite os elementos do vetor separados por espaço e após aperte enter:\n");
    for (int i = 0; i < tamanho; i++) {
        scanf("%d", &vetor[i]);
    }
// coloc o resultado da função na variavel e imprime na tela
    int maiorValor = encontrarMaiorValor(vetor, tamanho);
    printf("O maior valor no vetor é: %d\n", maiorValor);

    return 0;
}