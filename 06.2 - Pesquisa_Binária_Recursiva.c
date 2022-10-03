//
//  Laboratório 6 - Pesquisa Binária e Sequencial
//  -> Implementação do Método de Pesquisa Binária Recursiva.
//  
//  GILDO FERREIRA DIAS FILHO       - 201905451 - TURMA 'A'
//  LUIS GUILHERME BARBOSA CUSTODIO - 201905500 - TURMA 'B'
//

#include <stdlib.h>
#include <stdio.h>
#define MAX 5

int buscaRecursiva(int *vetor, int busca, int inicio, int fim);

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

// fun. para realizar a busca binária recursiva
int buscaRecursiva(int *vetor, int busca, int inicio, int fim) {
    if (inicio <= fim) {
        int meio = (inicio + fim) / 2;
        if (vetor[meio] == busca) {
            return meio;
        } else if (vetor[meio] < busca) {
            return buscaRecursiva(vetor, busca, meio + 1, fim);
        } else {
            return buscaRecursiva(vetor, busca, inicio, meio - 1);
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
        
    resultado = buscaRecursiva(vet, busca, 0, MAX - 1);
        
    if (resultado != -1) {
        printf("\nValor %d encontrado na posicao %d.", busca, resultado+1);
    } else {
        printf("\nO elemento %d nao esta presente no vetor!", busca);
    }
    return 0;
}
