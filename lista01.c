// LISTA DE EXERCÍCIOS 01 - Entrada, Saída e Operadores em C
// Alunos: RA: 25022660 - Kayo Gabriel Casatti Camargo
// Alunos: RA:  - Yago de Campos Neves
// Alunos: RA:  - Guilherme MOntoro Antolinez


#include <stdio.h>
#include <math.h>


void exercicio01() 
{
    int valor1, valor2, subtracao;

    printf("Digite o primeiro valor: ");
    scanf("%d", &valor1);

    printf("Digite o segundo valor: ");
    scanf("%d", &valor2);

    subtracao = valor2 - valor1;

    printf("O valor da subtracao eh de %d \n", subtracao);
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

    printf("O valor da multiplicacao eh %d \n", multiplicacao); 
}

void exercicio03() 
{
    float nota1, nota2, media;

    printf("Digite a nota 1: ");
    scanf("%f", &nota1);

    printf("Digite a nota 2: ");
    scanf("%f", &nota2);

    media = ((nota1 * 2) + (nota2*3)) / 5;

    printf("A media eh: %.2f \n", media);
}

void exercicio04()
{
    float preco_produto, valor;

    printf("Digite o preco do produto: ");
    scanf("%f", &preco_produto);

    valor = preco_produto * 0.9;

    printf("O preco do produto apos o desconto eh de: %.2f \n", valor);
}

void exercicio05()
{
    float salario, salario_final, vendas, comissao;
    
    printf("Digite o salario: ");
    scanf("%f", &salario);

    printf("Digite o valor total das vendas: ");
    scanf("%f", &vendas);

    comissao = vendas * 0.04;

    salario_final = comissao +salario;

    printf("O salario final apos a comissao eh de: %.2f \n", salario_final); 
}

void exercicio06()
{
    float peso_kg, peso_g;

    printf("DIgite o valor em kilogramas: ");
    scanf("%f", &peso_kg);

    peso_g = (peso_kg * 1000);

    printf("O peso tranformado em gramas eh: %.2f \n", peso_g);
}

void exercicio07()
{
    float peso, peso_engordar, peso_emagrecer;

    printf("Digite seu peso: ");
    scanf("%f", &peso);

    peso_engordar = peso + (peso * 0.15);
    peso_emagrecer = peso - (peso * 0.20);

    printf("Seu peso se engordar : %.2f \n", peso_engordar);
    printf("Seu peso se emagrecer: %.2f \n", peso_emagrecer);
}

void exercicio08()
{
    float base_maior, base_menor, altura, area;

    printf("DIgite a base maior do triangulo: ");
    scanf("%f", &base_maior);

    printf("DIgite a base menor do triangulo: ");
    scanf("%f", &base_menor);

    printf("DIgite a altura do triangulo: ");
    scanf("%f", &altura);

    area = (((base_maior + base_menor) * altura) / 2);

    printf("A area do triangulo eh: %.2f \n", area);
}

void exercicio09()
{
    float lado, area;

    printf("Digite o lado do quadrado: ");
    scanf("%f", &lado);

    area = lado * lado;

    printf("A area do quadrado eh: %.2f \n", area);
}

void exercicio10()
{
    float diagonal_maior, diagonal_menor, area;

    printf("Digite a diagonal maior do losango: ");
    scanf("%f", &diagonal_maior);

    printf("Digite a diagonal menor do losango: ");
    scanf("%f", &diagonal_menor);

    area = ((diagonal_maior*diagonal_menor) / 2);

    printf("A area do losango eh de: %.2f \n", area);
}

void exercicio11()
{
    float salario_minimo, salario, calculo;

    printf("Digite o valor do salario minimo atualmente: ");
    scanf("%f",&salario_minimo);

    printf("Digite o valor do salario: ");
    scanf("%f",&salario);

    calculo = (salario / salario_minimo);

    printf("Voce recebe %i salarios minimos \n", calculo);
}

void exercicio12()
{
    int numero, i;

    printf("Digite o numero para fazer a tabuada dele: ");
    scanf("%d", &numero);

    for (i = 1; i <= 10; i++)
    {
        printf("%d * %d = %d\n", numero, i, numero * i);
    }
}  

