/*

TAD: lista_din_enc_ord

- Dados: Números inteiros

- Lista de operações: create_list, empty_list, insert_elem_ord, insert_elem_begin, remove_elem, list_size, average_list, equal_lists, intercal_list, reverse_list, odd_elems_list, print_list

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
        Saída: 0 (sucesso - elemento removido) ou -1 (falha - elemento não inserido)
        Pós-condição: lista de entrada com um elemento a mais

    insert_elem_begin:
        Entrada: endereço de uma lista e o elemento (nro inteiro) a ser inserido
        Pré-condição: lista ser válida
        Processo: inserir novo nó no início da lista
        Saída: 0 (sucesso - elemento inserido) ou -1 (falha - elemento não inserido)
        Pós-condição: lista de entrada com um elemento a mais

    remove_elem:
        Entrada: endereço de uma lista e o elemento (nro inteiro) a ser removido
        Pré-condição: lista ser válida e não estar vazia
        Processo: percorrer a lista até encontrar o elemento desejado ou chegar ao chegar ao seu final. Se o elemento existe, remova-o da lista
        Saída: 0 (sucesso - elemento removido) ou -1 (falha - elemento não removido)
        Pós-condição: lista de entrada com um elemento a menos

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
        Saída: media (sucesso - retorna a media) ou -1 (falha - endereço inválido)
        Pós-condição: nenhuma

    equal_lists:
        Entrada: endereço de duas listas
        Pré-condição: listas serem válidas
        Processo: percorrer as duas listas e verificar se seus respectivos conteúdos são iguais
        Saída: 0 (sucesso - listas são iguais) ou -1 (falha - listas são diferentes)
        Pós-condição: nenhuma

    intercal_list:
        Entrada: endereço de três listas
        Pré-condição: listas serem válidas, e a primeira e a segunda lista não serem vazias
        Processo: chama a função insert_elem_begin( ), passa a lista que vai receber os elementos e o elemento do primeiro nó da lista que foi passada. Faça até chegar ao final da lista 1 e da lista 2
        Saída: 0 (sucesso - lista com elementos intercalados criada) ou -1 (falha - lista não criada)
        Pós-condição: lista com elementos intercalados

    reverse_list:
        Entrada: endereço de duas listas
        Pré-condição: listas serem válidas e a primeira não estar vazia
        Processo: percorre a primeira lista e adiciona cada nó em uma nova lista
        Saída: 0 (sucesso - lista 2 criada com o inverso da 1) ou -1 (falha - endereço inválido ou lista vazia)
        Pós-condição: lista 2 com os elementos na ordem inversa da lista 1

    odd_elems_list:
        Entrada: endereço de duas listas
        Pré-condição: listas serem válidas e a primeira não estar vazia
        Processo: percorre a primeira lista e verifica se o conteúdo do campo info do nó impar, caso seja, adicionar na segunda lista
        Saída: 0 (sucesso - lista 2 criada e somente com nros ímpares) ou -1 (falha - lista 1 não tem nros ímpares)
        Pós-condição: lista 2 somente com nros ímpares

    print_list:
        Entrada: endereço de uma lista 
        Pré-condição: lista ser válida
        Processo: percorrer a lista imprimindo o conteúdo do campo info de cada nó 
        Saída: nenhuma
        Pós-condição: nenhuma
*/

typedef struct node *List;

List create_list();

void print_list(List lst);

int empty_list(List lst);

int insert_elem_ord(List *lst, int elem);

int insert_elem_begin(List *lst, int elem);

int remove_elem(List *lst, int elem);

int list_size(List *lst);

float average_list(List *lst);

int equal_lists(List *lst1, List *lst2);

int intercal_list(List *lst1,List *lst2, List *lst3);

int reverse_list(List *lst, List *lst2);

void odd_elems_list(List *lst, List *lst2);