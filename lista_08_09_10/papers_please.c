/* ================================================================== *
 *  Universidade Federal de Sao Carlos - UFSCar, Sorocaba
 *
 *  Disciplina: Introdução à Programação
 *  Prof. Tiago A. Almeida
 *
 *  Papers, please!
 * ================================================================== */

/* Este programa avalia e imprime relatórios sobre os documentos de imigrantes que desejam entrar
em Arstotzka, Santo Berço ou Kretzel. Cada imigrante deve fornecer as seguintes informações:

- ID do passaporte (um número de 3 dígitos).
- Ano de vencimento do passaporte (não pode ser inferior ao ano atual).
- País que emitiu o passaporte (Arstotzka, Santo Berço ou Kretzel).
- Gênero do cidadão (Masculino, Feminino ou Outro).

Após avaliar todos os imigrantes do dia, o programa imprime um relatório mostrando as informações
de cada imigrante e o status de sua validação. */

#include <stdio.h>
 
#define REJ "Rejeitado\n"
#define APR "Aprovado\n"
#define RELATORIO "id:%d vencimento:%d emissor:%c genero:%c\n"
 
typedef struct imigrante{
    int ID;
    int ano;
    char pais;
    char genero;
    int status;
} Imigrante;
 
int main (){
    int num;
 
    scanf("%d", &num);
 
    Imigrante inf[num];
 
    for (int i = 0; i < num; i++){
 
        scanf("%d", &inf[i].ID);
        scanf("%d", &inf[i].ano);
        scanf(" %c", &inf[i].pais);
        scanf(" %c", &inf[i].genero);
 
        if ((inf[i].ID >= 100 && inf[i].ID <=999) &&
            (inf[i].ano >= 2021) &&
            (inf[i].pais == 'A' || inf[i].pais == 'K' || inf[i].pais == 'S') &&
            (inf[i].genero == 'M' || inf[i].genero == 'F' || inf[i].genero == 'O')){
                inf[i].status = 1;
                printf(APR);
        }
        else {
            inf[i].status = 0;
            printf(REJ);
        }
    }
 
    printf("Resultados:\n");
 
    for (int j = 0; j < num; j++){
        printf(RELATORIO, inf[j].ID, inf[j].ano, inf[j].pais, inf[j].genero);
        if(inf[j].status == 1){
            printf(APR);
        } else{
            printf(REJ);
        }
    }

    return 0;
}