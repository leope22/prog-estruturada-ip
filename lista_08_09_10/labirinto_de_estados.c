/* ================================================================== *
 *  Universidade Federal de Sao Carlos - UFSCar, Sorocaba
 *
 *  Disciplina: Introdução à Programação
 *  Prof. Tiago A. Almeida
 *
 *  Labirinto de estados
 * ================================================================== */

/* Em um labirinto, as portas que são adentradas podem te levar mais perto da 
saída ou fazer você dar voltas. O labirinto pode ser escrito na forma de uma 
‘máquina de estados’, representando os caminhos e relações entre as salas.
Seguindo o esquema da máquina de estados finitos de Moore apresentada a seguir, 
escreva um programa que simule este esquema utilizando o conceito de funções.

ENTRADA
O programa deve receber uma série de 15 números que simbolizam as portas escolhidas pelo
usuário.

SAÍDA
Ao final, o programa deve informar se em algum momento do percurso foi possível alcançar o
fim, ou se o usuário se perdeu em meio ao labirinto e em qual sala.

Detalhes
•Dentro da sequência, é possível encontrar o caminho certo. */

#include <stdio.h>

#define PREMIO "Voce chegou ao fim!\n"
#define FALHOU "Voce falhou!\n"
#define A "Estado A\n"
#define B "Estado B\n"
#define C "Estado C\n"
#define D "Estado D\n"

int vetor[15], num;

void estadoA(int n);

void estadoB(int n);

void estadoC(int n);

void estadoD(int n);

void fim();

int main(){
	
	for(num = 0; num < 15; num++)
	{
		scanf("%d", &vetor[num]);
	}
	
	num = 0;
	
	estadoA(vetor[num]);
    
    return (0);
}

void estadoA(int n)
{
	
	if(num == 15)
	{
		printf(A);
		printf(FALHOU);
	}
	else if(n == 2)
	{
		num++;
		estadoB(vetor[num]);
	}
	else
	{
		num++;
		estadoA(vetor[num]);
	}
}

void estadoB(int n)
{
	if(num == 15)
	{
    	printf(B);
		printf(FALHOU);
	}
	else if(n == 4)
	{
		num++;
		estadoC(vetor[num]);
	}
	else
	{
		num++;
		estadoA(vetor[num]);
	}
}

void estadoC(int n)
{
	if(num == 15)
	{
    	printf(C);
		printf(FALHOU);
	}
	else if(n == 1)
	{
		num++;
		estadoD(vetor[num]);
	}
	else
	{
		num++;
		estadoA(vetor[num]);
	}
}

void estadoD(int n)
{
	if(num == 15)
	{
    	printf(D);
		printf(FALHOU);
	}
	else if(n == 3)
	{
		fim();
	}
    else if(n == 4)
	{
		num++;
		estadoC(vetor[num]);
	}
	else if(n == 2)
	{
		num++;
		estadoB(vetor[num]);
	}
	else
	{
		num++;
		estadoA(vetor[num]);
	}
}

void fim()
{
	printf(PREMIO);
}