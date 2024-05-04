/* ================================================================== *
 *  Universidade Federal de Sao Carlos - UFSCar, Sorocaba
 *
 *  Disciplina: Introdução à Programação
 *  Prof. Tiago A. Almeida
 *
 *  Totiente de Euler
 * ================================================================== */

/* Muitos algoritmos de segurança, como o RSA, dependem muito de conceitos matemáticos e
Teoria dos Números, ambos temas extensivamente estudados em nosso curso. Uma função que
é utilizada por esses algoritmos é a totiente de Euler, definida pelos seguintes conceitos:

• Φ (n) é a quantidade de números relativamente primos a n no intervalo (1, . . . , n −1);
• Dois números são relativamente primos quando o maior divisor comum (MDC) entre eles
é equivalente a 1.

Com essa função, podemos estabelecer o seguinte teorema:
Sabendo que a e m são números inteiros relativamente primos (MDC(a, m) = 1), temos a
expressão:

a^Φ(m)(mod(m)) = 1

Exemplo:
a = 7, m = 240:

a^Φ(m)(mod(m))
7^Φ(240)(mod(240))
Φ(240) = 64

7^64(mod(240))
7^64(mod(240)) = 1

Faça um programa que teste este teorema para dois números inteiros, avaliando ambos o MDC
e a congruência.

ENTRADAS
Seu programa receberá dois números inteiros positivos, que são a e m, respectivamente.

SAÍDA
Seu programa deve imprimir na tela o MDC de ambos os números, o valor de Φ(m), a 
expressão calculada e, por último, se a e m são números válidos para o teorema.

Dicas
• Para calcular a exponenciação modular, isto é, ab mod c, quando o resultado de ab é
grande, podemos fazer o módulo da potência parcialmente até chegar no valor desejado,
de acordo com propriedades da operação módulo. Por exemplo, seja a = 3, b = 5, c = 42,
3^5 mod 42:
(1) 1 ×3 mod 42 = 3
(2) 3 ×3 mod 42 = 9
(3) 9 ×3 mod 42 = 27
(4) 27 ×3 mod 42 = 39
(5) 39 ×3 mod 42 = 33
ou seja, 3^5 mod 42 = 33. */

#include <stdio.h>

#define MDC "MDC(%d,%d) = %d\n"
#define PHI "Phi(%d) = %d\n"
#define EQUACAO "%d ^ %d (mod %d) = %llu\n"
#define VALIDO "Os numeros sao validos para o teorema.\n"
#define INVALIDO "Os numeros nao sao validos para o teorema.\n"

int mdc(int a, int b);

int calcularPhi(int num);

unsigned long long exponenciacaoModular(unsigned long long a, unsigned long long b, unsigned long long c);

int main(){
	
	int a, b;
	
	scanf("%d", &a);
	
	scanf("%d", &b);
	
	printf(MDC, a, b, mdc(a,b));
	
	printf(PHI, b, calcularPhi(b));
	
	printf(EQUACAO, a, calcularPhi(b), b, exponenciacaoModular(a, calcularPhi(b), b));
	
	if(mdc(a,b) == 1)
	{
		printf(VALIDO);
	}
	else
	{
		printf(INVALIDO);
	}
	
	return (0);
}

int mdc(int a, int b)
{
	int dividendo, divisor, resto;
	if(a > b)
	{
		dividendo = a;
		
		divisor = b;
	}
	else
	{
		dividendo = b;
		
		divisor = a;
	}
    
    do{
    	resto = dividendo % divisor;
    	
    	if(resto != 0)
    	{
    		dividendo = divisor;
    		divisor = resto;
		}
	}while(resto != 0);
	
	return (divisor);
}

int calcularPhi(int num)
{
    int dividendo = num, divisor = num - 1, resto, contador = 0;
    
    for(int i = 1; i <= num;)
    {
    	do{
	    	resto = dividendo % divisor;
	    	
	    	if(resto != 0)
	    	{
	    		dividendo = divisor;
	    		divisor = resto;
			}
		}while(resto != 0);
	
		if(divisor == 1){
			contador++;
		}
		i++;
		divisor = num - i;
		dividendo = num;
		if (i == num){
			return (contador);
		}
	}
}

unsigned long long exponenciacaoModular(unsigned long long a, unsigned long long b, unsigned long long c)
{
	unsigned long long expmod, resultado = 1;
	
	for(unsigned long long i = 0; i < b; i++)
	{
		expmod = ((resultado) * a) % c;
		resultado = expmod;
	}
	return (resultado);
}