/* 
TAD Prob polinomio

- Dados: Números inteiros

- Lista de operações: create_poli, print_poli, empty_poli, insert_term_ord, remove_term, restart_poli e calculate_poli.

Operações:
    create_poli:
        Entrada: nenhuma
        Pré-condição: nenhuma
        Processo: cria um polinomio e deixa ele no estado de vazio
        Saída: endereço de um polinomio criada
        Pós-condição: Nenhuma

    empty_poli:
        Entrada: entrada de um polinomio
        Pré-condição: polinomio ser válido
        Processo: verifica se o polinomio está na condição de vazio
        Saída: 0 (sucesso - polinomio está vazio) ou -1 (falha - polinomio não está vazio)
        Pós-condição: nenhuma    

    insert_elem_ord:
        Entrada: endereço de um polinomio, base e expoente do termo (nros inteiros) a seren inseridos
        Pré-condição: polinomio ser válido
        Processo: inserir novo termo em sua posição ordenada pelo expoente do polinomio
        Saída: 0 (sucesso - termo inserido) ou -1 (falha - termo não inserido)
        Pós-condição: polinomio de entrada ordenado e com um termo a mais    
    
    print_poli:
        Entrada: endereço de um polinomio 
        Pré-condição: polinomio ser válido
        Processo: percorrer o polinomio imprimindo o conteúdo do campo base e expoente de cada termo 
        Saída: nenhuma
        Pós-condição: nenhuma

    remove_term:
        Entrada: endereço de um polinomio e o expoente (nro inteiro) a ser removido
        Pré-condição: polinomio ser válido e não estar vazio
        Processo: percorrer o polinomio até encontrar o termo desejado ou até chegar ao seu final. Se o termo existe, remova-o do polinomio
        Saída: 0 (sucesso - termo removido) ou -1 (falha - termo não removido)
        Pós-condição: polinomio de entrada ordenado com um termo a meno

    restart_poli:
        Entrada: endereço de um polinomio
        Pré-condição: polinomio ser válido e não estar vazio
        Processo: percorrer o polinomio e remover todos os seus termos
        Saída: 0 (sucesso - polinomio reiniciado) ou -1 (falha - polinomio não reiniciado)
        Pós-condição: polinomio de entrada agora está vazio

    calculate_poli:
        Entrada: endereço de um polinomio e um valor de x para substituir
        Pré-condição: polinomio ser válido e não estar vazio 
        Processo: percorrer o polinomio e substituir o valor de x escolhido pelo usuario aos termos do polinomio
        Saída: resp (sucesso - retorna o valor de P(x)) ou -1 (falha - não conseguiu calcular)
        Pós-condição: nenhuma
*/

typedef struct node *Poli;

Poli create_poli();

int empty_poli(Poli p);

int insert_term_ord(Poli *p, int base, int expo);

void print_poli(Poli p);

int remove_term(Poli *p, int expo);

int restart_poli(Poli *p);

int calculate_poli(Poli p, int x);