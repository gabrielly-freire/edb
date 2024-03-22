# Resumo da unidade I

**Checklist**  
[x] Gerenciamento de memória: alocação estática e alocação dinâmica  
[x] TAD e ED: TAD sequência e ED vetor  
[ ] Análise de algoritmo: complexidade e completude  
[x] Busca: sequencial e binária  

## Gerenciamento de memória

O alocar de memória consiste em um processo de reservar um espaço na memória para uso de um programa durante a execução.

Quando um programa é executado o sistema operacional reserva um espaço na memória (segmento) para esse programa.

O segmento é dividido em duas partes principais: **segmento de código**, onde o SO vai colocar as instruções do programa, e **segmento de dados** que é subdividida em outras partes tais, como constantes (constantes, variáveis), controle (focado a comunicação do SO com o processo), pilha (alocação estática) e heap(alocação dinâmica).

### Alocamento estático vs dinâmico

|                  | Alocação Estática                  | Alocação Dinâmica                        |
|------------------|------------------------------------|------------------------------------------|
| Definição        | A alocação estática é feita em tempo de compilação e o tamanho da memória é determinado durante a fase de compilação. | A alocação dinâmica é feita em tempo de execução e o tamanho da memória pode ser determinado durante a execução do programa. |
| Onde?            | Na pilha (stack).                  | No heap.                                 |
| Como?            | Ao declarar uma variável ou função. | Ao chamar funções do sistema, como `malloc()`, `calloc()`, `realloc()` e `free()`. |
| Momento em que o tamanho é definido | Durante a compilação.     | Durante a execução do programa.          |
| Tempo de vida    | O tempo de vida é o mesmo que o do programa ou função. | O tempo de vida é até a memória ser liberada explicitamente. |
| Exemplos         | Arrays estáticos, variáveis globais. | alocação de memória para objetos em linguagens de programação orientadas a objetos. |

## Tipo Abstrato de Dados (TAD) e Estrutura de Dados (ED)

### Conceitos Básicos

#### TAD  

Um Tipo de Dados Abstrato não se preocupa com a implementação, ou seja, o que está acontecendo por debaixo dos panos. O que é importante é a interface, ou seja, a **natureza** (tipo) do tipo de dados que será armazenado e as **operações** que podem ser realizadas.

#### ED

Uma Estrutura de Dados, por outro lado, tem exatamente a preocupação com a implementação de um TAD. Portanto, a ED preocupa-se com a questão do gerenciamento de memória (**armazenamento**) e como as operações serão implementadas, ou seja, os **algoritmos**.

### Sequência e Vetor

A estrutura sequência é um tipo abstrato de dados (TAD). A sequência é definida como um agrupamento de elementos de mesma natureza, que possui operações como inserção de elemento, remoção de elemento, busca de elemento, união e interseção de conjuntos. O vetor e a lista ligada são implementações desse conceito. No vetor, os elementos são organizados de forma que cada um possui um índice, funcionando como um endereço, e são armazenados em um bloco contínuo de memória. Por outro lado, na lista ligada, os elementos não são necessariamente contínuos e são ligados por meio de referências, onde cada elemento aponta para o próximo na sequência.

## Análise de algoritmo

O objetivo da análise de algoritmos é verificar o desempenho de uma implementação de um algoritmo com alguns critérios como a complexidade/desempenho e a completude/correção.

### Complexidade

A complexidade de algoritmos está preocupada com o desempenho da implementação, levando em consideração a quantidade de recursos (como tempo e espaço) necessários para resolver um problema. Uma das notações usadas para descrever a complexidade de algoritmos é a notação Big O. O Big O expressa o crescimento do tempo de execução (ou uso de espaço) de um algoritmo à medida que o tamanho da entrada aumenta. Com base nisso, o desempenho da solução é classificado nas seguintes categorias (ordenadas da melhor para a pior):

- O(1) - Constante: quando o tempo de execução e/ou espaço não depende do tamanho das entradas.
- O(log2 n) - Logaritmo
- O(n) - Linear
- O(n log2 n) - Linearítmico
- O(n²) - Quadrática
- O(n!) - Fatorial

### Corretude

A corretude refere-se a capacidade de gerar uma saída correta as mais diversas instância de uma implementação. Isso é verificado principalmente por meio de provas matemáticas, por exemplo, uma busca binária por ser verificada por meio de uma demonstração por indução. Portanto, a corretude garante se a implementação está solucionando de fato o problema em questão.

### Técnicas usadas para essas análise

- **Análise matemática:** usa fórmulas e provas matemáticas para entender o desempenho e a corretude dos algoritmos.
- **Análise empírica:**  usa dados reais, como tempo de execução, obtidos por experimentação prática para avaliar o desempenho dos algoritmos.

## Problema de busca

Um problema de busca consiste em uma situação em que há uma sequência de elementos e precisa-se verificar se um elemento-chave está na sequência. As entradas são a sequência e o valor-chave, e a saída é um booleano.

Há formas diferentes de resolver esse problema com complexidades diferentes.

> Instância de um problema: um caso específico do problema em questão.

### Busca Sequencial/Linear

Consiste em uma abordagem na qual os elementos são verificados sequencialmente do primeiro ao último da lista ou do último ao primeiro.

- Melhor caso: O(1) - O elemento é encontrado na primeira verificação, ou seja, está no índice 0.
- Caso médio: O(n) - O elemento é encontrado na última verificação ou não é encontrado.

### Busca Binária

Consiste em uma abordagem em que a sequência fornecida tem que estar ordenada inicialmente. O primeiro elemento verificado é o elemento central, e são feitas comparações para determinar se é igual, maior ou menor que o valor-chave. Como a lista está ordenada, se o elemento central for maior que o valor-chave, a primeira metade da lista pode ser descartada, e o processo é repetido até encontrar o valor-chave ou percorrer toda a lista.

- Melhor caso: O(1) - O elemento é encontrado na primeira verificação, localizado no índice int(n/2).
- Caso médio: O(log2 n) - O elemento é encontrado na última verificação ou não é encontrado.
