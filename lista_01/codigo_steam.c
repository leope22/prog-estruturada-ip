/* ================================================================== *
 *  Universidade Federal de Sao Carlos - UFSCar, Sorocaba
 *
 *  Disciplina: Introdução à Programação
 *  Prof. Tiago A. Almeida
 *
 *  Código Steam
 * ================================================================== */

/* Abromovick adora jogar jogos eletrônicos e gosta quando seus amigos também jogam,
então frequentemente empresta sua conta Steam. Com medo de que o código de acesso
de sua conta seja roubado, Abromovick pede sua ajuda para criar um programa de criptografia,
para que assim possa passar seu código sem medo de ser interceptado por terceiros.

ENTRADAS:
O programa deve receber em uma linha o número que representa o dia do mês em que foi
feita a criptografia e, na linha seguinte, quatro letras maiúsculas, todas juntas, sem espaço,
que representam o código de acesso.

SAÍDAS:
O programa deve imprimir cada uma das letras criptografadas da seguinte forma:

O valor na tabela ASCII da primeira letra somado ao dia do mês;
O valor na tabela ASCII da segunda letra subtraído do dia do mês;
O valor na tabela ASCII da terceira letra multiplicado pelo dia do mês;
A posição do alfabeto da quarta letra.

Dicas:

Consulte a tabela ASCII e lembre-se de que os caracteres também são
representados como inteiros na linguagem C.
Lembre-se de que cada tipo de dado possui um tamanho diferente. */

#include <stdio.h>

int main() {
    // Declaração das variáveis
    char primeira_letra, segunda_letra, terceira_letra, quarta_letra; 
    int dia_do_mes;

    // Entrada do dia do mês e do código de acesso
    scanf("%d", &dia_do_mes);
    scanf(" %c%c%c%c", &primeira_letra, &segunda_letra, &terceira_letra, &quarta_letra); // espaço antes de %c para ignorar possíveis espaços em branco

    // Criptografia das letras
    int letra_criptografada1 = primeira_letra + dia_do_mes;
    int letra_criptografada2 = segunda_letra - dia_do_mes;
    int letra_criptografada3 = terceira_letra * dia_do_mes;
    int posicao_letra4 = quarta_letra - 'A' + 1; // posição do alfabeto da letra (A=1, B=2, ..., Z=26)

    // Saída das letras criptografadas
    printf("%d\n", letra_criptografada1);
    printf("%d\n", letra_criptografada2);
    printf("%d\n", letra_criptografada3);
    printf("%d\n", posicao_letra4);

    return 0;
}