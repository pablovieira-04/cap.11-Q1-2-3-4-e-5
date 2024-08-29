#include <stdio.h>
#include <stdlib.h>

int main() {
    int N;

    
    do {
        printf("Digite um valor inteiro positivo para N: ");
        scanf("%d", &N);
    } while (N <= 0);

    
    int* vetor = (int*) malloc(N * sizeof(int));
    
    if (vetor == NULL) {
        printf("Erro de alocação de memória.\n"); 
        return 1;
    }

    
    for (int i = 0; i < N; i++) {
        do {
            printf("Digite um valor maior ou igual a 2 para o elemento %d: ", i + 1); //Pede para digitar o valor >=2 caso o numero digitado seja menor que 2
            scanf("%d", &vetor[i]);
        } while (vetor[i] < 2);
    }
 
    printf("Valores do vetor:\n");
    for (int i = 0; i < N; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    
    free(vetor);

    return 0;
}
