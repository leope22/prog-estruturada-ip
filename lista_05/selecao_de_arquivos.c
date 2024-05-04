/* ================================================================== *
 *  Universidade Federal de Sao Carlos - UFSCar, Sorocaba
 *
 *  Disciplina: Introdução à Programação
 *  Prof. Tiago A. Almeida
 *
 *  Seleção de arquivos
 * ================================================================== */

/* Você, caro estudante de computação, altamente reconhecido por sua eficiência com
implementações de calculadoras, foi contratado pela startup de tecnologia Minisoft
para desenvolver um novo sistema operacional.
Sua tarefa é montar a interface responsável por selecionar arquivos a partir dos
comandos Ctrl e Shift. É comum que os sistemas operacionais ofereçam atalhos para
que os usuários realizem com eficiência tarefas maçantes e repetitivas. Por isso,
ao clicar em um arquivo segurando o botão Shift e clicar em outro, todos os arquivos
entre os dois serão selecionados. Por exemplo, caso clique no arquivo 2, e segurando
o Shift, clicar no arquivo 4, os arquivos 2, 3 e 4 serão selecionados.
Já, apertar o botão Ctrl enquanto seleciona arquivos permite que o usuário selecione
apenas os arquivos clicados. Por exemplo, caso clique nos arquivos 1, 5 e 7 enquanto
pressiona o Ctrl, somente os arquivos 1, 5 e 7 serão selecionados.
Muito interessada nesse comportamento, a Minisoft contratou você para fazer um protótipo
dessa interface antes de integrá-la ao sistema.

ENTRADAS
A primeira linha da entrada é composta por um caractere que representa se a tecla Shift (S)
ou Ctrl (C) está pressionada. Caso pressione Shift, o programa deve receber dois números
indicando os índices dos arquivos selecionados. Caso pressione Ctrl, o programa deve receber
a quantidade de arquivos selecionados e depois, os índices um a um.

SAÍDAS
Em ambos os casos, a saída do programa deve indicar todos os arquivos que foram selecionados
pelo usuário.

Detalhes
•Os arquivos a serem selecionados não se repetem na mesma entrada;
•Na saída do comando Ctrl, cada linha é impressa imediatamente após a entrada;
•Não use vetores. */

#include <stdio.h>

#define SELECIONADO "O arquivo %d foi selecionado.\n"

int main() {
    char c0;
    int a, b, d, e, c = 0, cont0, cont1, cont2, e1[100];
    
    scanf(" %c", &c0);
    
    switch (c0) {
        case 'S': 
            scanf("%d", &a);
            scanf("%d", &b);
            
            for(cont0 = 0; cont0 <= b - a; cont0++) {
                c = a + cont0;
                printf(SELECIONADO, c);
            }
            if (c == b) {
                break;
            }
            
        case 'C': 
            scanf("%d", &d);
            
            for(cont1 = 0; cont1 < d; cont1++) {
                scanf("%d", &e);
                e1[cont1] = e;
            }
            
            for(cont2 = 0; cont2 < d; cont2++) {
                printf(SELECIONADO, e1[cont2]);
            }
            break;
    }
    
    return 0;
}