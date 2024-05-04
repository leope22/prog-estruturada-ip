/* ================================================================== *
 *  Universidade Federal de Sao Carlos - UFSCar, Sorocaba
 *
 *  Disciplina: Introdução à Programação
 *  Prof. Tiago A. Almeida
 *
 *  Números por extenso
 * ================================================================== */

/* Para evitar desentendimentos e erros de leitura, muitos contratos registram valores em
versão numérica e também por extenso. Burocats, uma seguradora que está começando no ramo,
percebeu que muitos de seus contratos não seguiam o padrão mencionado, já que só continham
a versão numérica de valores. Os contratos geravam muita confusão e, por isso, vários clientes
estavam reclamando.
A seguradora, ciente do problema, resolveu gerar todos os contratos recentes uma segunda vez,
seguindo o padrão esperado para os valores e, a partir desses, passaria a redigir todos os
contratos da forma correta. Para atualizar os contratos com os números por extenso,
Burocats contratou você, um ágil e renomado programador.

ENTRADA
A entrada do seu programa deve ser um inteiro de dois dígitos correspondente ao número a ser 
transcrito por extenso.

SAÍDA
A saída do programa deve ser o número dado na entrada escrito por extenso e seguido de uma quebra
de linha.

Detalhes
- Todas as entradas contêm dois dígitos;
- Preste atenção na grafia dos números por extenso para evitar erros em sua saída */

#include <stdio.h>

