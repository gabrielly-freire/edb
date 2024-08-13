# Estruturas Sequenciais

## Tipo Abstrato de Dados (TAD) Sequência

O tipo abstrato de dados sequência é uma definição do que é uma sequência sem se preocupar com sua implementação, definindo apenas sua natureza (tipo) e suas operações.

Uma sequência é definida como um conjunto de elementos organizados de forma linear, em que cada elemento tem uma posição análoga à reta dos números naturais (incluindo o 0). As operações são: busca por elemento, ordenação, acesso, inserção e remoção.

## Estrutura de Dados (ED) Sequência

A estrutura de dados é a implementação da TAD, ou seja, como os dados serão armazenados no computador e a implementação dos algoritmos das operações.

Implementações comuns de sequências são o **vetor** e a **lista ligada** e suas variações.

Instruções de manipulação de sequências que estão avaliadas nas implementações de sequências:

- Inserção (arbitrária, início e fim)
- Remoção (arbitrária, início e fim)
- Acesso (arbitrário, início e fim)

### TAD - Pilha (Stack)

Análogo a uma pilha de livros, só é possível inserir e remover um elemento da última posição ou apenas no início.

Assim, o acesso aos elementos segue o princípio **LIFO** (Last-In-First-Out), ou seja, o último elemento inserido é o primeiro a ser removido. Operações:

- Inserção - fim
- Remoção - fim
- Acesso - fim

### TAD - Fila (Queue)

Análogo a uma fila, inserir no fim e remover no início ou o contrário.

Assim, o acesso aos elementos segue o princípio **FIFO** (First-In-First-Out), ou seja, o primeiro elemento inserido é o primeiro a ser removido. Operações:

- Inserção - fim
- Remoção - inicio
- Acesso - inicio e fim

### TAD - Deque (Double-Ended Queue)

Um deque é um tipo de fila que permite inserção e remoção em ambas as extremidades (início e fim). Operações:

- Inserção - inicio e fim
- Remoção - inicio e fim
- Acesso - inicio e fim

## ED - Vetor

Um vetor é uma estrutura de dados em que é armazenado em um bloco de memória contínuo para os seus elementos da sequência. Além disso, cada elemento tem um índice que varia de 0 a n-1, onde n é o tamanho da sequência.

| Operação | Arbitrário | Início | Fim |
|----------|------------|--------|-----|
|Acesso    | O(1)       | O(1)   | O(1)|
|Inserção  | O(n)       | O(n)   | O(1)|
|Remoção   | O(n)       | O(n)   | O(1)|

### Vantagens

- Acesso aleatório
- Armazenamento compacto (menos memória)

## Desvantagem

- Homogeneidade dos dados
- Dificuldade de encontrar um bloco continuo para armazenar os dados

**Implementação de uma pilha**

[IMPLEMENTAÇÃO](./vetor.c)

## ED - Vetor circular

Um vetor circular utiliza um vetor de tamanho fixo para armazenar os elementos.  A lógica por trás de um vetor circular é a reutilização do espaço do vetor após a remoção de elementos, evitando o desperdício de memória e permitindo operações de inserção e remoção em tempo constante.

| Operação | Arbitrário | Início | Fim |
|----------|------------|--------|-----|
|Acesso    | O(n)       | O(1)   | O(1)|
|Inserção  | O(n)       | O(1)   | O(1)|
|Remoção   | O(n)       | O(1)   | O(1)|

**Implementação de uma fila, pilha e deque**

Mesmas vantagens e desvantagens do vetor, mas com a vantagem da inserção e remoção em tempo constante.

[IMPLEMENTAÇÃO](./vetor_circular.c)

## ED - Lista ligada

Consiste em uma lista em que cada elemento, além de armazenar o valor, também armazena um ponteiro apontando para o próximo elemento.

| Operação | Arbitrário | Início | Fim |
|----------|------------|--------|-----|
|Acesso    | O(n)       | O(1)   | O(n)|
|Inserção  | O(n)       | O(1)   | O(n)|
|Remoção   | O(n)       | O(1)   | O(n)|

**Implementação de uma pilha**

