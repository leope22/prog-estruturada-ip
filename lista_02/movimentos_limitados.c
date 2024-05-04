/* ================================================================== *
 *  Universidade Federal de Sao Carlos - UFSCar, Sorocaba
 *
 *  Disciplina: Introdução à Programação
 *  Prof. Tiago A. Almeida
 *
 *  Movimentos Limitados
 * ================================================================== */

/* Danilo, um desenvolvedor de jogos, está determinado a criar um novo jogo em linguagem C.
Entretanto, ele não tem tempo para fazê-lo sozinho. Assim, para facilitar a programação do jogo,
Danilo decidiu pedir para você fazer uma parte do trabalho. Para agilizar o projeto,
Danilo pede para você criar a movimentação do jogo, que será desenvolvida baseada em pares ordenados.
A posição do objetivo será representada por um par (x, y), e a movimentação só poderá ser feita nos
eixos X e Y, não podendo andar na diagonal. Entretanto, quando o jogador se movimentar com um
número de casas ímpar, o total descontado será o dobro do que ele andou. Além disso, há uma
quantidade máxima de 100 movimentos para cada eixo, ou seja, o jogador pode andar 100 casas no
eixo X e 100 casas no eixo Y. Exemplo: considerando que o objetivo se encontra nas coordenadas
O = (29, 10), para o jogador, a partir da posição (0, 0) se locomover até ele, teria que andar
29 casas no eixo X e 10 no eixo Y. Contudo, pela regra do jogo, ele gastaria o dobro de casas
no eixo X, que descontaria não apenas 29 do seu limite de movimentos, e sim 58 (29 * 2).

ENTRADAS
A entrada será composta por uma linha, contendo a posição I = (x, y) do inimigo, com os números
separados por um espaço em branco.

SAÍDAS
A saída deve ser a quantidade de movimentos restantes que o jogador terá no eixo X e no eixo Y,
respectivamente, se ele percorrer até o inimigo, separados por uma quebra de linha. */

#include <stdio.h>

int main() {
    int posX, posY;
    
    // Recebendo a posição do inimigo
    scanf("%d %d", &posX, &posY);
    
    // Calculando os movimentos restantes nos eixos X e Y
    int movimentosRestantesX = 100 - (posX + (posX * (posX % 2)));
    int movimentosRestantesY = 100 - (posY + (posY * (posY % 2)));
    
    // Imprimindo os movimentos restantes nos eixos X e Y
    printf("%d\n%d\n", movimentosRestantesX, movimentosRestantesY);
    
    return 0;
}