void exercicio13()
{
    int anoNascimento, anoAtual;
    int idadeAnos, idadeMeses, idadeSemanas, idadeDias;

    printf("Digite o ano de nascimento: ");
    scanf("%d", &anoNascimento);

    printf("Digite o ano atual: ");
    scanf("%d", &anoAtual);

    idadeAnos = anoAtual - anoNascimento;

    idadeMeses = idadeAnos * 12;
    idadeSemanas = idadeAnos * 52;
    idadeDias = idadeAnos * 365;

    printf("\nIdade aproximada:\n");
    printf("Anos: %d\n", idadeAnos);
    printf("Meses: %d\n", idadeMeses);
    printf("Semanas: %d\n", idadeSemanas);
    printf("Dias: %d\n", idadeDias);
}

void exercicio14()
{
    float valorReais, valorReajuste;

    printf("Digite o valor em reais: ");
    scanf("%f", &valorReais);

    valorReajuste = valorReais * 1.12;

    printf("O valor apos o reajuste eh de R$ %.2f \n", valorReajuste);
}

void exercicio15()
{
    int pizzasConsumidas, fatiasSobradas;
    int fatiasConsumidas;

    printf("Digite quantas fatias de pizza foram consumidas: ");
    scanf("%d", &fatiasConsumidas);

    pizzasConsumidas = fatiasConsumidas / 8;
    fatiasSobradas = fatiasConsumidas % 8;

    printf("Pizzas consumidas: %d \n", pizzasConsumidas);
    printf("Fatias sobradas: %d \n", fatiasSobradas);

}

void exercicio16() {

    int a, b;

    printf("Digite dois numeros inteiros: ");
    scanf("%d %d", &a, &b);

    printf("Quociente: %d\n", a / b);
    printf("Resto: %d\n", a % b);
}

void exercicio17() {

    float f, c;

    printf("Digite a temperatura em Fahrenheit: ");
    scanf("%f", &f);

    c = (f - 32) / 1.8;

    printf("Temperatura em Celsius: %.2f\n", c);
}

void exercicio18() {

    float raio, area, comprimento;
    float pi = 3.14159;

    printf("Digite o raio: ");
    scanf("%f", &raio);

    area = pi * raio * raio;
    comprimento = 2 * pi * raio;

    printf("Area: %.2f\n", area);
    printf("Comprimento: %.2f\n", comprimento);
}

void exercicio19() {

    float V, R, I;

    printf("Digite a tensao (V) e a resistencia (R): ");
    scanf("%f %f", &V, &R);

    I = V / R;

    printf("Corrente eletrica: %.2f A\n", I);
}

void exercicio20() {

    float a, b, h;

    printf("Digite os catetos: ");
    scanf("%f %f", &a, &b);

    h = sqrt(a*a + b*b);
    printf("Hipotenusa: %.2f\n", h);
}

void exercicio21() {

    float largura, comprimento, area, potencia;

    printf("Digite largura e comprimento (em metros): ");
    scanf("%f %f", &largura, &comprimento);

    area = largura * comprimento;
    potencia = area * 18;

    printf("Area: %.2f m2\n", area);
    printf("Potencia necessaria: %.2f W\n", potencia);
}

void exercicio22() {

    float a, b, c;

    printf("Digite dois angulos: ");
    scanf("%f %f", &a, &b);

    c = 180 - (a + b);

    printf("Terceiro angulo: %.2f\n", c);
}

void exercicio23() {

    int N, diagonais;

    printf("Digite o numero de lados: ");
    scanf("%d", &N);

    diagonais = N * (N - 3) / 2;

    printf("Numero de diagonais: %d\n", diagonais);
}

void exercicio24()
{
    float raio, volume, altura;

    printf("Digite o valor do raio: ");
    scanf("%f", &raio);

    printf("Digite o valor da altura: ");
    scanf("%f", &altura);

    volume = ((3.14159 * (raio * raio)) * altura);

    printf("O volume da lata cilindrica eh: %.2f \n", volume);
}

