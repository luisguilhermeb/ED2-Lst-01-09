//
//
//  Laboratório 5 - Implementação do Método de Ordenação Bubble Sort
//
//      JULIANO VITOR FERNANDES ROCHA   - 201905461 - Turma 'A'
//      LUIS GUILHERME BARBOSA CUSTODIO - 201905500 - Turma 'B'
//
//

#include <stdio.h>
#include <stdbool.h>
#define MAX 10

int vetor[MAX] = {9, 7, 4, 0, 1, 3, 2, 8, 6, 5};

void bubbleSort(){
    int j = 0, aux;
    bool realizadaTroca = true;

    while (realizadaTroca){
        realizadaTroca = false;
        j++;
        for (int i = 0; i < MAX - j; ++i){
            if (vetor[i] > vetor[i + 1]){
                int k;
                printf("\n");
                for(k=0; k<MAX; k++){
                    printf("[%d] ", vetor[k]); // imprime passo a passo a ordenação
                }
                aux = vetor[i];
                vetor[i] = vetor[i + 1];
                vetor[i + 1] = aux;
                realizadaTroca = true;
                printf("\t----> Ordenando [%d]...", vetor[i]);
            }
        }
    }
}

void imprimirVetor(){
	int i;
	printf("\n");
	for(i=0; i<MAX; i++){
		printf("[%d] ", vetor[i]);
	}
}

int main(){

    printf("Vetor desordenado: ");
    imprimirVetor();

    printf("\n");
    bubbleSort();

    printf("\n\nVetor ordenado pelo metodo de ordenação Bubble Sort: ");
    imprimirVetor();

    return 0;
}