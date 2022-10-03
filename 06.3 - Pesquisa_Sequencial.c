//
//  Laboratório 6 - Pesquisa Binária e Sequencial
//  -> Implementação do Método de Pesquisa Sequencial.
//  
//  GILDO FERREIRA DIAS FILHO       - 201905451 - TURMA 'A'
//  LUIS GUILHERME BARBOSA CUSTODIO - 201905500 - TURMA 'B'
//

#include <stdio.h>
#include <stdlib.h>
#define MAX 5

void gerarVetor(int vet[]);
void imprimirVetor(int vet[]);
int pesquisaSequencial(int v[], int pesq);

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

// fun. para realizar a busca sequencial no vetor informado
int pesquisaSequencial(int v[], int pesq){
     int i;
     for(i=0;i<MAX;i++){
          if(v[i]==pesq){
              return i;
          }
     }
     return -1;
}

int main(){
    
    int vet[MAX];
    int resultado, busca;
    
    gerarVetor(vet);
    
    printf("\nVetor: ");
    imprimirVetor(vet);
    
    printf ("\n\nInforme um valor para realizar a busca no vetor: ");
    scanf("%d",&busca);
    
    resultado=pesquisaSequencial(vet,busca);
    
    if (resultado==-1){
        printf("\nValor nao encontrado no vetor!");}
    else{
        printf("\nValor %d encontrado na posicao %d.", busca, resultado+1);    
    }
    return 0;
}