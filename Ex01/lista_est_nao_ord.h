/*
TAD lista_est_nao_ord
    - Dados: números inteiros
    - Lista de operações: create_list, empty_list, full_list, insert_elem, remove_elem, remove_odd, print_list, smallest_elem, list_size, order_list, concat_list.

Operações:

    create_list:
        Entrada: nenhuma
        Pré-condição: nenhuma
        Processo: cria uma lista e deixa ela no estado de vazia
        Saída: endereço da lista criada
        Pós-condição: Nenhuma

    empty_list:
        Entrada: entrada de uma lista
        Pré-condição: lista ser válida
        Processo: verifica se a lista está na condição de vazia
        Saída: 0 (sucesso - lista está vazia) ou -1 (falha - lista não está vazia)
        Pós-condição: nenhuma

    full_list:
        Entrada: endereço de uma lista
        Pré-condição: lista ser válida e não estar vazia
        Processo: verifica se a lista está na condição de cheia
        Saída: 0 (sucesso - lista está cheia) ou -1 (falha - lista não está cheia)
        Pós-condição: nenhuma

    insert_elem:
        Entrada: endereço de uma lista e o elemento (nro inteiro) a ser inserido
        Pré-condição: lista ser válida e não estar cheia
        Processo: inserir o elemento no final da lista 
        Saída: 0 (sucesso - elemento inserido) ou -1 (falha - elemento não inserido) 
        Pós-condição: a lista de entrada com um elemento a mais

    remove_elem:
        Entrada: endereço de uma lista e o elemento (nro inteiro) a ser removido
        Pré-condição: lista ser válida e não estar vazia
        Processo: percorrer a lista até encontrar o elemento desejado ou chegar ao chegar ao seu final. Se o elemento existe, remova-o da lista
        Saída: 0 (sucesso - elemento removido) ou -1 (falha - elemento não removido)
        Pós-condição: lista de entrada com um elemento a menos

    remove_odd:
        Entrada: endereço de uma lista e o elemento (nro inteiro) a ser removido
        Pré-condição: lista ser válida e não estar vazia
        Processo: percorrer a lista até encontrar o elemento desejado ou chegar ao chegar ao seu final. Se o elemento existe, remova-o da lista
        Saída: 0 (sucesso - elemento removido) ou -1 (falha - elemento não removido)
        Pós-condição: lista de entrada com um ou mais elementos a menos

    print_list:
        Entrada: endereço de uma lista
        Pré-condição: lista ser válida
        Processo: percorrer a lista e imprimir o conteudo que esteja na respectiva posição
        Saída: nenhuma
        Pós-condição: nenhuma

    smallest_elem:
        Entrada: endereço de uma lista
        Pré-condição: lista ser válida e não estar vazia
        Processo: percorrer a lista até encontrar o elemento desejado
        Saída: elemento (sucesso - retorna elemento) ou -1 (falha - lista nao foi criada ou esta vazia)
        Pós-condição: nenhuma

    list_size:
        Entrada: endereço de uma lista
        Pré-condição: lista ser válida
        Processo: percorrer a lista contando quantos elementos ela possui
        Saída: tamanho (sucesso - retorna tamanho da lista) ou -1 (falha - lista nao foi criada ou esta vazia)
        Pós-condição: lista de entrada com um elemento a menos

    order_list:
        Entrada: endereço de uma lista
        Pré-condição: lista ser válida e não estar vazia
        Processo: percorrer a lista ordenando seus valores
        Saída:  0 (sucesso - lista) ou -1 (falha - lista nao foi criada ou esta vazia)
        Pós-condição: lista de entrada com todos os seus elementos ordenados crescentemente

    concat_list:
        Entrada: endereço de três listas
        Pré-condição: listas serem válidas e não terem a soma das quantidades de seus elementos superior a 10
        Processo: percorrer a lista 1 e guardar seus elementos em lista 3 e e depois percorrer lista 2 e guardar seus elementos em lista 3
        Saída: 0 (sucesso - elemento removido) ou -1 (falha - elemento não removido)
        Pós-condição: lista 3 sendo o resultado da concatenação de lista 1 e lista 2
*/

typedef struct list* List;


List create_list();

int empty_list(List lst);

int full_list(List lst);

int insert_elem(List lst, int elem);

int remove_elem(List lst, int elem);

int remove_odd(List lst);

int print_list(List lst);

int smallest_elem(List lst);

int order_list(List lst);

int size_list(List lst);

int concat_list(List lst1, List lst2, List lst3);
