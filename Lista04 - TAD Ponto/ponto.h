//TAD ponto;
typedef struct Ponto Ponto;

        /*Dados: O programa aplicativo deve ler as coordenadas de 2 pontos, digitadas pelo usuário e
               imprimir na tela a distância entre esses pontos. Nesse processo, o programa deve criar
               os 2 pontos, calcular a distância entre esses pontos e, após apresentar o resultado,
               liberar os dois pontos
        Lista de operações: gera_pto, set_pto, get_pto, libera_pto, distancia_pto:

Operações:
        Operação gera_pto:*/
Ponto* gera_pto(float x, float y);
/*Entrada: dois pontos flutuantes
Pré-condição:
Processo: cria uma instância de um ponto sem valores.
Saída: retorna um ponteiro para Ponto
Pós-condição:

Operação set_pto:*/
int set_pto(Ponto* p, float x, float y);
/*Entrada: endereço de um espaço alocado e um ponto completo
Pré-condição: um endereço válido e dois números
Processo: atribui os valores das coordenadas x e y de um ponto.
Saída: 0 se sucesso, -1 se falha 
Pós-condição: valor de x e y alterados

Operação get_pto:*/
float get_pto();
/*Entrada:
Pré-condição:
Processo: retorna os valores das coordenadas x e y de um ponto.
Saída: 
Pós-condição:

Operação libera_pto:*/
void libera_pto(Ponto* p);
/*Entrada:
Pré-condição:
Processo: operação que elimina um ponto criado.
Saída:
Pós-condição:

Operação distancia_pto:*/
float distancia_pto(Ponto* p1, Ponto* p2);
/*Entrada:
Pré-condição:
Processo: calcula a distância entre dois pontos.
Saída: retorna o resultado da distância entre dois pontos
Pós-condição:
*/