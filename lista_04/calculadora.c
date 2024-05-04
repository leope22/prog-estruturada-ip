/* ================================================================== *
 *  Universidade Federal de Sao Carlos - UFSCar, Sorocaba
 *
 *  Disciplina: Introdução à Programação
 *  Prof. Tiago A. Almeida
 *
 *  Calculadora
 * ================================================================== */

 /* Este programa implementa uma calculadora que permite realizar diversas operações matemáticas.
   A execução do programa continua até que a opção digitada seja 0, indicando o término do programa.

   ENTRADAS:
   O programa recebe dois números inteiros seguidos pela opção correspondente a cada operação.
   Após o resultado ser impresso na tela, o usuário deve inserir a opção novamente até que seja digitado 0,
   que indica o fim do programa. As opções são enumeradas da seguinte forma:
   (0) sair do programa;
   (1) soma dos dois números;
   (2) subtração do primeiro pelo segundo;
   (3) subtração do segundo pelo primeiro;
   (4) multiplicação dos dois números;
   (5) divisão do primeiro pelo segundo;
   (6) divisão do segundo pelo primeiro;
   (7) quociente inteiro da divisão do primeiro pelo segundo;
   (8) quociente inteiro da divisão do segundo pelo primeiro;
   (9) resto da divisão do primeiro pelo segundo;
   (10) resto da divisão do segundo pelo primeiro;
   (11) o primeiro elevado pelo segundo;
   (12) o segundo elevado pelo primeiro.

   SAÍDA:
   Qualquer opção diferente das descritas acima deve imprimir uma mensagem de erro pré-definida
   e continuar a execução do programa. O programa deve imprimir apenas o resultado da opção
   selecionada e parar de executar somente quando a opção for 0.

   Detalhes:
   - A entrada é composta por números inteiros;
   - É necessário fazer a verificação de divisão por 0;
   - Resultados reais devem ser impressos com duas casas decimais. */

#include <stdio.h>
#include <math.h>

#define OP_INVALIDA "opção inválida!\n"
#define ZERO_DIV "divisão por 0!\n"

int main() {
    long int a, b, c = 1, d;

    scanf("%ld", &a);
    scanf("%ld", &b);

    do {
        scanf("%ld", &c);
        
        switch (c) {
            case 0:
                return 0;
            case 1:
                printf("%ld\n", a + b);
                break;
            case 2:
                printf("%ld\n", a - b);
                break;
            case 3:
                printf("%ld\n", b - a);
                break;
            case 4:
                printf("%ld\n", a * b);
                break;
            case 5:
                if (b == 0) {
                    printf(ZERO_DIV);
                } else {
                    printf("%.2f\n", (float)a / (float)b);
                }
                break;
            case 6:
                if (a == 0) {
                    printf(ZERO_DIV);
                } else {
                    printf("%.2f\n", (float)b / (float)a);
                }
                break;
            case 7:
                if (b == 0) {
                    printf(ZERO_DIV);
                } else {
                    printf("%ld\n", a / b);
                }
                break;
            case 8:
                if (a == 0) {
                    printf(ZERO_DIV);
                } else {
                    printf("%ld\n", b / a);
                }
                break;
            case 9:
                printf("%ld\n", a % b);
                break;
            case 10:
                printf("%ld\n", b % a);
                break;
            case 11:
                printf("%.0f\n", pow((double)a, (double)b));
                break;
            case 12:
                printf("%.0f\n", pow((double)b, (double)a));
                break;
            default:
                printf(OP_INVALIDA);
        }
    } while (c != 0);

    return 0;
}