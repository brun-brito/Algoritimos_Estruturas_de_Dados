/*

TAD: prob_josephus

Dados: nome do soldado

Lista de Operações:

*/

typedef struct node *List;

List creat_list();

int empty_list(List lst);

int insert_soldier_end(List *lst, char *name);

int sort_number(List lst);

int list_size(List lst);

int number_soldier(List lst);

int remove_soldier(List *soldados, List *mortos);

void print_list(List lst);