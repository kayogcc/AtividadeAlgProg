// LISTA DE EXERCÍCIOS 01 - Entrada, Saída e Operadores em C
// Alunos: RA: 25022660 - Kayo Gabriel Casatti Camargo
// Alunos: RA:  - Yago de Campos Neves


#include <stdio.h>
#include <math.h>


void exercicio01() 
{
    int valor1, valor2;

    printf("Digite o primeiro valor: ");
    scanf("%d", &valor1);

    printf("Digite o segundo valor: ");
    scanf("%d", &valor2);

    int subtracao = 0;

    subtracao = valor2 - valor1;

    printf("O valor da subtracao eh de %d", subtracao);

}

void exercicio02() 
{
    //....//
}


int main() {

    int op;

    do {
        printf("\nEscolha o numero do exercicio: ");
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

