# 01 - Implementar o metódo de ordenaçao por seleção e imprimir na tela o vetor ordenado e informar qual é o menor elemento do vetor.

vetor = [2, 9, 8, 10, 7, 5, 3, 4, 6, 1]                         # recebe valores desordenados
qtdElementos = len(vetor)                                       # verif. qtd de valores

print("\nVetor desordenado: ", vetor)                           # imprime o vetor desordenado

for contador in range(qtdElementos):                            # inicia a verif. de menor elemento
    menorElemento = contador
    
    for j in range(contador + 1, qtdElementos):                 # verif. o elemento atual com todos elementos do vetor até achar um valor menor
        if vetor[menorElemento] > vetor[j]:                     # caso não encontre um valor menor, ele retorna para a posicao de menor elemento
            menorElemento = j
            
    vetor[contador], vetor[menorElemento] = vetor[menorElemento], vetor[contador]   # retorna para posicao correta

print("\nFeita a ordenacao por selecao:", vetor)                # imprime o vetor ordenado

print("\nMenor elemento:", vetor[0])                            # imprime o menor valor (menor valor vai estar na primeira posicao do vetor)