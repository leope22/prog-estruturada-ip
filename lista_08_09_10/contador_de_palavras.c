/* ================================================================== *
 *  Universidade Federal de Sao Carlos - UFSCar, Sorocaba
 *
 *  Disciplina: Introdução à Programação
 *  Prof. Tiago A. Almeida
 *
 *  Contador de Palavras
 * ================================================================== */

/* Implemente um programa que ajude a entender como funcionam as entradas de strings. O seu
programa funcionará como um contador que auxilia a contar a quantidade de (i) vogais, (ii)
consoantes, (iii) caracteres especiais e (iv) palavras.

ENTRADA
Seu programa receberá como entrada um texto.

SAÍDA
O seu programa deverá contar e imprimir na tela a quantidade de cada um dos caracteres, além
da quantidade de palavras do texto.

Entrada
Camarao que dorme, a onda leva!

Saída
Vogais = 13
Consoantes = 11
Especiais = 2
Palavras = 6

Detalhes
• Nenhuma palavra será acentuada;
• O final das entradas será dado pelo EOF. */

#include <stdio.h>
#include <string.h>
#include <ctype.h>
 
#define MAX 5000
#define VOGAIS "Vogais = %d\n"
#define CONSOANTES "Consoantes = %d\n"
#define ESPECIAIS "Especiais = %d\n"
#define PALAVRAS "Palavras = %d\n"

int main() {
    char texto[MAX];
    
    int vogais = 0, consoantes = 0, especiais = 0, palavras = 0;
    
    while(scanf("%s", texto) != EOF)
    {
        for(int i = 0; i < strlen(texto); i++)
        {
            if((texto[i] >= 65 && texto[i] <= 90) || (texto[i] >= 97 && texto[i] <= 122))
            {
                if(texto[i] == 'a' || texto[i] == 'e' || texto[i] == 'i' || texto[i] == 'o' || texto[i] == 'u' ||
                   texto[i] == 'A' || texto[i] == 'E' || texto[i] == 'I' || texto[i] == 'O' || texto[i] == 'U')
            	{
                	vogais++;
            	}
                else
            	{
                    consoantes++;
            	}
        	}
        }
    
        for(int i = 0; i < strlen(texto); i++)
        {
            if((texto[i] >= 33 && texto[i] <= 47) || (texto[i] >= 58 && texto[i] <= 64) ||
               (texto[i] >= 91 && texto[i] <= 96) || (texto[i] >= 123 && texto[i] <= 126))
            {
                especiais++;
            }
        }
    
        for(int i = 0; i < strlen(texto); i++)
        {
            if(texto[i] != ' ' && texto[i] != '\t')
            {
                palavras++;
                while(texto[i] != ' ' && texto[i] != '\t')
                {
                    i++;
                }
            }
        }
    }
    
	printf(VOGAIS,vogais);
	printf(CONSOANTES,consoantes);
	printf(ESPECIAIS,especiais);
    printf(PALAVRAS, palavras);
    
    return (0);
}