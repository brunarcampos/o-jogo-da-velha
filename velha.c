#include <locale.h>
#include <stdio.h>
#include <string.h>



int main() {
    //permiti colocar acentos
    setlocale(LC_ALL, "Portuguese");

    // cabecalho do jogo
    printf("\n\n");
    printf("\n Bem vindo ao jogo da velha!!\n");
    printf("\n\n");

    //login do jogador
    // dois jogadores e seus nomes
    char nome_jogador_x[10];
    char nome_jogador_o[10];
    printf("Escreva o seu nome jogador X:  ");
    printf("\n\n");
    scanf("%s", &nome_jogador_x);
    printf("\n\n");
    printf("Escreva o seu nome jogador O:  ");
    printf("\n\n");
    scanf("%s", &nome_jogador_o);
 
    printf("Nome jogador X %s\n", nome_jogador_x);
    printf("Nome jogador O %s\n", nome_jogador_o);

    printf("\n\n");
    printf("Que o jogo comece!!");
    printf("\n\n");

    //estruturo do jogo da velha 
    printf("             |             |             \n");
    printf("             |             |             \n");
    printf("             |             |             \n");
    printf("             |             |             \n");
    printf("             |             |             \n");
    printf("_____________|_____________|_____________\n");
    printf("             |             |             \n");
    printf("             |             |             \n");
    printf("             |             |             \n");
    printf("             |             |             \n");
    printf("             |             |             \n");
    printf("_____________|_____________|_____________\n");
    printf("             |             |             \n");
    printf("             |             |             \n");
    printf("             |             |             \n");
    printf("             |             |             \n");
    printf("             |             |             \n");
   
   

}