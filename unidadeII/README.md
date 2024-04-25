# Ordenação

## Checklist

- [x] BubbleSort
- [x] InsertionSort
- [x] Selection Sort
- [x] Heapsort
- [x] Quicksort
- [x] Mergesort

### Problema de ordenação

Um problema de ordenação consiste situações que receberem como entrada uma sequência e retornar uma permutação da mesma que esteja ordenada. Logo, dada uma sequência, os elementos que estão em uma posição posterior devem ter um valor maior, no caso de uma ordenação crescente.

- **Entrada**: sequência
- **Saída**: permutação da sequência ordenada

- **Melhor caso**: O(n) - isso ocorre quando a sequência já se encontra ordenada, assim, a sequência é percorrida sem necessidade de permutações.

### Bubble sort

A ideia por trás do bubble sort é percorrer a sequência diversas vezes, comparando elementos que estão lado a lado e trocando de posição caso estejam na ordem errada. Assim, o maior elemento da sequência vai "subindo" até a sua posição correta.

**Pior caso**: O(n²) - Ordenado de "traz para frente"

### Ordenação por seleção e inserção

A ideia por trás desse tipo de algoritmo é dividir a sequência em duas partes: a parte ordenada e a não ordenada. Em seguida, o algoritmo escolhe um elemento da parte não ordenada e o insere na parte ordenada.

Diante disso, a diferença entre uma ordenação por seleção e uma por inserção está em qual tarefa é realizada de forma mais complicada. Assim, o algoritmo de seleção tem como base a responsabilidade de selecionar um elemento da melhor forma possível a fim de facilitar na inserção. Já os algoritmos de ordenação por inserção escolhem o elemento da forma mais simples possível, concentrando o trabalho principal nas inserções.

Caso a parte ordenada esteja no fim, então os elementos da parte não ordenada são menores que os da parte ordenada. E a reciproca também vale.

#### Selection Sort

Este algoritmo de ordenação consiste na seleção do maior elemento da parte desordenada e faz trocas do maior elemento com os elementos do fim da sequência, assim será ordenada toda sequência sempre adicionando os maiores elementos ao fim da sequência. Logo, será delimitado a parte ordenada da não ordenada.

**Pior caso**: O(n²)

#### Insertion Sort

Este algoritmo de ordenação consiste na inserção de um elemento da parte não ordenada na parte ordenada. Assim, o último elemento da sequência já estará ordenado, então os elementos que estão na fronteira da parte ordenada e não ordenada são comparados e inseridos na parte ordenada de forma que fique tudo ordenado.

**Pior caso**: O(n²)

### Heap Sort

O heapsort é um algoritmo de ordenação que faz uso de uma estrutura de dados chamada arvoré heap.

Uma árvore heap é uma árvore binária que possui a propriedade de que o valor de um nó é sempre maior que o valor dos seus filhos. Assim, o maior elemento da sequência estará sempre na raiz da árvore. 

Em outras palavras, a árvore heap pode ser montada a partir de uma sequência de elementos. Isso é uma organização de dados que facilita a busca do maior elemento. Exemplo de árvore heap:

```
        10
       /  \
      8    9
     / \  / \
    7  6 5   4
```

A ideia por trás do heapsort é a seguinte:
1. Construir uma árvore heap a partir da sequência.
2. Trocar o primeiro elemento da sequência (o maior) com o último.
3. Diminuir o tamanho da sequência em 1.
4. Refazer a árvore heap.
5. Repetir os passos 2, 3 e 4 até que a sequência esteja ordenada.


A complexidade do algoritmo é sempre O(n log n).

### Ordenação por Partição (QuickSort)

Esse é o algoritmo de ordenação é muito rápido. Ele possui a complexidade de O(n log n) em casos médios e faz uso da técnica dividir para conquistar, assim dividindo o sequência em partes menores e ordenando essas partes.

A ideia por trás do algoritmo é a seguinte:

1. Escolher um elemento do sequência, que será o pivô.
2. Dividir o sequência em dois sub-sequência, um com todos os elementos menores que o pivô e outro com todos os elementos maiores que o pivô.
3. Ordenar os sub-sequência.
4. Juntar os sub-sequência (a parte menor que o pivô + o pivô + a parte maior que o pivô).

A complexidade no pior caso (quando a divisão em partes for muito desigual) do quicksort é O(n^2).

### Ordenação por Junção (MergeSort)

Também é um algoritmo de ordenação que faz uso da técnica dividir para conquistar.

O mergesort não faz uso de uma estratégia de escolha do pivô. Ele simplesmente divide o sequência em duas partes iguais e ordena essas partes. Depois, ele junta as partes ordenadas. 

Uma desvantagem do mergesort é que ele utiliza mais memória que o quicksort, ou seja, ele utiliza uma outra sequência do mesmo tamanho da sequência original.

A ideia por trás do mergesort é a seguinte:

1. Dividir o sequência em duas partes iguais.
2. Ordenar as duas partes.
3. Juntar as duas partes (adequando a ordem dos elementos).

A complexidade do mergesort sempre será O(n log n), mas o algoritmo tem a desvantagem da memória extra.

### Tabela de resumo

| Algoritmo | Metodologia                                       | Melhor Caso | Caso Médio | Pior Caso | Estável | Uso Extra de Memória | 
|-----------|---------------------------------------------------|-------------|------------|-----------|---------|-----------------------|
| Bubble    | Comparação de elementos adjacentes               | O(n)        | O(n²)      | O(n²)     | Sim     | Não                   |
| Insertion | Inserção de elementos na parte ordenada          | O(n)        | O(n²)      | O(n²)     | Sim     | Não                   |
| Selection | Seleção do maior elemento da parte desordenada   | O(n²)       | O(n²)      | O(n²)     | Não     | Não                   |
| Heapsort  | Utilização de uma estrutura de dados chamada heap| O(n log n) | O(n log n) | O(n log n)| Não     | Não                   |
| Quick     | Dividir para conquistar conforme um pivô         | O(n log n) | O(n log n) | O(n²)     | Não     | Não                   |
| Merge     | Dividir para conquistar em partes iguais         | O(n log n) | O(n log n) | O(n log n)| Sim     | Sim                   |

