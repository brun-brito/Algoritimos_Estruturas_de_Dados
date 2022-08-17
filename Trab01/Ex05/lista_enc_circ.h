/*

TAD: lista_din_enc_ord_no_cab

- Dados: Números inteiros

- Lista de operações: create_list, empty_list, insert_elem_end, insert_elem_begin, insert_elem_pos, remove_elem_begin, remove_elem_pos, remove_elem, size_list, biggest_elem, remove_even, print_list

Operações:
    create_list:
        Entrada: nenhuma
        Pré-condição: nenhuma
        Processo: cria uma lista e um nó cabeçalho e faz as atribuições
        Saída: endereço da lista criada
        Pós-condição: Nenhuma

    empty_list:
        Entrada: endereço de uma lista
        Pré-condição: lista ser válida
        Processo: verifica o campo prox do nó cabeçalho, se ele for NULL a lista é vazia
        Saída: 0 (sucesso - lista está vazia) ou -1 (falha - lista não está vazia)
        Pós-condição: nenhuma    

    insert_elem_end:
        Entrada: endereço de uma lista e o elemento (nro inteiro) a ser inserido
        Pré-condição: lista ser válida
        Processo: inserir novo nó na última posição da lista 
        Saída: 0 (sucesso - elemento inserido) ou -1 (falha - elemento não inserido)
        Pós-condição: lista de entrada com um elemento a mais

    insert_elem_begin:
        Entrada: endereço de uma lista e o elemento (nro inteiro) a ser inserido
        Pré-condição: lista ser válida
        Processo: inserir novo nó no início da lista
        Saída: 0 (sucesso - elemento inserido) ou -1 (falha - elemento não inserido)
        Pós-condição: lista de entrada com um elemento a mais

    insert_elem_pos:
        Entrada: endereço de uma lista, elemento (nro inteiro) a ser inserido e a posição desejada para inserção
        Pré-condição: lista e posição escolhida serem válidas
        Processo: percorrer a lista até encontrar a posição desejada e inserir elemento
        Saída: 0 (sucesso - elemento inserido) ou -1 (falha - elemento não inserido)
        Pós-condição: lista de entrada com um elemento a mais

    remove_elem_begin:
        Entrada: endereço de uma lista e um ponteiro para o elemento a remover
        Pré-condição: lista e endereço do elemento serem válidos e lista não vazia
        Processo: remove o primeiro elemento da lista e altera o valor da variável
        Saída: 0 (sucesso - elemento removido) ou -1 (falha - elemento não removido)
        Pós-condição: lista com um elemento a menos

    remove_elem_pos:
        Entrada: endereço de uma lista e uma posição para remover
        Pré-condição: lista não ser vazia e posição ser válida
        Processo: remove o elemento da lista referente à posição escolhida pelo usuário
        Saída: 0 (sucesso - elemento removido), -1 ou -2(falha - elemento não removido)
        Pós-condição: lista com um elemento a menos 

    size_list:
        Entrada: endereço de uma lista
        Pré-condição: lista ser válida
        Processo: percorre a lista contando a quantidade de nós e armazenando o valor em uma variável j
        Saída: retorna o valor de j para sucesso e -1 para falha
        Pós-condição: nenhuma

    biggest_elem:
        Entrada: endereço da lista
        Pré-condição: lista não estar vazia
        Processo: percorre a lista comparando os nós e armazenando o valor do maior em uma variável x
        Saída: retorna o valor de x para sucesso e -1 para falha
        Pós-condição: nenhuma

    remove_even:
        Entrada: endereço da lista
        Pré-condição: lista não ser vazia
        Processo: remove todos os elementos pares da lista
        Saída: 0 (sucesso - elementos pares removidos) ou -1 (falha - elementos nao removidos)
        Pós-condição: lista de entrada somente com elementos impares ou vazia

    remove_elem:
        Entrada: endereço da lista e elemento a remover
        Pré-condição: lista não estar vazia
        Processo: percorre a lista até achar o elemento que o usuário escolheu e o remove  
        Saída: 0 (sucesso - remove o elemento) ou -1 (falha - elemento nao removido)
        Pós-condição: lista de entrada com um elemento a menos

    print_list:
        Entrada: endereço de uma lista 
        Pré-condição: lista ser válida
        Processo: percorrer a lista imprimindo o conteúdo do campo info de cada nó 
        Saída: nenhuma
        Pós-condição: nenhuma
*/

typedef struct node* List;

List create_list();

void print_list(List lst);

int empty_list(List lst);

int insert_elem_end(List *lst, int elem);

int insert_elem_begin(List *lst, int elem);

int insert_elem_pos(List *lst, int elem, int pos);

int remove_elem_begin(List *lst, int *elem);

int remove_elem_pos(List *lst, int pos, int *elem);

int remove_elem(List *lst, int elem);

int size_list(List lst);

int biggest_elem(List lst);

int remove_even(List *lst);