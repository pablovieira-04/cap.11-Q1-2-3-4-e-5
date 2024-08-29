#include <stdio.h>
#include <stdlib.h>


struct Cadastro {
    char nome[100];
    int idade;
    char endereco[200];
};


struct Cadastro* alocarCadastro(int N) {
    struct Cadastro* vetor = (struct Cadastro*) malloc(N * sizeof(struct Cadastro));
    
    if (vetor == NULL) {
        printf("Erro de alocação de memória.\n");
        exit(1);
    }
    
    for (int i = 0; i < N; i++) {
        printf("Digite o nome da pessoa %d: ", i + 1);
        scanf(" %[^\n]", vetor[i].nome);
        printf("Digite a idade da pessoa %d: ", i + 1);
        scanf("%d", &vetor[i].idade);
        printf("Digite o endereço da pessoa %d: ", i + 1);
        scanf(" %[^\n]", vetor[i].endereco);
    }
    
    return vetor;
}

int main() {
    int N;
    printf("Digite o número de pessoas a serem cadastradas: ");
    scanf("%d", &N);
    
    struct Cadastro* vetorCadastro = alocarCadastro(N);
    
    
    for (int i = 0; i < N; i++) {
        printf("\nPessoa %d:\n", i + 1);
        printf("Nome: %s\n", vetorCadastro[i].nome);
        printf("Idade: %d\n", vetorCadastro[i].idade);
        printf("Endereço: %s\n", vetorCadastro[i].endereco);
    }
    
    
    free(vetorCadastro);
    
    return 0;
}
