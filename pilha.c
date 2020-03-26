#include <stdio.h>
#include <stdlib.h>

#include "pilha.h"

void criaPilha(C *cabeca) {

    cabeca->prox = NULL;
}

void inserePilha(C *cabeca) {

    C *novoCliente;

    novoCliente = malloc(sizeof(C));

    printf("\n");

    printf("Digite o codigo do cliente: ");
    scanf("%i", &novoCliente->codigo);

    novoCliente->prox = NULL;

    if(cabeca->prox == NULL) {

        cabeca->prox = novoCliente;
    }
    else {

        C *temp = cabeca->prox;

        while(temp->prox != NULL) {

            temp = temp->prox;
        }

        temp->prox = novoCliente;
    }
}

void mostraPilha(C *cabeca) {

    if(cabeca->prox != NULL) {

        C *temp;
        temp = cabeca->prox;

        printf("Clientes Cadastrados:\n");
        while(temp != NULL) {

            printf("Codigo (%i)\n", temp->codigo);
            temp = temp->prox;
        }
    }
    else {

        printf("Pilha vazia\n\n");
    }
}

void removePilha(C *cabeca) {

    if(cabeca->prox == NULL) {

        printf("Pilha vazia\n\n");
    }
    else {

        C *ultimo = cabeca->prox;
        C *penultimo = cabeca;

        while(ultimo->prox != NULL) {

            penultimo = ultimo;
            ultimo = ultimo->prox;
        }

        penultimo->prox = NULL;

        printf("Cliente (%i) REMOVIDO\n\n", ultimo->codigo);
    }
}

void menu(C *cabeca) {

    int opcao;

    do {
        printf("==========## MENU - CADASTRO DE CODIGOS DE CLIENTES (PILHA) ##==========\n");
        printf("1 - Registrar Codigo (PUSH)\n");
        printf("2 - Mostrar Codigos\n");
        printf("3 - Remover Codigo (POP)\n");
        printf("4 - Sair\n");

        printf("Escolha uma opcao: ");
        scanf("%i", &opcao);

        switch (opcao) {

            case 1:
                system("cls");
                inserePilha(cabeca);
                system("cls");
                break;

            case 2:
                system("cls");
                mostraPilha(cabeca);
                printf("\n");
                break;

            case 3:
                system("cls");
                removePilha(cabeca);
                break;

            case 4:
                printf("\nPrograma finalizado!\n");
                break;

            default:
                system("cls");
                printf("Escolha uma opcao valida!\n");
        }
    } while (opcao != 4);
}