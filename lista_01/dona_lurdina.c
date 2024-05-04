/* ================================================================== *
 *  Universidade Federal de Sao Carlos - UFSCar, Sorocaba
 *
 *  Disciplina: Introdução à Programação
 *  Prof. Tiago A. Almeida
 *
 *  Dona Lurdina
 * ================================================================== */

#include <stdio.h>

/* Dona Lurdina, uma senhora de 85 anos, é uma ávida colecionadora de moedas e tem
aversão a notas, o que torna seus pagamentos mais difíceis. Seu neto, Guitarvo, sempre
encarregado de contar as moedas para ajudar a avó, sabendo que você é um habilidoso programador,
pediu sua ajuda. Este programa calcula a quantidade mínima de moedas que Lurdina precisa usar para
pagar um determinado valor em centavos.

ENTRADA:
A entrada consiste em apenas uma linha, com um valor em centavos.

SAÍDA:
A saída deve ser a quantidade mínima de moedas que Lurdina terá que utilizar para pagar o valor em centavos.

- Considere as moedas de 1, 5, 10, 25, 50 e 100 centavos. */

int main() {
    // Variáveis para o valor em centavos e quantidade mínima de moedas
    int valor, quantidade_moedas;
    
    // Entrada do valor em centavos
    scanf("%i", &valor);
    
    // Cálculo da quantidade mínima de moedas
    quantidade_moedas = valor / 100; // número de moedas de 1 real
    valor %= 100; // atualiza o valor restante após retirar as moedas de 1 real
    
    quantidade_moedas += valor / 50; // número de moedas de 50 centavos
    valor %= 50; // atualiza o valor restante após retirar as moedas de 50 centavos
    
    quantidade_moedas += valor / 25; // número de moedas de 25 centavos
    valor %= 25; // atualiza o valor restante após retirar as moedas de 25 centavos
    
    quantidade_moedas += valor / 10; // número de moedas de 10 centavos
    valor %= 10; // atualiza o valor restante após retirar as moedas de 10 centavos
    
    quantidade_moedas += valor / 5; // número de moedas de 5 centavos
    valor %= 5; // atualiza o valor restante após retirar as moedas de 5 centavos
    
    quantidade_moedas += valor; // o restante será o número de moedas de 1 centavo

    // Saída da quantidade mínima de moedas
    printf("%i\n", quantidade_moedas);

    return 0;
}