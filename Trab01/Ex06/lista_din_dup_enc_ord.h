/*
TAD: lista_din_dup_enc_ord

- Dados: Números inteiros

- Lista de operações: create_list, empty_list, insert_elem_ord, remove_elem, list_size, average_list, equal_lists, remove_all_occurrences, remove_biggest_occurrences, mult_of_three e print_list

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

    insert_elem_ord:
        Entrada: endereço de uma lista e o elemento (nro inteiro) a ser inserido
        Pré-condição: lista ser válida
        Processo: inserir novo nó em sua posição ordenada da lista
        Saída: 0 (sucesso - elemento inserido) ou -1 (falha - elemento não inserido)
        Pós-condição: lista ordenada de entrada com um elemento a mais    

    remove_elem:
        Entrada: endereço de uma lista e o elemento (nro inteiro) a ser removido
        Pré-condição: lista ser válida e não estar vazia
        Processo: percorrer a lista até encontrar o elemento desejado ou até chegar ao seu final. Se o elemento existe, remova-o da lista
        Saída: 0 (sucesso - elemento removido) ou -1 (falha - elemento não removido)
        Pós-condição: lista ordenada de entrada com um elemento a menos

    list_size:
        Entrada: endereço de uma lista
        Pré-condição: lista ser válida
        Processo: percorrer a lista e contar quantos elementos ela possui
        Saída: tam (sucesso - retorna o tamanho) ou -1 (falha - endereço inválido)
        Pós-condição: nenhuma

    average_list:
        Entrada: endereço de uma lista
        Pré-condição: lista ser válida e não estar vazia
        Processo: percorrer a lista somando o campo info de cada nó e depois dividir pelo tamanho da lista
        Saída: media (sucesso - retorna a média) ou -1 (falha - lista vazia)
        Pós-condição: nenhuma

    equal_lists:
        Entrada: endereço de duas listas
        Pré-condição: listas serem válidas
        Processo: percorrer as duas listas e verificar se seus respectivos conteúdos são iguais
        Saída: 0 (sucesso - listas são iguais) ou -1 (falha - listas são diferentes)
        Pós-condição: nenhuma   

    print_list:
        Entrada: endereço de uma lista 
        Pré-condição: lista ser válida
        Processo: percorrer a lista imprimindo o conteúdo do campo info de cada nó 
        Saída: nenhuma
        Pós-condição: nenhuma

    remove_all_occurrences:
        Entrada: endereço de uma lista 
        Pré-condição: lista ser válida
        Processo: percorrer a lista verificando o conteúdo do campo info de cada nó e compara com o elemento, se forem iguais remove da lista 
        Saída: 0 - (sucesso - elemento(s) excluido(s)) ou -1 (falha - lista está vazia)
        Pós-condição: nenhuma

    remove_biggest_occurrences:
        Entrada: endereço de uma lista 
        Pré-condição: lista ser válida
        Processo: percorrer a lista verificando o maior conteúdo do campo info de cada nó e remove da lista todas as suas ocorrências
        Saída: 0 - (sucesso - elemento(s) excluído(s)) ou -1 (falha - a primeira lista está vazia)
        Pós-condição: nenhuma

    mult_of_three:
        Entrada: endereço de duas listas 
        Pré-condição: lista serem válida
        Processo: percorrer a primeira lista verificando se os elementos são múltiplos de 3 e inserir na segunda lista caso seja 
        Saída: 0 - (sucesso - lista criada) ou -1 (falha - a primeira lista esta vazia)
        Pós-condição: lista com os múltiplos de 3
*/

typedef struct node *List;

List create_list();

void print_list(List lst);

int empty_list(List *lst);

int insert_elem_ord(List *lst, int elem);

int remove_elem(List *lst, int elem);

int list_size(List *lst);

float average_list(List *lst);

int equal_lists(List *lst1, List *lst2);

int remove_all_occurrences(List *lst, int elem);

int remove_biggest_occurrences(List *lst);

int mult_of_three(List *lst1, List *lst2);