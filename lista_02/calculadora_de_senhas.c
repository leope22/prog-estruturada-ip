/* ================================================================== *
 *  Universidade Federal de Sao Carlos - UFSCar, Sorocaba
 *
 *  Disciplina: Introdução à Programação
 *  Prof. Tiago A. Almeida
 *
 *  Calculadora de senhas
 * ================================================================== */

/* Sr. Dônaldis, dono de um fast-food local, decidiu adotar um sistema de senhas em sua
lanchonete para atender o enorme número de pedidos no horário de almoço. As senhas são
compostas por 3 letras maiúsculas de A a Z, sendo que quando chegam na letra Z retornam
à letra A e fazem a letra à sua esquerda avançar uma para frente, conforme o exemplo a seguir:

AAA → AAB → AAC → ··· → AAZ → ABA → ···

Sabendo disso, escreva um programa que, sabendo a senha atual, calcule quantas senhas faltam
para chegar na sua vez.

ENTRADA:
Seu programa deve receber 3 caracteres da senha atual e, em seguida, 3 caracteres da sua
própria senha. Ambas serão compostas apenas por letras maiúsculas de A a Z.

SAÍDAS:
O programa deve imprimir a quantidade de senhas que estão entre a sua e a senha atual,
acompanhado por uma quebra de linha. */

#include <stdio.h>

int main() {
    char senhaAtual1, senhaAtual2, senhaAtual3;
    char suaSenha1, suaSenha2, suaSenha3;
    
    // Recebendo a senha atual e a sua senha
    scanf(" %c%c%c", &senhaAtual1, &senhaAtual2, &senhaAtual3);
    scanf(" %c%c%c", &suaSenha1, &suaSenha2, &suaSenha3);
    
    // Calculando a quantidade de senhas entre a sua senha e a senha atual
    int diferenca1 = senhaAtual1 - suaSenha1;
    int diferenca2 = senhaAtual2 - suaSenha2;
    int diferenca3 = senhaAtual3 - suaSenha3;
    int totalSenhas = (diferenca1 * 26 * 26) + (diferenca2 * 26) + diferenca3;
    
    // Imprimindo o total de senhas faltantes
    printf("%d\n", totalSenhas);
    
    return 0;
}