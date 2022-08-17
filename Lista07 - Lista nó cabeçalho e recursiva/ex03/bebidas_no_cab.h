//TAD Tabela bebidas com nó cabeçalho;
typedef struct node* Tabela;

        /*Dados: O programa aplicativo permite ao usuário inicializar uma tabela, inserir
        e remover registros e imprimir a tabela.
        Lista de operações: create_tabela, empty_tabela, insert_reg, remove_reg e print_tabela.

Operações:
Operação create_tabela:*/
Tabela create_tabela();
/*Entrada: nenhuma
Pré-condição: nenhuma
Processo: cria uma tabela com um nó cabeçalho
Saída: nenhuma
Pós-condição: tabela com apenas um ponteiro para o nó cabeçalho

Operação empty_tabela:*/
int empty_tabela(Tabela tabela);
/*Entrada: endereço da tabela
Pré-condição: nenhuma
Processo: retorna se uma tabela está vazia ou nao
Saída: 0 para sucesso (vazia), -1 para falha
Pós-condição: nenhuma

Operação insert_reg:*/
int insert_reg(Tabela tabela, char *name, int vol, float price);
/*Entrada: endereço da tabela e os dados do registro a inserir (nome, volume, preço)
Pré-condição: registro a inserir ser alocado com sucesso
Processo: insere um registro na tabela
Saída: 0 para sucesso (inseriu), -1 para falha
Pós-condição: tabela com um elemento a mais

Operação remove_reg:*/
int remove_last_reg(Tabela tabela);
/*Entrada: endereço da tabela
Pré-condição: nao estar vazia
Processo: remove um elemento da tabela
Saída: 0 para sucesso (removeu), -1 para falha
Pós-condição: tabela com um elemento a menos

Operação print_tabela:*/
void print_tabela(Tabela tabela);
/*Entrada: endereço da tabela
Pré-condição: tabela existir e nao estar vazia 
Processo: imprime a tabela com os valores inseridos
Saída: 0 para sucesso (obteve o valor), -1 para falha
Pós-condição: nenhuma*/