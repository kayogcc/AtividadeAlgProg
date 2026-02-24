// LISTA DE EXERCÍCIOS 01 - Entrada, Saída e Operadores em C
// Alunos: RA: 25022660 - Kayo Gabriel Casatti Camargo
// Alunos: RA:  - Yago de Campos Neves


#include <stdio.h>
#include <math.h>


void exercicio01() 
{
    //....//
}

void exercicio02() 
{
    //....//
}


int main() {

    int op;

    do {
        printf("\nEscolha o número do exercício: ");
        scanf("%d", &op);

        switch (op) {
            case 1: exercicio01(); break;
            // case 2: exercicio02(); break;
            // case 3: exercicio03(); break;
            /* ... */
        }
    } while (op != 0);

    return 0;
}

