//TAD Lista Estática Sequencial não ordenada
typedef struct list* List;


List create_list();

int empty_list(List lst);

int full_list(List lst);

int insert_elem_ord(List lst, int elem);

int remove_elem(List lst, int elem);

int remove_odd(List lst);

int print_list(List lst);

int smallest_elem(List lst);

int order_list(List lst);

int size_list(List lst);

int concat_list_ord(List lst1, List lst2, List lst3);
