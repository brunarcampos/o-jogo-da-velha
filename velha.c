#include <locale.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int telainicial(){
    //criar tela inicial do jogo 
    printf("+---------------------------------------------------+\n");
    printf("|                                                   |\n");
    printf("|           BEM VINDO AO JOGO DA VELHA!!            |\n");
    printf("|                                                   |\n");
    printf("|                                                   |\n");
    printf("|                                                   |\n");
    printf("|               1- CADRASTRE-SE                     |\n");
    printf("|                                                   |\n");
    printf("|               2- LOGIN                            |\n");
    printf("|                                                   |\n");
    printf("|               3- HISTÓRICO HANKING                |\n");
    printf("|                                                   |\n");
    printf("|               4- JOGAR EM DUPLA                   |\n");
    printf("|                                                   |\n");                                                                                                                                                                                                                                  
    printf("|               5- JOGAR COM O COMPUTADOR           |\n");
    printf("|                                                   |\n");
    printf("|               6- JOGAR COM A VELHA                |\n");
    printf("|                                                   |\n");
    printf("+---------------------------------------------------+\n");
}

int telacadastro(){
    //criar tela de cadastro do jogo
    printf("+---------------------------------------------------+\n");
    printf("|                                                   |\n");
    printf("|                  JOGO DA VELHA!!                  |\n");
    printf("|                                                   |\n");
    printf("|                                                   |\n");
    printf("|               01-CADASTRO JOGADOR O:              |\n");
    printf("|                                                   |\n");
    printf("|               NOME:                               |\n");
    printf("|               SENHA:                              |\n");
    printf("|                                                   |\n");
    printf("|               02-CADASTRO JOGADOR X:              |\n");
    printf("|                                                   |\n");
    printf("|               NOME:                               |\n");
    printf("|               SENHA:                              |\n");                                                                                                                                                                                                                                  
    printf("|                                                   |\n");
    printf("|                                                   |\n");
    printf("|                                                   |\n");
    printf("|                                        0-VOLTAR   |\n");
    printf("+---------------------------------------------------+\n");
}

int telalogin(){
    //criar tela de login
    printf("+---------------------------------------------------+\n");
    printf("|                                                   |\n");
    printf("|                  JOGO DA VELHA!!                  |\n");
    printf("|                                                   |\n");
    printf("|                                                   |\n");
    printf("|                LOGIN DO USUÁRIO                   |\n");
    printf("|                                                   |\n");
    printf("|               NOME:                               |\n");
    printf("|               SENHA:                              |\n");
    printf("|                                                   |\n");
    printf("|                                                   |\n");
    printf("|                                                   |\n");
    printf("|                                                   |\n");
    printf("|                                                   |\n");                                                                                                                                                                                                                                  
    printf("|                                                   |\n");
    printf("|                                                   |\n");
    printf("|                                                   |\n");
    printf("|                                        0-VOLTAR   |\n");
    printf("+---------------------------------------------------+\n");
}

int historicoranking(){
    //criar um ranking e seus histórico
    printf("+---------------------------------------------------+\n");
    printf("|                                                   |\n");
    printf("|                  JOGO DA VELHA!!                  |\n");
    printf("|                                                   |\n");
    printf("|                                                   |\n");
    printf("|                HSTORICO DE RANKING                |\n");
    printf("|                                                   |\n");
    printf("|        VITÓRIAS       EMPATES         DERROTAS    |\n");
    printf("|                                                   |\n");
    printf("|                                                   |\n");
    printf("|                                                   |\n");
    printf("|                                                   |\n");
    printf("|                                                   |\n");
    printf("|                                                   |\n");                                                                                                                                                                                                                                  
    printf("|                                                   |\n");
    printf("|                                                   |\n");
    printf("|                                                   |\n");
    printf("|                                        0-VOLTAR   |\n");
    printf("+---------------------------------------------------+\n");
}

int jogaremdupla(){
    //jogo em dupla
    printf("+---------------------------------------------------+\n");
    printf("|                                                   |\n");
    printf("|                  JOGO DA VELHA!!                  |\n");
    printf("|                                                   |\n");
    printf("|  JOGADOR O:                                       |\n");
    printf("|  JOGADOR X:                                       |\n");
    printf("|                A         B        C               |\n");
    printf("|                     |         |                   |\n");
    printf("|          1          |         |          1        |\n");
    printf("|               ______|_________|_______            |\n");
    printf("|                     |         |                   |\n");
    printf("|          2          |         |          2        |\n");
    printf("|               ______|_________|_______            |\n");
    printf("|                     |         |                   |\n");                                                                                                                                                                                                                                  
    printf("|          3          |         |          3        |\n");
    printf("|                     |         |                   |\n");
    printf("|                A         B         C              |\n");
    printf("|                                        0-VOLTAR   |\n");
    printf("+---------------------------------------------------+\n");
}

int vencedor(){
    //criar tela do vencedor 
    printf("+---------------------------------------------------+\n");
    printf("|                                                   |\n");
    printf("|                  JOGO DA VELHA!!                  |\n");
    printf("|                                                   |\n");
    printf("|             UHUL VOCÊ VENCEU, PARABÉNS!!          |\n");
    printf("|                                                   |\n");
    printf("|                  ______________                   |\n");
    printf("|                 '._=_=_=_=_=_=.'                  |\n");
    printf("|                 .-\\:        /-.                  |\n");
    printf("|                | (|:.        |) |                 |\n");
    printf("|                 '-|:.        |-'                  |\n");
    printf("|                  \\::.        /                   |\n");
    printf("|                   '::.      .'                    |\n");
    printf("|                      )     (                      |\n");                                                                                                                                                                                                                                  
    printf("|                       '   '                       |\n");
    printf("|                     _.     ._                     |\n");
    printf("|                    '---------'                    |\n");
    printf("|                                        0-VOLTAR   |\n");
    printf("+---------------------------------------------------+\n");
}

int perdeu(){
    //criar tela do perdedor
    printf("+---------------------------------------------------+\n");
    printf("|                                                   |\n");
    printf("|                  JOGO DA VELHA!!                  |\n");
    printf("|                                                   |\n");
    printf("|         AH NÃO QUE PENA, TENTE NUMA PRÓXIMA!!     |\n");
    printf("|                                                   |\n");
    printf("|               xxxx           xxxx                 |\n");
    printf("|              xxxx           xxxx                  |\n");
    printf("|              xxx             xxx                  |\n");
    printf("|                                                   |\n");
    printf("|                 '-|:.        |-'                  |\n");
    printf("|                  \\::.        /                   |\n");
    printf("|                   '::.      .'                    |\n");
    printf("|                      )     (                      |\n");                                                                                                                                                                                                                                  
    printf("|                       '   '                       |\n");
    printf("|                     _.     ._                     |\n");
    printf("|                    '---------'                    |\n");
    printf("|                                        0-VOLTAR   |\n");
    printf("+---------------------------------------------------+\n");
}

int main() {
    //permiti colocar acentos
    setlocale(LC_ALL, "Portuguese");
    
    
   return 0;

}