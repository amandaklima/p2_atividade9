
// Amanda Kawanne de Oliveira Lima

// Quest 1
#include <stdio.h>

int main() {
    int vetor[10];
    int i, maior;

    printf("Digite os 10 elementos do vetor:\n");
    for (i = 0; i < 10; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    maior = vetor[0];
    for (i = 1; i < 10; i++) {
        if (vetor[i] > maior) {
            maior = vetor[i];
        }
    }

    printf("O maior elemento do vetor e: %d\n", maior);

    return 0;
}

// Quest 2
#include <stdio.h>

int main() {
    int vetor[10], menor;

    printf("Digite os 10 elementos do vetor:\n");
    for (int i = 0; i < 10; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    menor = vetor[0];

    for (int i = 1; i < 10; i++) {
        if (vetor[i] < menor) {
            menor = vetor[i];
        }
    }

    printf("O menor elemento do vetor é: %d\n", menor);

    return 0;
}

// Quest 3
#include <stdio.h>

int main() {
    int vetor[10];
    int maior = 0;
    int posicao = 0;

    printf("Digite 10 numeros inteiros:\n");
    for (int i = 0; i < 10; i++) {
        printf("Digite o numero %d: ", i + 1);
        scanf("%d", &vetor[i]);

        if (vetor[i] > maior) {
            maior = vetor[i];
            posicao = i;
        }
    }

    printf("O maior elemento do vetor e: %d\n", maior);
    printf("Ele se encontra na posicao: %d\n", posicao);

    return 0;
}

// Quest 4
#include <stdio.h>

int main() {
    int valores[5];
    int maior, menor;
    int posicao_maior = 0, posicao_menor = 0;

    printf("Digite 5 valores:\n");
    for (int i = 0; i < 5; i++) {
        printf("Digite o valor %d: ", i + 1);
        scanf("%d", &valores[i]);

        if (i == 0 || valores[i] > maior) {
            maior = valores[i];
            posicao_maior = i;
        }

        if (i == 0 || valores[i] < menor) {
            menor = valores[i];
            posicao_menor = i;
        }
    }

    printf("O maior valor e: %d e se encontra na posicao: %d\n", maior, posicao_maior);
    printf("O menor valor e: %d e se encontra na posicao: %d\n", menor, posicao_menor);

    return 0;
}

// Quest 5
#include <stdio.h>

int main() {
    int vetor[10];

    printf("Digite os 10 valores do vetor:\n");
    for (int i = 0; i < 10; i++) {
        printf("Digite o valor %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    printf("Valores iguais no vetor:\n");
    for (int i = 0; i < 9; i++) {
        for (int j = i + 1; j < 10; j++) {
            if (vetor[i] == vetor[j]) {
                printf("%d\n", vetor[i]);
            }
        }
    }

    return 0;
}
