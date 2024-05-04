/* ================================================================== *
 *  Universidade Federal de Sao Carlos - UFSCar, Sorocaba
 *
 *  Disciplina: Introdução à Programação
 *  Prof. Tiago A. Almeida
 *
 *  Montar marmitex
 * ================================================================== */

/* Com o decorrer da pandemia da COVID-19, muitas empresas adotaram os métodos de
drive-thru e delivery. Além de poder manter o comércio funcionando com medidas
de segurança, também foi possível tornar a interação cliente-loja mais eficiente.
Neste contexto, a Marmiteria do Seu Jorge decidiu criar um sistema para poder
coletar os pedidos dos clientes online, para organizar os pedidos. Foi solicitada
a sua ajuda, perito programador, para criar um programa que receba os pedidos e
calcule o valor total da marmitex.

ENTRADAS

Inicialmente, será informado o tamanho da marmitex seguido pelas opções extras.

(a) A primeira entrada do seu programa será o tamanho da marmitex (cada tamanho
de marmitex tem um valor base que pode aumentar ou diminuir dependendo das
opções extras).

Entrada Tamanho da marmitex Valor base
p Marmitex pequena R$ 12.00
m Marmitex média R$ 16.00
g Marmitex grande R$ 18.00

(b) Em seguida, o cliente poderá escolher se quer arroz ou não (o arroz faz parte
da marmitex base). Caso o cliente decida por não querer, então será descontado do
valor total.

Entrada Opção Mudança no valor
1 Com arroz + R$ 0.00
0 Sem arroz - R$ 2.00

(c) Assim como o arroz, o cliente poderá escolher se quer feijão ou não na marmitex.

Entrada Opção Mudança no valor
1 Com feijão + R$ 0.00
0 Sem feijão - R$ 2.50

(d) Em seguida, o cliente poderá escolher as guarnições. Entretanto, algumas são mais
caras que outras, exigindo um acréscimo no valor da marmitex. Além disso, diferente
dos outros tamanhos de marmitex, o tamanho pequeno pode escolher apenas uma guarnição,
enquanto que as opções média e grande permitem escolher até duas (podendo repetir).

Entrada Guarnição Mudança no valor
f Frango + R$ 0.00
p Peixe + R$ 1.00
c Carne + R$ 2.00

(e) Por fim, será possível incluir ou não talheres.

Entrada Talheres Mudança no valor
1 Com talheres + R$ 0.50
0 Sem talheres + R$ 0.00

SAÍDA
A saída do seu programa será o valor final da marmitex com duas casas decimais de
precisão, seguido por uma quebra de linha ("\n"). */

#include <stdio.h>

int main() {
    char a, d0, d1;
    int b, c, e;
    float aa, bb, cc, dd0, dd1, ee;

    scanf("%c", &a);

    if (a == 'p') {
        scanf("%d", &b);
        scanf("%d", &c);
        scanf(" %c", &d0);
        scanf("%d", &e);
    } else if (a == 'm') {
        scanf("%d", &b);
        scanf("%d", &c);
        scanf(" %c", &d0);
        scanf(" %c", &d1);
        scanf("%d", &e);
    } else if (a == 'g') {
        scanf("%d", &b);
        scanf("%d", &c);
        scanf(" %c", &d0);
        scanf(" %c", &d1);
        scanf("%d", &e);
    }

    switch (a) {
        case 'p':
            aa = 12.00;
            break;
        case 'm':
            aa = 16.00;
            break;
        case 'g':
            aa = 18.00;
            break;
    }

    switch (b) {
        case 0:
            bb = 2.00;
            break;
        case 1:
            bb = 0.00;
            break;
    }

    switch (c) {
        case 0:
            cc = 2.50;
            break;
        case 1:
            cc = 0.00;
            break;
    }

    switch (d0) {
        case 'f':
            dd0 = 0.00;
            break;
        case 'p':
            dd0 = 1.00;
            break;
        case 'c':
            dd0 = 2.00;
            break;
    }

    switch (d1) {
        case 'f':
            dd1 = 0.00;
            break;
        case 'p':
            dd1 = 1.00;
            break;
        case 'c':
            dd1 = 2.00;
            break;
    }

    switch (e) {
        case 0:
            ee = 0.00;
            break;
        case 1:
            ee = 0.50;
            break;
    }

    if (a == 'p') {
        printf("R$ %.2f\n", aa - bb - cc + dd0 + ee);
    } else if ((a == 'm') || (a == 'g')) {
        printf("R$ %.2f\n", aa - bb - cc + dd0 + dd1 + ee);
    }

    return 0;
}