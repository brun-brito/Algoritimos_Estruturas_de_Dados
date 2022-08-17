typedef struct node* List;

List create_list();

int empty_list(List lst);

int insert_elem_end(List *lst, int elem);

int remove_elem_begin(List *lst, int *elem);

int remove_elem(List *lst, int elem);

int get_elem(List lst, int elem);

void print_list(List lst);