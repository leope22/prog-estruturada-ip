/* ================================================================== *
 *  Universidade Federal de Sao Carlos - UFSCar, Sorocaba
 *
 *  Disciplina: Introdução à Programação
 *  Prof. Tiago A. Almeida
 *
 *  Senha
 * ================================================================== */

/* Você, um exímio programador, faz estágio em uma empresa que precisa de um sistema para
   senhas. Como segurança da informação não é prioridade para a empresa, é de extrema importância
   que as senhas sejam fortes e seguras o bastante para impedir que alguém consiga hackear
   o sistema. Seu trabalho é verificar se uma senha está forte o suficiente com base na presença
   das seguintes características:

   1 - Contém pelo menos uma letra maiúscula;
   2 - Contém pelo menos uma letra minúscula;
   3 - Contém pelo menos um número;
   4 - Contém pelo menos um caractere especial;
   5 - Contém pelo menos 6 caracteres;
   6 - Não deve conter espaço ( ), aspas (“ ” ‘ ’) ou crase (`).

   ENTRADAS:
   Seu programa deve receber uma sequência de caracteres que compõem uma senha. Se a senha
   recebida não for forte o suficiente, deve-se solicitar uma senha nova, até que esta seja segura o
   bastante.

   SAÍDA:
   O programa deve imprimir a frase "senha forte!" quando a senha seguir todos os parâmetros.
   Caso a senha não siga pelo menos um destes parâmetros, deve ser indicado que é uma "senha
   inválida" e imprimir os requisitos não atendidos usando a mensagem pré-definida e seus índices
   de acordo com a lista acima, com um espaço entre eles. */

#include <stdio.h>

int main() {
    char senha;
    int maiusc = 0, minusc = 0, cnumero = 0, ccaracesp = 0, pelomseis = 0, semaspespcra = 0;
    int pend1 = 0, pend2 = 0, pend3 = 0, pend4 = 0, pend5 = 0, pend6 = 0;

    for (;;) {
        // Reinicializa as variáveis para cada nova senha
        maiusc = 0; minusc = 0; cnumero = 0; ccaracesp = 0; pelomseis = 0; semaspespcra = 0;
        pend1 = 0; pend2 = 0; pend3 = 0; pend4 = 0; pend5 = 0; pend6 = 0;

        while ((senha = getchar()) != '\n') {
            pelomseis++;

            if (senha >= 'A' && senha <= 'Z') {
                maiusc = 1;
            } else if (senha >= 'a' && senha <= 'z') {
                minusc = 1;
            } else if (senha >= '0' && senha <= '9') {
                cnumero = 1;
            } else if ((senha >= '(' && senha <= '/') || (senha >= '{' && senha <= '~') ||
                       senha == '!' || senha == '$' || senha == '%' || senha == '^' || senha == '&' ||
                       senha == '*' || senha == '_' || senha == '-' || senha == '+' || senha == '=' ||
                       senha == '[' || senha == ']' || senha == '{' || senha == '}' || senha == ':' ||
                       senha == ';' || senha == '@' || senha == '#' || senha == '|' || senha == '<' ||
                       senha == '>' || senha == '.' || senha == ',' || senha == '\\' || senha == '/') {
                ccaracesp = 1;
            } else if (senha == ' ' || senha == '"' || senha == '\'' || senha == '`') {
                semaspespcra = 1;
            }
        }

        // Verifica se a senha é válida
        if (!maiusc) pend1 = 1;
        if (!minusc) pend2 = 1;
        if (!cnumero) pend3 = 1;
        if (!ccaracesp) pend4 = 1;
        if (pelomseis < 6) pend5 = 1;
        if (semaspespcra) pend6 = 1;

        if (pend1 || pend2 || pend3 || pend4 || pend5 || pend6) {
            printf("senha inválida!\n");
            printf("pendências:");
            if (pend1) printf(" 1");
            if (pend2) printf(" 2");
            if (pend3) printf(" 3");
            if (pend4) printf(" 4");
            if (pend5) printf(" 5");
            if (pend6) printf(" 6");
            printf("\n");
        } else {
            printf("senha forte!\n");
            break;
        }
    }

    return 0;
}