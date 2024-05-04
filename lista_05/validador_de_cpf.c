/* ================================================================== *
 *  Universidade Federal de Sao Carlos - UFSCar, Sorocaba
 *
 *  Disciplina: Introdução à Programação
 *  Prof. Tiago A. Almeida
 *
 *  Validador de CPF
 * ================================================================== */
 
/* Em muitos sites que requerem cadastro, o CPF (Cadastro de Pessoa Física) é requisitado e
   precisa ser validado pelo sistema. Para explicar esse processo de validação, considere o 
   seguinte CPF imaginário 32720984027.
   Primeiro, somamos a multiplicação dos 9 primeiros dígitos multiplicados pela sequência de
   números decrescente a partir do 10:
   
   3 × 10 + 2 × 9 + 7 × 8 + 2 × 7 + 0 × 6 + 9 × 5 + 8 × 4 + 4 × 3 + 0 × 2 = 207
   
   Agora, multiplicamos esse resultado por 10 e obtemos o resto da divisão por 11:
   
   207 × 10 = 2070
   2060 % 11 = 2
   
   Como o resultado foi 2, igual ao penúltimo dígito, o CPF passou pela primeira etapa de validação.
   A segunda etapa é semelhante:
   Somamos a multiplicação dos 10 primeiros dígitos (agora o penúltimo dígito é incluído) pela
   sequência de números decrescentes a partir do 11:
   
   3 × 11 + 2 × 10 + 7 × 9 + 2 × 8 + 0 × 7 + 9 × 6 + 8 × 5 + 4 × 4 + 0 × 3 + 2 × 2 = 246
   
   Em seguida, fazemos o mesmo processo da primeira validação, multiplicando o resultado por
   10 e obtendo o resto da divisão por 11:
   
   246 × 10 = 2460
   2460 % 11 = 7
   
   Como o resultado é igual ao último dígito, o CPF passou pela segunda etapa de validação e,
   portanto, é válido.

   ENTRADAS:
   Seu programa irá receber os 11 dígitos de um CPF. Ele será escrito sem pontos e traços.

   SAÍDAS:
   Seu programa deve imprimir o resultado da validação e, no caso de uma validação falha, deve
   informar a etapa em que ocorreu a falha. */

#include <stdio.h>
#define VALIDO "CPF valido!\n"
#define INVALIDO "CPF invalido!\n"
#define ETAPA1 "Falha na Etapa 1\n"
#define ETAPA2 "Falha na Etapa 2\n"

int main() {
    int cpf0, cpf1, cpf2, cpf3, cpf4, cpf5, cpf6, cpf7, cpf8, cpf9, cpf10, cont, i = 0, j = 0, b, c, d, e, f, g;
    
    scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &cpf0, &cpf1, &cpf2, &cpf3, &cpf4, &cpf5, &cpf6, &cpf7, &cpf8, &cpf9, &cpf10);
    
    float cpf[11] = {cpf0, cpf1, cpf2, cpf3, cpf4, cpf5, cpf6, cpf7, cpf8, cpf9, cpf10};
    
    for (cont = 0; cont < 9; cont++) {
        b = cpf[cont];
        i = i + (b * (10 - cont));
    }
    
    for (cont = 0; cont < 10; cont++) {
        c = cpf[cont];
        j = j + (c * (11 - cont));
    }
    
    d = i * 10;
    e = d % 11;
    f = j * 10;
    g = f % 11;
    
    if (e == cpf9) {
        if (g != cpf10) {
            printf(INVALIDO);
            printf(ETAPA2);
        } else {
            printf(VALIDO);
        }
    } else {
        printf(INVALIDO);
        printf(ETAPA1);
    }
    
    return 0;
}