/* ================================================================== *
 *  Universidade Federal de Sao Carlos - UFSCar, Sorocaba
 *
 *  Disciplina: Introdução à Programação
 *  Prof. Tiago A. Almeida
 *
 *  Rolagem Crítica!
 * ================================================================== */

/* Douglorin, um jogador ávido de RPG, sempre tem dificuldade na hora de calcular riscos
durante suas batalhas. Para acertar um inimigo, o jogador precisa rolar seu dado e obter
um valor igual ou maior que a defesa do oponente. Porém, se o jogador for surpreendido ou
estiver distraído, ele fica com Desvantagem, precisando rolar o dado duas vezes e acertar
nas duas. Para facilitar sua intuição de jogador, Douglorin gostaria que você o ajudasse
montando um programa.

ENTRADAS:
A entrada do programa será composta de dois números, separados por um espaço.
O primeiro representa o número de lados do dado de Douglorin, e o segundo, a defesa de seu oponente.

SAÍDA:
A saída deve ser a chance de sua rolagem dar certo quando Douglorin estiver em Desvantagem,
contendo duas casas decimais de precisão.

Detalhes:
- As entradas são sempre números naturais;
- A saída deve ter sempre 2 dígitos decimais de precisão; */

#include <stdio.h>

int main() {
    // Declaração das variáveis para armazenar o número de lados do dado e a defesa do oponente
    int numLadosDado;
    int defesaOponente;
    
    // Recebendo a entrada do usuário
    scanf("%d %d", &numLadosDado, &defesaOponente);
    
    // Calculando a probabilidade de sucesso quando Douglorin estiver em desvantagem
    float probabilidade = 100.0 * ((numLadosDado - defesaOponente + 1) / (float) numLadosDado);
    
    // Imprimindo a probabilidade com duas casas decimais de precisão
    printf("%.2f\n", probabilidade);
    
    return 0;
}