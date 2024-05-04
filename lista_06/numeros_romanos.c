/* ================================================================== *
 *  Universidade Federal de São Carlos - UFSCar, Sorocaba
 *
 *  Disciplina: Introdução à Programação
 *  Prof. Tiago A. Almeida
 *
 *  Números romanos
 * ================================================================== */

/* SPLASH, PUFF, VUPT (barulhos de máquina).
Doutor Mario, acho que conseguimos!
Pelos meus registros, sim! Acredito que agora você esteja em Roma 420 a.C.
Mas diga então, Luigi, o que você vê ao seu redor?
Doutor, parece que há algumas casas de pedra, algumas plantações, e uma placa
escrito chivi ao lado de uma das plantações.
Chivi? Como assim chivi?
Sim, chivi!
Espera aí, você quer dizer XVI? Isso é um número! 16 para ser exato.
Número, Doutor?! Como assim? ... Isso definitivamente não é um número.

Doutor Mario e seu aluno Luigi conseguiram viajar no tempo, entretanto, não contavam com 
um imprevisto. Luigi não sabe como ler os números romanos. Dessa forma, você, programador
experiente e entusiasta da ficção, decide ajudar o experimento de Doutor Mario criando um
programa que ajude Luigi a ler os números romanos em sua aventura no passado.

ENTRADAS
Seu programa deve receber um número inteiro, o mesmo será convertido para sua
contraparte em numeral romano. O número estará no intervalo 0 < n < 400.

SAÍDAS
A saída deverá corresponder ao número da entrada em algarismos romanos, acompanhado de
uma quebra de linha (“\n”) */

#include <stdio.h>

int main() {
    // Declaração de variáveis
    int numero, unidade, dezena, centena;

    // Entrada do número
    scanf("%d", &numero);

    // Separação das unidades, dezenas e centenas
    unidade = numero % 10;
    dezena = (numero / 10) % 10;
    centena = (numero / 100) % 10;

    // Conversão para algarismos romanos e impressão
    // Centenas
    switch (centena) {
        case 1: printf("C"); break;
        case 2: printf("CC"); break;
        case 3: printf("CCC"); break;
    }

    // Dezenas
    switch (dezena) {
        case 1: printf("X"); break;
        case 2: printf("XX"); break;
        case 3: printf("XXX"); break;
        case 4: printf("XL"); break;
        case 5: printf("L"); break;
        case 6: printf("LX"); break;
        case 7: printf("LXX"); break;
        case 8: printf("LXXX"); break;
        case 9: printf("XC"); break;
    }

    // Unidades
    switch (unidade) {
        case 1: printf("I\n"); break;
        case 2: printf("II\n"); break;
        case 3: printf("III\n"); break;
        case 4: printf("IV\n"); break;
        case 5: printf("V\n"); break;
        case 6: printf("VI\n"); break;
        case 7: printf("VII\n"); break;
        case 8: printf("VIII\n"); break;
        case 9: printf("IX\n"); break;
    }

    return 0;
}