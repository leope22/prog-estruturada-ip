/* ================================================================== *
 *  Universidade Federal de Sao Carlos - UFSCar, Sorocaba
 *
 *  Disciplina: Introdução à Programação
 *  Prof. Tiago A. Almeida
 *
 *  Cifra de Cesar
 * ================================================================== */

/* A Cifra de César é uma das mais populares do mundo, sendo utilizada em vários ARGs (Alternate Reality Games) para criptografar mensagens. Seu funcionamento é bem simples:
- Para codificar uma mensagem, cada letra é substituída pela letra que está n posições à sua direita no alfabeto.
- Para decodificar uma mensagem, cada letra é substituída pela letra que está n posições à sua esquerda no alfabeto.

Sabendo os conceitos básicos da cifra de César, implemente a sua versão em C.

ENTRADAS
Seu programa deve receber quatro argumentos:
- um caractere especificando a operação a ser realizada: C – Codificar e D – Decodificar;
- Um número n que corresponde ao deslocamento da cifra;
- Um número x, que corresponde à quantidade de caracteres;
- Por fim, uma palavra com x caracteres.

SAÍDA
O programa deve ter como saída a palavra codificada ou decodificada, acompanhada de uma quebra de linha (“\n”)

Detalhes
- Caso precise, você pode testar a cifra aqui;
- Não use strings, nem vetores. */

#include <stdio.h>

int main() {
    char func;
    int desl, caract, cont0, cont1;
    
    scanf(" %c", &func);
    scanf("%d", &desl);
    scanf("%d\n", &caract);
    
    if(func == 'C') {
        for(cont0 = 0; cont0 < caract; cont0++) {
            char cod, cod2;
            scanf("%c", &cod);
            cod2 = cod - 'a';
            cod2 = (cod2 + desl) % 26;
            cod2 = cod2 + 'a';
            printf("%c", cod2);
        }
    } else {
        for(cont1 = 0; cont1 < caract; cont1++) {
            char cod, cod2;
            scanf("%c", &cod);
            cod2 = cod - 'a';
            cod2 = (cod2 - desl) % 26;
            if(cod2 < 0)
                cod2 = cod2 + 26;
            cod2 = cod2 + 'a';
            printf("%c", cod2);
        }
    }
    
    return 0;
}