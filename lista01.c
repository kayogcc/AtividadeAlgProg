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
    int numero1, numero2, numero3;

    printf("Digite o primeiro numero: ");
    scanf("%d", &numero1);

    printf("Digite o segundo numero: ");
    scanf("%d", &numero2);

    printf("Digite o terceiro numero: ");
    scanf("%d", &numero3);

    int multiplicacao = 0;

    multiplicacao = numero1 * numero2 * numero3;

    printf("O valor da multiplicacao eh %d", multiplicacao);    
}

void exercicio03() 
{
    float nota1, nota2, media;

    printf("Digite a nota 1: ");
    scanf("%f", &nota1);

    printf("Digite a nota 2: ");
    scanf("%f", &nota2);

    media = ((nota1 * 2) + (nota2*3)) / 5;

    printf("A media eh: %.2f ", media);
}

void exercicio04()
{

}

void exercicio05()
{

}

void exercicio06()
{

}

void exercicio07()
{

}

void exercicio08()
{

}

void exercicio09()
{

}

void exercicio10()
{

}

void exercicio11()
{

}

void exercicio12()
{

}

void exercicio13()
{

}

void exercicio14()
{

}

void exercicio15()
{

}

void exercicio16()
{

}

void exercicio17()
{

}

void exercicio18()
{

}

void exercicio19()
{

}

void exercicio20()
{

}

void exercicio21()
{

}

void exercicio22()
{

}

void exercicio23()
{

}

void exercicio24()
{

}

void exercicio25()
{

}

void exercicio26()
{

}

void exercicio27()
{

}

void exercicio28()
{

}

void exercicio29()
{

}

void exercicio30()
{

}


int main() {

    int op;

    do {
        printf("\nEscolha o numero do exercicio: ");
        scanf("%d", &op);

        switch (op) {
            case 1: exercicio01(); break;
            case 2: exercicio02(); break;
            case 3: exercicio03(); break;
            case 4: exercicio03(); break;
            case 5: exercicio03(); break;
            case 6: exercicio03(); break;
            case 7: exercicio03(); break;
            case 8: exercicio03(); break;
            case 9: exercicio03(); break;
            case 10: exercicio03(); break;
            case 11: exercicio03(); break;
            case 12: exercicio03(); break;
            case 13: exercicio03(); break;
            case 14: exercicio03(); break;
            case 15: exercicio03(); break;
            case 16: exercicio03(); break;
            case 17: exercicio03(); break;
            case 18: exercicio03(); break;
            case 19: exercicio03(); break;
            case 20: exercicio03(); break;
            case 21: exercicio03(); break;
            case 22: exercicio03(); break;
            case 23: exercicio03(); break;
            case 24: exercicio03(); break;
            case 25: exercicio03(); break;
            case 26: exercicio03(); break;
            case 27: exercicio03(); break;
            case 28: exercicio03(); break;
            case 29: exercicio03(); break;
            case 30: exercicio03(); break;
        }
    } while (op != 0);

    return 0;
}

