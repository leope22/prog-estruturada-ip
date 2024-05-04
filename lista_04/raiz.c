/* ================================================================== *
 *  Universidade Federal de Sao Carlos - UFSCar, Sorocaba
 *
 *  Disciplina: Introdução à Programação
 *  Prof. Tiago A. Almeida
 *
 *  Raiz
 * ================================================================== */

/* Como sabemos, o computador é um dispositivo poderoso, pois por mais que ele apenas siga
   instruções, diversos feitos podem ser realizados através dele, principalmente cálculos. Nós
   já observamos em outras disciplinas como o computador faz operações básicas como soma e
   subtração, mas você já pensou como um computador realiza operações mais complexas, como
   uma raiz quadrada? Neste exercício você irá implementar uma versão simples desta operação,
   chamado "Newton's method of successive approximations".

   Apesar de parecer complexo, a execução do algoritmo é bem simples:
   1 - Primeiro, pegue o número x que você deseja calcular a raiz quadrada, vamos escolher no
   nosso caso o número 2.
   2 - Começamos chutando um valor que achamos que é a raiz quadrada de 2. Como não
   temos nenhuma informação, inicialmente o chute é a metade do número, ou seja, 1.
   3 - Utilizamos nosso chute (1) e testamos se ele ao quadrado é equivalente a x (2):
      1 * 1 = 1
   4 - O resultado obtido é checado, nesse caso, o valor de x não é "bom o suficiente" e, portanto,
   vamos obter nosso próximo chute:
   5 - a) Dividimos x pelo nosso chute:
         2 / 1 = 2
       b) Somamos o nosso chute com o resultado da divisão:
         2 + 1 = 3
       c) Dividimos o resultado da soma por 2. Esse será o nosso novo chute.
         3 / 2 = 1.5

   Após isso, os passos 3 a 5 são repetidos até que o resultado do nosso chute seja "bom o suficiente".

   Detalhes:
   - Um chute x é bom o suficiente apenas se x^2 difere no máximo em 3% do número que
   desejamos calcular a raiz quadrada.
   - A utilização de qualquer biblioteca além da stdio.h está proibida.
   - Utilize float para todos os números.
   - Caso tenha alguma dúvida, veja um exemplo neste livro (em inglês).

   ENTRADAS:
   Seu programa deve receber apenas 1 argumento, que corresponde ao número que a raiz deve
   ser calculada. O número inserido será no intervalo 0 ≤ x ≤ 500.

   SAÍDAS:
   A saída deverá ser o valor aproximado da raiz de x, com uma casa decimal, acompanhado de
   uma quebra de linha ("\n"). */

#include <stdio.h>

int main() {
    float num, raiz, c, e;

    scanf("%f", &num);
    raiz = num / 2;

    while ((raiz * raiz <= 0.97 * num) || (raiz * raiz >= 1.03 * num)) {
        c = num / raiz;
        e = raiz + c;
        raiz = e / 2;
    }

    printf("%.1f\n", raiz);

    return 0;
}