void exercicio25()
{
    int hora,minutos, hora_conv_min, minutos_totais, segundos_totais;

    printf("Digite uma hora a hora: ");
    scanf("%d", &hora);

    printf("Digite os minutos: ");
    scanf("%d", &minutos);

    hora_conv_min = hora * 60;
    minutos_totais = ((hora * 60) + minutos);
    segundos_totais = minutos_totais * 60;

    printf("Hora convertida em minutos: %d \n", hora_conv_min);
    printf("Total de minutos: %d \n", minutos_totais);
    printf("Total de segundos: %d \n", segundos_totais);
}

void exercicio26()
{
    int alfa, beta, gama, troca;

    printf("Digite o valor de alfa: ");
    scanf("%d", &alfa);

    printf("Digite o valor de beta: ");
    scanf("%d", &beta);

    printf("Digite o valor de gama: ");
    scanf("%d", &gama);

    printf("Antes da troca: Alfa = %d, Beta = %d, Gama = %d \n", alfa, beta, gama);

    troca = alfa;
    alfa = beta;
    beta = gama;
    gama = troca;

    printf("Depois da troca: Alfa = %d, Beta = %d, Gama = %d \n", alfa, beta, gama);
}

void exercicio27()
{
    int nota1, nota2, nota3, nota4, media;

    printf("Digite a nota 1: ");
    scanf("%d", &nota1);

    printf("Digite a nota 2: ");
    scanf("%d", &nota2);

    printf("Digite a nota 3: ");
    scanf("%d", &nota3);

    printf("Digite a nota 4: ");
    scanf("%d", &nota4);

    media = ((nota1 * 1) + (nota2 * 2) + (nota3 * 3) + (nota4 * 4)) / 10;

    printf("Media final: %d", media);
}

void exercicio28()
{
    float tempo, velocidade, distancia, litros;

    printf("Digite o tempo da viagem: ");
    scanf("%f", &tempo);

    printf("Digite a velocidade media durante a viagem: ");
    scanf("%f", &velocidade);

    distancia = (tempo * velocidade);
    litros = (distancia / 12);

    printf("A distancia percorrida foi de: %f \n", distancia);
    printf("A quantidade de litros usados foi de: %.2f", litros);
}

void exercicio29()
{
    float salario, conta1, conta2, resto;

    printf("Digite o valor do salario: ");
    scanf("%f", &salario);

    printf("Digite o valor da primeira conta atrasada: ");
    scanf("%f", &conta1);

    printf("Digite o valor da segunda conta atrasada: ");
    scanf("%f", &conta2);

    conta1 = (conta1 * 1.02);
    conta2 = (conta2 * 1.02);

    resto = (salario - (conta1 + conta2));

    printf("Vai restar %.2f do seu salario \n", resto);
}

void exercicio30()
{
    float resistencia1, resistencia2, serie, paralelo;

    printf("Digite o valor da resistencia 1 (em ohms): ");
    scanf("%f", &resistencia1);

    printf("Digite o valor da resistencia 2 (em ohms): ");
    scanf("%f", &resistencia2);

    serie = (resistencia1 + resistencia2);
    paralelo = ((resistencia1 * resistencia2) / (resistencia1 + resistencia2));

    printf("Valor da resistencia em serie: %.2f \n", serie);
    printf("Valor da resistencia em paralelo: %.2f \n", paralelo);
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
            case 4: exercicio04(); break;
            case 5: exercicio05(); break;
            case 6: exercicio06(); break;
            case 7: exercicio07(); break;
            case 8: exercicio08(); break;
            case 9: exercicio09(); break;
            case 10: exercicio10(); break;
            case 11: exercicio11(); break;
            case 12: exercicio12(); break;
            case 13: exercicio13(); break;
            case 14: exercicio14(); break;
            case 15: exercicio15(); break;
            case 16: exercicio16(); break;
            case 17: exercicio17(); break;
            case 18: exercicio18(); break;
            case 19: exercicio19(); break;
            case 20: exercicio20(); break;
            case 21: exercicio21(); break;
            case 22: exercicio22(); break;
            case 23: exercicio23(); break;
            case 24: exercicio24(); break;
            case 25: exercicio25(); break;
            case 26: exercicio26(); break;
            case 27: exercicio27(); break;
            case 28: exercicio28(); break;
            case 29: exercicio29(); break;
            case 30: exercicio30(); break;
        }
    } while (op != 0);

    return 0;
}

