//! STRUCT CLIENTE
typedef struct Cliente{

    int codigo;
    struct Cliente *prox;
}C;
//! INICIA PILHA
void criaPilha(C *cabeca);

//! EMPILHA / PUSH
void inserePilha(C *cabeca);
//! DESEMPILHA / POP
void removePilha(C *cabeca);
//! LISTAGEM
void mostraPilha(C *cabeca);
//! MENU
void menu(C *cabeca);