### Vantagens

- Não precisa de um bloco contínuo de memória
- Heterogeneidade de tipos

### Desvantagens

- Precisa de mais memória para armazenar o ponteiro do próximo elemento
- Acesso sequencial dos elementos
 
[IMPLEMENTAÇÃO](./lista_ligada.c)

## ED - Lista ligada com cabeça

Uma lista ligada com cabeça é uma variação da lista ligada em que é adicionado um nó cabeça (head) no início da lista e do fim da lista. Isso simplifica a implementação de algumas operações.

| Operação | Arbitrário | Início | Fim |
|----------|------------|--------|-----|
|Acesso    | O(n)       | O(1)   | O(1)|
|Inserção  | O(n)       | O(1)   | O(1)|
|Remoção   | O(n)       | O(1)   | O(n)|

**Implementação de uma pilha e fila(fim-inicio)**

[IMPLEMENTAÇÃO](./lista_ligada_modificada.c)

## ED - Lista duplamente ligada

Consiste em uma lista ligada em que cada elemento armazena ponteiros para o próximo e o elemento anterior. Isso permite a navegação em ambas as direções.

| Operação | Arbitrário | Início | Fim |
|----------|------------|--------|-----|
|Acesso    | O(n)       | O(1)   | O(1)|
|Inserção  | O(n)       | O(1)   | O(1)|
|Remoção   | O(n)       | O(1)   | O(1)|

**Implementação de uma fila, pilha e deque**

[IMPLEMENTAÇÃO](./lista_ligada_dupla.c)

## TAD Conjunto ED Tabela de Dispersão

Uma tabela de dispersão (hash table) é uma estrutura de dados que implementa o TAD conjunto usando uma **função de dispersão** para mapear os elementos em um vetor. Isso permite acesso, inserção e remoção em tempo constante médio.

### Implementação de Conjuntos com Tabelas de Dispersão

Existem duas formas comuns de implementar conjuntos usando tabelas de dispersão:

1. **Implementação com vetor**:
   - Cada posição do vetor representa um possível elemento do conjunto.
   - A função de dispersão mapeia cada elemento para uma posição no vetor.
   - Inserção: Inserir o elemento na posição calculada pela função de dispersão.
   - Busca: Verificar se há um elemento na posição calculada pela função de dispersão.
   - Remoção: Remover o elemento da posição calculada pela função de dispersão.

2. **Implementação com lista ligada**:
   - Cada posição do vetor contém uma lista ligada.
   - A função de dispersão mapeia cada elemento para uma posição no vetor.
   - Inserção: Inserir o elemento no início da lista ligada na posição calculada pela função de dispersão.
   - Busca: Percorrer a lista ligada na posição calculada pela função de dispersão em busca do elemento.
   - Remoção: Remover o elemento da lista ligada na posição calculada pela função de dispersão.

### Vantagens das Tabelas de Dispersão

- **Acesso, inserção e remoção em tempo constante médio**: Devido à função de dispersão, as operações básicas têm complexidade O(1) em média.

### Desvantagens das Tabelas de Dispersão

- **Colisões**: Quando a função de dispersão mapeia dois elementos diferentes para a mesma posição do vetor, ocorre uma colisão. Isso pode afetar o desempenho.
- **Função hash adequada**: É importante escolher uma função de dispersão que distribua uniformemente os elementos pelas posições do vetor para evitar colisões.
- **Tamanho fixo**: O tamanho do vetor em uma tabela de dispersão é fixo, portanto, não é possível armazenar um número ilimitado de elementos.

Em resumo, as tabelas de dispersão são uma implementação eficiente do TAD conjunto, aproveitando-se da função de dispersão para obter acesso, inserção e remoção em tempo constante médio. No entanto, é necessário lidar com colisões e escolher uma função de dispersão adequada para garantir um bom desempenho.

<!-- ### Implementação com vetor

Inserção O(1) e busca O(n), ou
Inserção O(n log n) e busca O(a log n), onde a é o fator de carga.

### Implementação com lista ligada

Inserção O(1) e busca O(n)
<!-- Não pode usar busca binária.  -->