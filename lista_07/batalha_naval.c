/* ================================================================== *
 *  Universidade Federal de São Carlos - UFSCar, Sorocaba
 *
 *  Disciplina: Introdução à Programação
 *  Prof. Tiago A. Almeida
 *
 *  Batalha Naval
 * ================================================================== */

/* Batalha naval é um clássico jogo de tabuleiro no qual dois jogadores se enfrentam 
com o objetivo de destruir toda a frota marítima do adversário. Cada jogador tem
seu campo de batalha, constituído por um tabuleiro 10×10 e vários navios.
No jogo que você irá implementar, considere que apenas um jogador terá barcos e o
outro irá atacar. Cada embarcação pode ser simbolizada por um dígito, e sua posição
no tabuleiro é representada pela repetição desse número. Uma embarcação só é
completamente destruída quando todas as posições que ela ocupa são atingidas.
O dano dado a uma embarcação é correspondente a seu tamanho, então se uma embarcação
ocupa 3 posições, e uma delas é atingida, sofre apenas um terço de dano.

ENTRADAS
Cada caso de teste consiste de várias linhas. As primeiras 10 linhas, cada qual com
10 números separados por um espaço e terminadas por uma quebra de linha, correspondem
ao tabuleiro do jogo. Neste tabuleiro, qualquer número diferente de 0 representa um
navio, enquanto que 0 representa água. As embarcações que ocupam mais de uma casa são
representadas pelo mesmo inteiro. Em seguida, é recebido um inteiro j (0 < j < 100)
com o número de jogadas e as respectivas coordenadas (X, Y), nas quais, X representa
o eixo horizontal (da esquerda para a direita), e Y o eixo vertical
(de cima para baixo).

SAÍDAS
A cada jogada, seu programa deve retornar “Embarcação atingida!” se atingiu um
navio, caso contrário “Água!”. No fim de todas as jogadas, seu programa deve
retornar “Todas as embarcações foram destruídas” se o jogador conseguiu abater
todas elas. Caso contrário, deve retornar uma lista com as porcentagens de
dano das embarcações que restaram em ordem crescente (de acordo com o dígito
N que representa as embarcações), no formato Dano [N]: <porcentagem com duas
casas decimais>%.

Exemplo de E/S (os comentários entre parênteses não deverão ser exibidos):

Entrada
0 0 0 0 0 0 0 0 0 0
0 0 6 0 0 0 0 0 0 0
0 0 6 0 0 0 0 5 0 0
0 0 6 0 0 2 0 0 0 0
0 0 0 0 0 2 0 0 0 0
0 0 0 0 0 0 0 3 0 0
0 0 0 0 0 0 0 3 1 0
0 0 0 4 4 4 4 3 1 0
0 0 0 0 0 0 0 0 1 0
0 0 0 0 0 0 0 0 0 0
6
7 7
8 6
1 8
1 8
1 4
8 3

Saída
Embarcação atingida!
Embarcação atingida!
Água!
Água!
Água!
Água!
Dano [1]: 33.33%
Dano [2]: 0.00%
Dano [3]: 33.33%
Dano [4]: 0.00%
Dano [5]: 0.00%
Dano [6]: 0.00%

Detalhes
• O tabuleiro começa do canto superior esquerdo com as coordenadas (0, 0)
e vai até o canto inferior direito com as coordenadas (9, 9). */

#include <stdio.h>
 
#define VENCEU      "Todas as embarcacoes foram destruidas\n"
#define ATINGIDO    "Embarcacao atingida!\n"
#define ERROU       "Agua!\n"
#define PRINT_NAVIO "Dano [%d]: %.2f%%\n"

int main(){

    int jogo[10][10] = {{0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
	                    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
		                {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
					    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
			            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
			            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
					    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
					    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
					    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
					    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},};
					    
	for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++){
        scanf("%d", &jogo[i][j]);
		}
	}
					    
	int tam, posic1, posic2, a=0, b=0, c=0, d=0, e=0, f=0, g=0, h=0, i=0, j=0, k=0, l=0, m=0, n=0, o=0, p=0;
	
	for(int i = 0; i < 10; i++){
    for(int j = 0; j < 10; j++){
    if (jogo[i][j] == 1){a++;
		}
		else if (jogo[i][j] == 2){b++;
		}
		else if (jogo[i][j] == 3){c++;
		}
		else if (jogo[i][j] == 4){d++;
		}
		else if (jogo[i][j] == 5){e++;
		}
		else if (jogo[i][j] == 6){f++;
		}
		else if (jogo[i][j] == 7){g++;
	    }
	    else if (jogo[i][j] == 8){h++;
	    }
	}
    }
	
	i = a; j = b; k = c; l = d; m = e; n = f; o = g; p = h;
	
	scanf("%d", &tam);
	
	  for(int i = 0; i < tam; i++){
		scanf("%d %d", &posic2, &posic1);
		if (jogo[posic1][posic2] == 0){printf(ERROU);
		}
		else if (jogo[posic1][posic2] == 1){jogo[posic1][posic2] = 0; printf(ATINGIDO); a--; 
		}
		else if (jogo[posic1][posic2] == 2){jogo[posic1][posic2] = 0; printf(ATINGIDO); b--;
		}
		else if (jogo[posic1][posic2] == 3){jogo[posic1][posic2] = 0; printf(ATINGIDO); c--;
		}
		else if (jogo[posic1][posic2] == 4){jogo[posic1][posic2] = 0; printf(ATINGIDO); d--;
		}
		else if (jogo[posic1][posic2] == 5){jogo[posic1][posic2] = 0; printf(ATINGIDO); e--;
		}
		else if (jogo[posic1][posic2] == 6){jogo[posic1][posic2] = 0; printf(ATINGIDO); f--;
		}
		else if (jogo[posic1][posic2] == 7){jogo[posic1][posic2] = 0; printf(ATINGIDO); g--;
		}
		else if (jogo[posic1][posic2] == 8){jogo[posic1][posic2] = 0; printf(ATINGIDO); h--;
		}
	}
	
	int vetor1[8] = {a,b,c,d,e,f,g,h};
	int vetor2[8] = {i,j,k,l,m,n,o,p};
    
    if (a == 0 && b == 0 && c == 0 && d == 0 && e == 0 && f == 0 && g == 0 && h == 0){
    	printf(VENCEU); return 0;
	}
	else{    
    float vetor3[8] = {0,0,0,0,0,0,0,0};

    for(int i = 0; i < 8; i++){
    	    if (vetor2[i] == 0){
	        	continue;
	        }
    		float porcen = ((float) vetor1[i] * 100) / (float) vetor2[i];
    		vetor3[i] = 100 - porcen;
	        printf(PRINT_NAVIO, i + 1, vetor3[i]);
		}
    }
    return 0;
}