//
//  Laboratório 6 - Pesquisa Binária e Sequencial
//  -> Implementação do Método de Pesquisa Binária Estruturada.
//  
//  GILDO FERREIRA DIAS FILHO       - 201905451 - TURMA 'A'
//  LUIS GUILHERME BARBOSA CUSTODIO - 201905500 - TURMA 'B'
//

#include <stdlib.h>
#include <stdio.h>
#define MAX 5

int buscaEstruturada(int *vetor, int elemento, int tamanho);

// fun. para gerar o vetor
void gerarVetor(int vet[]) {
      int i;
      for (i=0;i<MAX;i++){
        printf("Informe o valor %d: ", i+1);
        scanf("%d", &vet[i]);
      }
}

// fun. para imprimir o vetor
void imprimirVetor(int vet[]){
      int i;
      for (i=0;i<MAX;i++){
          printf("[%d] ", vet[i]);
      }
}

// fun. para realizar a busca binária estruturada
int busca_Estruturada(int *vetor, int elemento, int tamanho) {
    int inicio = 0;
    int fim = tamanho - 1;
    int meio;

    while (inicio <= fim) {
        meio = (inicio + fim) / 2;
        if (vetor[meio] == elemento) {
            return meio;
        } else if (vetor[meio] < elemento) {
            inicio = meio + 1;
        } else {
            fim = meio - 1;
        }
    }
    return -1;
}

int main(){
    int busca, resultado;
    int vet[MAX];
    
    gerarVetor(vet);
    
    printf("\nVetor: ");
    imprimirVetor(vet);
    
    printf ("\n\nInforme um valor para realizar a busca no vetor: ");
    scanf("%d", &busca);
        
    resultado = busca_Estruturada(vet, busca, MAX);
        
    if (resultado != -1) {
        printf("\nValor %d encontrado na posicao %d.", busca, resultado+1);
    } else {
        printf("\nO elemento %d nao esta presente no vetor!", busca);
    }
    return 0;
}