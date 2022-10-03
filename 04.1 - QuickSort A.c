// 
//
//  Laboratorio 4 - Implementação de Duas Variações do Algoritmo de Ordenação QuickSort.
//      -> 1) Implementação do método QuickSort conforme descrição nos slides do moodle.
//
//      JULIANO VITOR FERNANDES ROCHA   - 201905461 - Turma 'A'
//      LUIS GUILHERME BARBOSA CUSTODIO - 201905500 - Turma 'B'
//

#include<stdio.h>
#define MAX 10

void quickSort(int vetor[MAX], int inicio, int fim){

    int pivo, aux, i, j, meio;
    i = inicio;
    j = fim;
	meio = (int) ((i + j) / 2);
	pivo = vetor[meio]; // def. pivo como sendo o meio do vetor

	do{
		while (vetor[i] < pivo) i = i + 1; // condição para pivo -> esq.
		while (vetor[j] > pivo) j = j - 1; // condição para pivo -> dir.
		if(i <= j){
			aux = vetor[i];
			vetor[i] = vetor[j];
			vetor[j] = aux;
			i = i + 1; // posição decresce direita p/ esquerda
			j = j - 1; // posição cresce esquerda p/ direita
		}
	} while(j > i);
	
	// metodos recursivos, dividindo e resolvendo o vetor em duas partes "dividir para conquistar"
	if(inicio < j) quickSort(vetor, inicio, j);
	if(i < fim) quickSort(vetor, i, fim);
}

void imprimirVetor(int vetor[MAX]){ // fun. p/ imprimir vetor.
	int i;
	printf("\n");
	for(i = 0; i < MAX; i++){
		printf("[%d] ", vetor[i]);
	}
}

int main(){

	int vetor[MAX] = {9,8,7,6,5,4,3,2,1,0}; // vetor completamente desordenado
	int i;

	printf("\t== VETOR DESORDENADO ==");
    imprimirVetor(vetor);

	printf("\n\n");
	quickSort(vetor, 0, MAX-1); // MAX-1 def. ultima posicao conforme o tamanho 0 até MAX (10) posi. 0, ... 9

	printf("\n\t=== VETOR ORDENADO ===");
	imprimirVetor(vetor);
}