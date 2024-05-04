/* ================================================================== *
 *  Universidade Federal de Sao Carlos - UFSCar, Sorocaba
 *
 *  Disciplina: Introdução à Programação
 *  Prof. Tiago A. Almeida
 *
 *  Tabela Verdade
 * ================================================================== */

/* Mefistofélio está estudando cálculo proposicional em Lógica Matemática com o
professor José. Cansado de ter que perguntar para os monitores se suas equivalências
lógicas estão corretas, ele decidiu implementar um interpretador da tabela verdade
(das operações e, ou, implicação e bicondicional).

ENTRADAS
O programa deve receber dois caracteres (V simboliza verdadeiro e F falso) e um
caractere que representa uma operação booleana.

Serão utilizadas as seguintes letras para representar os operadores:
E - Operação e;
O - Operação ou;
I - Operação implicação;
B - Operação bicondicional.

SAÍDA
A saída deve ser o resultado da operação booleana quando esta for uma operação válida.
Caso a terceira entrada não seja uma das letras especificadas acima, a saída deve ser
a mensagem pré-definida “entrada inválida!”. */

#include <stdio.h>

#define VERDADEIRO "V\n"
#define FALSO "F\n"
#define INVALIDO "entrada inválida!\n"

int main() {
    char a, b, c;
    scanf(" %c %c %c", &a, &b, &c);
    
    if ((a != 'V' && a != 'F') || (b != 'V' && b != 'F')) {
        printf(INVALIDO);
        return 0;
    }

    switch (c) {
        case 'E':
            printf((a == 'V' && b == 'V') ? VERDADEIRO : FALSO);
            break;
        case 'O':
            printf((a == 'V' || b == 'V') ? VERDADEIRO : FALSO);
            break;
        case 'I':
            printf((a == 'V' && b == 'F') ? FALSO : VERDADEIRO);
            break;
        case 'B':
            printf((a == b) ? VERDADEIRO : FALSO);
            break;
        default:
            printf(INVALIDO);
    }
    
    return 0;
}