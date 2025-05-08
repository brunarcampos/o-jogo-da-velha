#include <locale.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void tela_inicial()
{
    // criar tela inicial do jogo
    system("cls");
    printf("+---------------------------------------------------+\n");
    printf("|                                                   |\n");
    printf("|           BEM VINDO AO JOGO DA VELHA!!            |\n");
    printf("|                                                   |\n");
    printf("|                   MENU PRINCIPAL                  |\n");
    printf("|                                                   |\n");
    printf("|               1- CADASTRE JOGADORES               |\n");
    printf("|                                                   |\n");
    printf("|               2- HISTÓRICO HANKING                |\n");
    printf("|                                                   |\n");
    printf("|               3- JOGAR EM DUPLA                   |\n");
    printf("|                                                   |\n");
    printf("|               4- JOGAR COM O COMPUTADOR (inátiva) |\n");
    printf("|                                                   |\n");
    printf("|               5- JOGAR COM A VELHA (inátiva)      |\n");
    printf("|                                                   |\n");
    printf("|               6- SAIR                             |\n");
    printf("|                                                   |\n");
    printf("+---------------------------------------------------+\n");
}

void tela_cadastro()
{
    // criar tela de cadastro do jogo
    system("cls");
    printf("+---------------------------------------------------+\n");
    printf("|                                                   |\n");
    printf("|                  JOGO DA VELHA!!                  |\n");
    printf("|                                                   |\n");
    printf("|                                                   |\n");
    printf("|                                                   |\n");
    printf("|        ESCOLHA EM QUAL VOCÊ QUER SE CADASTRAR:    |\n");
    printf("|                                                   |\n");
    printf("|                                                   |\n");
    printf("|                                                   |\n");
    printf("|              1-  PARA SE CADASTRAR NO X           |\n");
    printf("|                                                   |\n");
    printf("|                                                   |\n");
    printf("|                                                   |\n");
    printf("|              2- PARA SE CADASTRAR NO O            |\n");
    printf("|                                                   |\n");
    printf("|                                                   |\n");
    printf("|                                        0-VOLTAR   |\n");
    printf("+---------------------------------------------------+\n");
}

void tela_cadastro_x()
{
    // criar tela de cadastro X
    system("cls");
    printf("+---------------------------------------------------+\n");
    printf("|                                                   |\n");
    printf("|                  JOGO DA VELHA!!                  |\n");
    printf("|                                                   |\n");
    printf("|                                                   |\n");
    printf("|              VOCÊ ESCOLHEU A OPÇÃO X              |\n");
    printf("|                                                   |\n");
    printf("|                                                   |\n");
    printf("|             DIGITE O SEU PRIMEIRO NOME:           |\n");
    printf("|                                                   |\n");
    printf("|                                                   |\n");
    printf("|                     %c                            |\n");
    printf("|                                                   |\n");
    printf("|                                                   |\n");
    printf("|                                                   |\n");
    printf("|                                                   |\n");
    printf("|                                                   |\n");
    printf("|                                                   |\n");
    printf("+---------------------------------------------------+\n");
}

void tela_cadastro_o()
{
    // criar tela de cadastro O
    system("cls");
    printf("+---------------------------------------------------+\n");
    printf("|                                                   |\n");
    printf("|                  JOGO DA VELHA!!                  |\n");
    printf("|                                                   |\n");
    printf("|                                                   |\n");
    printf("|              VOCÊ ESCOLHEU A OPÇÃO O              |\n");
    printf("|                                                   |\n");
    printf("|                                                   |\n");
    printf("|             DIGITE O SEU PRIMEIRO NOME:           |\n");
    printf("|                                                   |\n");
    printf("|                                                   |\n");
    printf("|                       %c                          |\n");
    printf("|                                                   |\n");
    printf("|                                                   |\n");
    printf("|                                                   |\n");
    printf("|                                                   |\n");
    printf("|                                                   |\n");
    printf("|                                                   |\n");
    printf("+---------------------------------------------------+\n");
}

