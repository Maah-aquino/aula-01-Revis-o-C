#include <stdio.h>

// Função para trocar os valores de dois números usando ponteiros
void trocarValor(int *a, int *b) {
    int auxiliar = *a;
    *a = *b;
    *b = auxiliar;
}

int main() {
    int num1, num2;

    printf("Digite o primeiro número: ");
    scanf("%d", &num1);

    printf("Digite o segundo número: ");
    scanf("%d", &num2);

    // Chama a função para trocar os números
    trocarValor(&num1, &num2);

    printf("Após a troca:\n");
    printf("Primeiro número: %d\n", num1);
    printf("Segundo número: %d\n", num2);

    return 0;
}