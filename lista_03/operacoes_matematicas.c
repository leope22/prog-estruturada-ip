/* ================================================================== *
 *  Universidade Federal de Sao Carlos - UFSCar, Sorocaba
 *
 *  Disciplina: Introdução à Programação
 *  Prof. Tiago A. Almeida
 *
 *  Operações Matemáticas
 * ================================================================== */

/* Você está se tornando um programador mais experiente, e seus programas estão ficando cada
vez mais rebuscados. Você teve a brilhante ideia de refazer o primeiro exercício da Lista 01
adicionando um menu de opções, que são enumeradas do seguinte modo:

ENTRADAS
Seu programa receberá dois números inteiros, e depois a opção correspondente a cada operação
como enumerado abaixo:
(1) soma dos dois números;
(2) subtração do primeiro pelo segundo;
(3) subtração do segundo pelo primeiro;
(4) multiplicação dos dois números;
(5) divisão do primeiro pelo segundo;
(6) divisão do segundo pelo primeiro;
(7) quociente inteiro da divisão do primeiro pelo segundo;
(8) quociente inteiro da divisão do segundo pelo primeiro;
(9) resto da divisão do primeiro pelo segundo;
(10) resto da divisão do segundo pelo primeiro.

SAÍDA
O programa deve imprimir apenas o resultado da opção selecionada. Qualquer opção diferente
dessas deve imprimir a mensagem de erro pré-definida “opção inválida!”. Se houver uma
tentativa de divisão por zero, o programa deve imprimir “divisão por zero!”. Em todos os
casos, após a impressão da frase ou do resultado, deve-se encerrar a execução.

Detalhes
- A entrada é composta por números inteiros;
- É necessário fazer a verificação de divisão por 0;
- Resultados reais devem ser impressos com duas casas decimais. */

#include <stdio.h>

#define OP_INVALIDA "opção inválida!\n"
#define ZERO_DIV "divisão por 0!\n"

int main() {
    long int num1, num2, opcao;
    scanf("%ld %ld %ld", &num1, &num2, &opcao);

    switch (opcao) {
        case 1: printf("%ld\n", num1 + num2); break;
        case 2: printf("%ld\n", num1 - num2); break;
        case 3: printf("%ld\n", num2 - num1); break;
        case 4: printf("%ld\n", num1 * num2); break;
        case 5: 
            if (num2 == 0) {
                printf(ZERO_DIV);
            } else {
                printf("%.2f\n", (float)num1 / num2);
            }
            break;
        case 6: 
            if (num1 == 0) {
                printf(ZERO_DIV);
            } else {
                printf("%.2f\n", (float)num2 / num1);
            }
            break;
        case 7: 
            if (num2 == 0) {
                printf(ZERO_DIV);
            } else {
                printf("%ld\n", num1 / num2);
            }
            break;
        case 8: 
            if (num1 == 0) {
                printf(ZERO_DIV);
            } else {
                printf("%ld\n", num2 / num1);
            }
            break;
        case 9: printf("%ld\n", num1 % num2); break;
        case 10: printf("%ld\n", num2 % num1); break;
        default: printf(OP_INVALIDA);
    }

    return 0;
}