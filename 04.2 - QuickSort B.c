//
//
//  Laboratorio 4 - Implementação de Duas Variações do Algoritmo de Ordenação QuickSort.
//      -> 2) Implementação do método QuickSort conforme video apresentado em aula.
//
//      JULIANO VITOR FERNANDES ROCHA   - 201905461 - Turma 'A'
//      LUIS GUILHERME BARBOSA CUSTODIO - 201905500 - Turma 'B'
//

#include<stdio.h>
#define MAX 10

void imprimevetor(int*,int);
void quicksort(int*,int,int);
void mudanca(int*,int,int,int);

int main(){
	int n,i;
	
	n=MAX;
	int v[MAX] = {3, 0, 1 ,8, 7, 2, 5, 4, 9, 6}; // valores dança hungara
	
    printf("\t== VETOR DESORDENADO ==");
	imprimevetor(v,n);
	
	printf("\n\n");
	
	quicksort(v,0,n-1);
	
	printf("\n\t=== VETOR ORDENADO ===");
	imprimevetor(v,n);
	
	return 0;
}

void imprimevetor(int*v,int n){ // fun. p/ imprimir vetor.
	int i=0;
	printf("\n");
	while(i<n) {
		printf("[%d] ", v[i]);
		i++;
	}
}

// esq => inicial | dir => final
void quicksort(int*v,int esq, int dir){
	int pivo = v[esq],pos=esq,i=dir,j=esq,aux; // o pivo é o primeiro elemento do subarray

	//partição
	do{
		while(pivo<v[i]) i--;
		if(j<=i){ 
    	    int o=0;
    	    for(o=0; o<MAX; o++){ 
    	        printf("[%d] ", v[o]); // imprime passo a passo a ordenaçao do metodo
            }
        printf("\n");
			mudanca(v,i,pos,pivo); 
			pos = i; // posição decresce direita p/ esquerda 
			i--; 
		}
		
		while(pivo>v[j]) j++;
		if(j<=i) { 
			mudanca(v,j,pos,pivo);
			pos = j; // posição cresce esquerda p/ direita 
			j++;
		}
	}while(j<=i);
	
	// metodos recursivos, dividindo e resolvendo o vetor em duas partes "dividir para conquistar"
	if(esq<pos-1) quicksort(v,esq,pos-1); 
	if(pos+1<dir) quicksort(v,pos+1,dir);
	
}

void mudanca(int*v, int i, int pos, int pivo){ // função troca o valor para a proxima posição
	int aux;
	aux = v[i];
	v[i] = pivo;
	v[pos] = aux;
}