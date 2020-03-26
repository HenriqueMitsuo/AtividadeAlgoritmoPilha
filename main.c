#include <stdio.h>
#include <stdlib.h>

#include "pilha.h"

int main() {

    C cabeca;

    criaPilha(&cabeca);

    menu(&cabeca);

    return 0;
}