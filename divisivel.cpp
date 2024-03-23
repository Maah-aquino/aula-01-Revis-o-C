#include <stdio.h>

int main() {
    int numero;

    // Solicita ao usuário para inserir um número
    printf("Digite um número inteiro: ");
    scanf("%d", &numero);

    // Verifica se o número é divisível por 5 e 11
    if (numero % 5 == 0 && numero % 11 == 0) {
        printf("%d é divisível por 5 e 11.\n", numero);
    } else {
        printf("%d não é divisível por 5 e 11.\n", numero);
    }

    return 0;
}