void historico_ranking()
{
    // criar um ranking e seus histórico
    system("cls");
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

void estrutura_jogo()
{
    // base da estrutura do jogo
    system("cls");
    printf("+---------------------------------------------------+\n");
    printf("|                                                   |\n");
    printf("|                  JOGO DA VELHA!!                  |\n");
    printf("|                                                   |\n");
    printf("|  JOGADOR O (%c,nome_o):                           |\n");
    printf("|  JOGADOR X (%c,nome_x):                           |\n");
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
    printf("|                                                   |\n");
    printf("+---------------------------------------------------+\n");
}

void tela_vencedor()
{
    // criar tela do vencedor
    system("cls");
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

void tela_perdeu()
{
    // criar tela do perdedor
    system("cls");
    printf("+---------------------------------------------------+\n");
    printf("|                                                   |\n");
    printf("|                  JOGO DA VELHA!!                  |\n");
    printf("|                                                   |\n");
    printf("|         AH NÃO QUE PENA, TENTE EM UMA PRÓXIMA!!   |\n");
    printf("|                                                   |\n");
    printf("|       XXXXXXX                     XXXXXXX         |\n");
    printf("|         XXXXXXX                 XXXXXXX           |\n");
    printf("|           XXXXXXX             XXXXXXX             |\n");
    printf("|             XXXXXXX         XXXXXXX               |\n");
    printf("|               XXXXXXX     XXXXXXX                 |\n");
    printf("|                   XXXXXXXXXXXXXX                  |\n");
    printf("|                 XXXXXXXXXXXXXX                    |\n");
    printf("|               XXXXXXX       XXXXXXX               |\n");
    printf("|             XXXXXXX           XXXXXXX             |\n");
    printf("|           XXXXXXX               XXXXXXX           |\n");
    printf("|         XXXXXXX                   XXXXXXX         |\n");
    printf("|                                        0-VOLTAR   |\n");
    printf("+---------------------------------------------------+\n");
}

void tela_empate()
{
    // criar tela de empate
    system("cls");
    printf("+---------------------------------------------------+\n");
    printf("|                                                   |\n");
    printf("|                  JOGO DA VELHA!!                  |\n");
    printf("|                                                   |\n");
    printf("|         AH NÃO QUASE, TENTE EM UMA PRÓXIMA!!      |\n");
    printf("|                                                   |\n");
    printf("|                   ***********                     |\n");
    printf("|                   ***********                     |\n");
    printf("|                    *********                      |\n");
    printf("|                     *******                       |\n");
    printf("|                      *****                        |\n");
    printf("|                       ***                         |\n");
    printf("|                        *                          |\n");
    printf("|                                                   |\n");
    printf("|                      *****                        |\n");
    printf("|                      *****                        |\n");
    printf("|                                                   |\n");
    printf("|                                        0-VOLTAR   |\n");
    printf("+---------------------------------------------------+\n");
}

int main()
{
    // permiti colocar acentos
    setlocale(LC_ALL, "Portuguese");

    char opcao_menu = '9';
    char escolha = '8';
    char nome_x[50];
    char nome_o[50];

    while (opcao_menu != '6')
    {
        tela_inicial();
        printf("Selecione o número para entrar na tela:  \n");
        scanf("%c", &opcao_menu);

        // acessar opção selecionada
        switch (opcao_menu)
        {
        case '1':
            // fazer cadastro
            while (escolha != '0')
            {
                tela_cadastro();
                printf("Escolha em qual você quer se cadastrar:   \n");
                scanf("%c", &escolha);
                switch (escolha)
                {
                case '1':
                    printf("Digite o seu primeiro nome: \n");
                    scanf("%s", nome_x);
                    printf("\nNome cadastrado com sucesso!!!\n");
                    break;
                case '2':
                    printf("Digite o seu primeiro nome: \n");
                    scanf("%s", nome_o);
                    printf("\nNome cadastrado com sucesso!!!\n");
                    break;
                case '0':
                    escolha = '0';
                    break;
                default:
                    printf("Opção inválida.\n");
                }

            }
            break;
        case '2':
            historico_ranking();
            break;
        case '3':
            estrutura_jogo();
            break;
        case '4':
            estrutura_jogo();
            break;
        case '5':
            estrutura_jogo();
            break;
        case '6':
            opcao_menu = '6';
            break;
        default:
            printf("Opção inválida.\n");
        }

        // primeiro jogo
    }
    return 0;
}