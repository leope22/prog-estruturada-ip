/* ================================================================== *
 *  Universidade Federal de São Carlos - UFSCar, Sorocaba
 *
 *  Disciplina: Introdução à Programação
 *  Prof. Tiago A. Almeida
 *
 *  Juízes olímpicos
 * ================================================================== */

/* Ada, uma aluna de computação que adora esportes, acompanhou os jogos olímpicos
que aconteceram recentemente no Japão. Durante uma prova de surfe, ela observou que
as notas para as manobras realizadas eram atribuídas da seguinte forma: n juízes
davam uma nota de 0 a 10, sendo que n é a quantidade de juízes. A maior e a menor
nota eram desconsideradas e a nota final era dada pela média das notas restantes.
Por exemplo: considere as seguintes notas de 5 juízes para uma manobra:
8.7, 9.0, 8.5, 8.3 e 8.5. A nota final seria 8.57. Sabendo disso, Ada resolveu
criar um programa que recebe as notas dadas pelos juízes e retorna a nota final
da manobra.

ENTRADAS
A entrada é composta por duas linhas. A primeira contendo a quantidade de juízes, n,
e a segunda contendo as n notas separadas por um espaço.

SAÍDA
A saída é composta por uma única linha contendo a nota final da manobra com duas casas
decimais, seguido por uma quebra de linha. */

#include <stdio.h>

int main() {
    long int n_juizes;
    scanf("%ld", &n_juizes);

    float nota[100], maior = 0, menor = 10, soma = 0, media = 0;

    for (long int i = 0; i < n_juizes; i++) {
        scanf("%f", &nota[i]);
        soma += nota[i];
        if (nota[i] > maior) {
            maior = nota[i];
        }
        if (nota[i] < menor) {
            menor = nota[i];
        }
    }

    media = (soma - maior - menor) / (n_juizes - 2);
    printf("%.2f\n", media);

    return 0;
}