int main() {
    char dezena, unidade;
    scanf(" %c%c", &dezena, &unidade);

    switch (dezena) {
        case '9':
            if (unidade == '0') { printf("noventa"); }
            else if (unidade == '1') { printf("noventa e um"); }
            else if (unidade == '2') { printf("noventa e dois"); }
            else if (unidade == '3') { printf("noventa e três"); }
            else if (unidade == '4') { printf("noventa e quatro"); }
            else if (unidade == '5') { printf("noventa e cinco"); }
            else if (unidade == '6') { printf("noventa e seis"); }
            else if (unidade == '7') { printf("noventa e sete"); }
            else if (unidade == '8') { printf("noventa e oito"); }
            else { printf("noventa e nove"); }
            break;
        case '8':
            if (unidade == '0') { printf("oitenta"); }
            else if (unidade == '1') { printf("oitenta e um"); }
            else if (unidade == '2') { printf("oitenta e dois"); }
            else if (unidade == '3') { printf("oitenta e três"); }
            else if (unidade == '4') { printf("oitenta e quatro"); }
            else if (unidade == '5') { printf("oitenta e cinco"); }
            else if (unidade == '6') { printf("oitenta e seis"); }
            else if (unidade == '7') { printf("oitenta e sete"); }
            else if (unidade == '8') { printf("oitenta e oito"); }
            else { printf("oitenta e nove"); }
            break;
        case '7':
            if (unidade == '0') { printf("setenta"); }
            else if (unidade == '1') { printf("setenta e um"); }
            else if (unidade == '2') { printf("setenta e dois"); }
            else if (unidade == '3') { printf("setenta e três"); }
            else if (unidade == '4') { printf("setenta e quatro"); }
            else if (unidade == '5') { printf("setenta e cinco"); }
            else if (unidade == '6') { printf("setenta e seis"); }
            else if (unidade == '7') { printf("setenta e sete"); }
            else if (unidade == '8') { printf("setenta e oito"); }
            else { printf("setenta e nove"); }
            break;
        case '6':
            if (unidade == '0') { printf("sessenta"); }
            else if (unidade == '1') { printf("sessenta e um"); }
            else if (unidade == '2') { printf("sessenta e dois"); }
            else if (unidade == '3') { printf("sessenta e três"); }
            else if (unidade == '4') { printf("sessenta e quatro"); }
            else if (unidade == '5') { printf("sessenta e cinco"); }
            else if (unidade == '6') { printf("sessenta e seis"); }
            else if (unidade == '7') { printf("sessenta e sete"); }
            else if (unidade == '8') { printf("sessenta e oito"); }
            else { printf("sessenta e nove"); }
            break;
        case '5':
            if (unidade == '0') { printf("cinquenta"); }
            else if (unidade == '1') { printf("cinquenta e um"); }
            else if (unidade == '2') { printf("cinquenta e dois"); }
            else if (unidade == '3') { printf("cinquenta e três"); }
            else if (unidade == '4') { printf("cinquenta e quatro"); }
            else if (unidade == '5') { printf("cinquenta e cinco"); }
            else if (unidade == '6') { printf("cinquenta e seis"); }
            else if (unidade == '7') { printf("cinquenta e sete"); }
            else if (unidade == '8') { printf("cinquenta e oito"); }
            else if (unidade == '9') { printf("cinquenta e nove"); }
            else { printf("número inválido"); }
            break;
        case '4':
            if (unidade == '0') { printf("quarenta"); }
            else if (unidade == '1') { printf("quarenta e um"); }
            else if (unidade == '2') { printf("quarenta e dois"); }
            else if (unidade == '3') { printf("quarenta e três"); }
            else if (unidade == '4') { printf("quarenta e quatro"); }
            else if (unidade == '5') { printf("quarenta e cinco"); }
            else if (unidade == '6') { printf("quarenta e seis"); }
            else if (unidade == '7') { printf("quarenta e sete"); }
            else if (unidade == '8') { printf("quarenta e oito"); }
            else if (unidade == '9') { printf("quarenta e nove"); }
            else { printf("número inválido"); }
            break;
        case '3':
            if (unidade == '0') { printf("trinta"); }
            else if (unidade == '1') { printf("trinta e um"); }
            else if (unidade == '2') { printf("trinta e dois"); }
            else if (unidade == '3') { printf("trinta e três"); }
            else if (unidade == '4') { printf("trinta e quatro"); }
            else if (unidade == '5') { printf("trinta e cinco"); }
            else if (unidade == '6') { printf("trinta e seis"); }
            else if (unidade == '7') { printf("trinta e sete"); }
            else if (unidade == '8') { printf("trinta e oito"); }
            else if (unidade == '9') { printf("trinta e nove"); }
            else { printf("número inválido"); }
            break;
        case '2':
            if (unidade == '0') { printf("vinte"); }
            else if (unidade == '1') { printf("vinte e um"); }
            else if (unidade == '2') { printf("vinte e dois"); }
            else if (unidade == '3') { printf("vinte e três"); }
            else if (unidade == '4') { printf("vinte e quatro"); }
            else if (unidade == '5') { printf("vinte e cinco"); }
            else if (unidade == '6') { printf("vinte e seis"); }
            else if (unidade == '7') { printf("vinte e sete"); }
            else if (unidade == '8') { printf("vinte e oito"); }
            else { printf("vinte e nove"); }
            break;
        case '1':
            if (unidade == '0') { printf("dez"); }
            else if (unidade == '1') { printf("onze"); }
            else if (unidade == '2') { printf("doze"); }
            else if (unidade == '3') { printf("treze"); }
            else if (unidade == '4') { printf("quatorze"); }
            else if (unidade == '5') { printf("quinze"); }
            else if (unidade == '6') { printf("dezesseis"); }
            else if (unidade == '7') { printf("dezessete"); }
            else if (unidade == '8') { printf("dezoito"); }
            else { printf("dezenove"); }
            break;
        case '0':
            if (unidade == '0') { printf("zero"); }
            else if (unidade == '1') { printf("um"); }
            else if (unidade == '2') { printf("dois"); }
            else if (unidade == '3') { printf("três"); }
            else if (unidade == '4') { printf("quatro"); }
            else if (unidade == '5') { printf("cinco"); }
            else if (unidade == '6') { printf("seis"); }
            else if (unidade == '7') { printf("sete"); }
            else if (unidade == '8') { printf("oito"); }
            else { printf("nove"); }
            break;
        default:
            printf("inválido");
    }
    
    printf("\n");
    
    return 0;
}