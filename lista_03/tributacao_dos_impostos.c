/* ================================================================== *
 *  Universidade Federal de Sao Carlos - UFSCar, Sorocaba
 *
 *  Disciplina: Introdução à Programação
 *  Prof. Tiago A. Almeida
 *
 *  Tributação dos impostos
 * ================================================================== */

/* Em Rokkenjima, um país desconhecido que vamos apelidar carinhosamente de RJ,
a tributação dos impostos é feita baseada na renda do cidadão. A moeda de RJ
é, muito coincidentemente, o Real - que possui o símbolo R$.

Renda                     | Imposto
até R$ 1500.00              Isento
R$ 1500.01 até R$ 4000.00   10%
R$ 4000.01 até R$ 5000.00   17%
acima de R$ 5000.00         30%

Note que, apesar do salário ter um valor correspondente a uma categoria de
imposto (por exemplo, o valor R$ 1600.00 corresponde a 10% de acordo com a
tabela), esse imposto só será cobrado sobre o valor excedente. Por exemplo:
um salário de R$ 1600.00 se enquadra na segunda categoria, excedendo a
categoria anterior (de R$ 1500.00) por R$ 100.00, então serão cobrados
10% de impostos sobre esses R$ 100.00. O cálculo final seria
0% ×R$ 1500.00 + 10% ×R$ 100.00, resultando em R$ 10.00 de imposto.

ENTRADAS
Seu programa receberá uma única entrada, correspondente ao salário do cidadão,
com duas casas decimais.

SAÍDAS
Na saída, seu programa deve imprimir o símbolo da moeda (R$) acompanhado do
valor que o cidadão deve pagar, com duas casas decimais. Caso nenhum imposto
tenha sido cobrado, imprima “Isento!”. Ambos os casos são acompanhados de
uma quebra de linha (“\n”). */

#include <stdio.h>

int main() {
    float salario;
    scanf("%f", &salario);

    if (salario <= 1500.00) {
        printf("Isento!\n");
    } else if (salario <= 4000.00) {
        printf("R$ %.2f\n", (salario - 1500.00) * 0.1);
    } else if (salario <= 5000.00) {
        printf("R$ %.2f\n", 250.00 + (salario - 4000.00) * 0.17);
    } else {
        printf("R$ %.2f\n", 850.00 + (salario - 5000.00) * 0.3);
    }

    return 0;
}