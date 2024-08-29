#include <stdio.h>
#include <stdlib.h>

int main() {
    int tamanho;

   
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tamanho);

    
    int* vetor = (int*) malloc(tamanho * sizeof(int));
    
    if (vetor == NULL) {
        printf("Erro de alocação de memória.\n");
        return 1;
    }

    
    for (int i = 0; i < tamanho; i++) {
        printf("Digite o valor do elemento %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    
    printf("Valores dos vetores:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    
    free(vetor);

    return 0;
}
