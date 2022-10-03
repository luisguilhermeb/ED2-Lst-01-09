# 02 - Implementar o metódo de ordenaçao por inserção e imprimir na tela o vetor ordenado e informar qual é o MAIOR elemento do vetor.

vetor = [2, 9, 8, 10, 7, 5, 3, 4, 6, 1]                         # recebe valores desordenados
qtdElementos = len(vetor)                                       # verif. qtd de valores

print("\nVetor desordenado: ", vetor)                           # imprime o vetor desordenado

for j in range(1, qtdElementos):                                # inicia a verif. de menor elemento
    posicao = vetor[j]
    i = j - 1
    
    while i >= 0 and vetor[i] > posicao:                        # usa o criterio para verificar a posicao, sempre comparando com o valor da direita e esquerda
        vetor[i + 1] = vetor[i]
        i = i - 1                                               # caso o elemento da esquerda seja menor, ele ira trocar de lugar
        
    vetor[i + 1] = posicao                                      # retorna para posicao correta

print("\nFeita a ordenacao por insercao:", vetor)               # imprime o vetor ordenado

print("\nMaior elemento:", vetor[i])                            # imprime o maior valor (tendo em vista que 'i' eh o ultimo valor/tamanho do vetor)




    
    