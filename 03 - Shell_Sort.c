#include <stdio.h>
#include <stdlib.h>

#define MAX 100

int main(){
    
        int vetorOrd[MAX];
        int cont1, cont2, cont3, n=10, elemento;
        
        printf("\nVetor desordenado: ");
        for(cont1=0;cont1<n;cont1++)
        {
                vetorOrd[cont1]= rand() % 10;    // gerando valores aleatórios entre zero e 10
                printf("%d ", vetorOrd[cont1]);
        }
        elemento=1;
        printf("\n");
        
        while(elemento<=(n-1)/9)
                elemento=3*elemento+1;          // metodo de knuth (h=(3*h)+1)

        printf("\n");
        
        while(elemento>=1){
            
                for(cont1=elemento; cont1<n; cont1++){
                    
                        cont3= vetorOrd[cont1];
                        for(cont2=cont1-elemento; cont2>=0 && cont3<vetorOrd[cont2]; cont2=cont2-elemento)
                                vetorOrd[cont2+elemento]=vetorOrd[cont2];
                                int aux;
                                printf("Realizando ordenacoes: ");  // imprime o vetor durante cada ordenacao
                                for(aux=0; aux<n; aux++){
                                    printf(" %d ", vetorOrd[aux]);
                                }
                                printf("\n");
                        vetorOrd[cont2+elemento]=cont3;
                }
                elemento=elemento/3;
        }

        printf("\nOrdenação final Shell Sort (Metodo de Knuth): ");
        for(cont1=0; cont1<n; cont1++)
                printf("%d ", vetorOrd[cont1]);
        printf("\n");
        
        return 0;
}