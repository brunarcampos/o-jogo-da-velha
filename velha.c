#include <locale.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char tabuleiro[3][3] = {
    {' ', ' ', ' '},
    {' ', ' ', ' '},
    {' ', ' ', ' '}};
char nome_x[50] = "Bruna ";
char nome_o[50] = "Luiz";
int linha, coluna;
int posicao;

void init() {}

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
    printf("|               2- HISTÓRICO RANKING                |\n");
    printf("|                                                   |\n");
    printf("|               3- JOGAR EM DUPLA                   |\n");
    printf("|                                                   |\n");
    printf("|               4- JOGAR COM O COMPUTADOR           |\n");
    printf("|                                                   |\n");
    printf("|               5- JOGAR COM A VELHA                |\n");
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
    printf("|                                                   |\n");
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
    printf("|                                                   |\n");
    printf("|                                                   |\n");
    printf("|                                                   |\n");
    printf("|                                                   |\n");
    printf("|                                                   |\n");
    printf("|                                                   |\n");
    printf("|                                                   |\n");
    printf("+---------------------------------------------------+\n");
}

void historico_ranking(char nome_o[50], char nome_x[50], int vitoriasX, int derrotasX, int empatesX, int vitoriasO, int derrotasO, int empatesO)
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
    printf("|  JOGADORES     VITÓRIAS   EMPATES     DERROTAS    |\n");
    printf("|                                                   |\n");
    printf("|                                                   |\n");
    printf("|  X - %s          %i         %i         %i         |\n", nome_x, vitoriasX, empatesX, derrotasX);
    printf("|                                                   |\n");
    printf("|                                                   |\n");
    printf("|  O - %s          %i         %i         %i         |\n", nome_o, vitoriasO, empatesO, derrotasO);
    printf("|                                                   |\n");
    printf("|                                                   |\n");
    printf("|                                                   |\n");
    printf("|                                        0-VOLTAR   |\n");
    printf("+---------------------------------------------------+\n");
}

void estrutura_jogo(char nome_o[50], char nome_x[50], char A1, char A2, char A3, char B1, char B2, char B3, char C1, char C2, char C3)
{
    // base da estrutura do jogo
    system("cls");
    printf("+---------------------------------------------------+\n");
    printf("|                                                   \n");
    printf("|                  JOGO DA VELHA!!                  \n");
    printf("|                                                   \n");
    printf("|  JOGADOR (O) %s                                   \n", nome_o);
    printf("|  JOGADOR (X) %s                                   \n", nome_x);
    printf("|                1         2        3               \n");
    printf("|                     |         |                   \n");
    printf("|          A      %c  |    %c   |   %c      A      \n", A1, A2, A3);
    printf("|               ______|_________|_______            \n");
    printf("|                     |         |                   \n");
    printf("|          B      %c  |    %c   |    %c      B       \n", B1, B2, B3);
    printf("|               ______|_________|_______            \n");
    printf("|                     |         |                   \n");
    printf("|          C      %c  |    %c   |    %c      C      \n", C1, C2, C3);
    printf("|                     |         |                   \n");
    printf("|                1         2         3              \n");
    printf("|                                                   \n");
    printf("+---------------------------------------------------+\n");
}

void tela_vencedor(char vencedor)
{
    // criar tela do vencedor
    system("cls");
    printf("+---------------------------------------------------+\n");
    printf("|                                                   |\n");
    printf("|                  JOGO DA VELHA!!                  |\n");
    printf("|                                                   |\n");
    printf("|         UHUL VOCÊ VENCEU, PARABÉNS %c!!           |\n", vencedor);
    printf("|                                                   |\n");
    printf("|                  ______________                   |\n");
    printf("|                 '._=_=_=_=_=_=.'                  |\n");
    printf("|                 .-\\:        /-.                   |\n");
    printf("|                | (|:.        |) |                 |\n");
    printf("|                 '-|:.        |-'                  |\n");
    printf("|                  \\::.        /                    |\n");
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

void velhinha()
{
    system("cls");
    printf("££££££££££££\n");
    printf("££££££££££££\n");
    printf("£ ¬   .  ¬ £\n");
    printf("     __     \n");
}

void iniciar_tabuleiro()
{
    // comando para iniciar o tabuleiro
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            tabuleiro[i][j] = ' ';
        }
    }
}

char verificar_ganhador(char A1, char A2, char A3, char B1, char B2, char B3, char C1, char C2, char C3)
{
    // Criar uma função para verificar se ganhou com X
    if (A1 == 'X' && A2 == 'X' && A3 == 'X')
    {
        return 'X'; // com esse ganha na primeira linha
    }
    else if (B1 == 'X' && B2 == 'X' && B3 == 'X')
    {
        return 'X'; // com esse ganha na segunda linha
    }
    else if (C1 == 'X' && C2 == 'X' && C3 == 'X')
    {
        return 'X'; // com esse ganha na terceira linha
    }
    else if (A1 == 'X' && B1 == 'X' && C1 == 'X')
    {
        return 'X'; // com esse ganha na primeira coluna
    }
    else if (A2 == 'X' && B2 == 'X' && C2 == 'X')
    {
        return 'X'; // com esse ganha na segunda coluna
    }
    else if (A3 == 'X' && B3 == 'X' && C3 == 'X')
    {
        return 'X'; // com esse ganha na terceira coluna
    }
    else if (A1 == 'X' && B2 == 'X' && C3 == 'X')
    {
        return 'X'; // com esse ganha na primeira diagonal
    }
    else if (A3 == 'X' && B2 == 'X' && C1 == 'X')
    {
        return 'X';
    }

    // Criar uma função para verificar se ganhou com O
    if (A1 == 'O' && A2 == 'O' && A3 == 'O')
    {
        return 'O'; // com esse ganha na primeira linha
    }
    else if (B1 == 'O' && B2 == 'O' && B3 == 'O')
    {
        return 'O'; // com esse ganha na segunda linha
    }
    else if (C1 == 'O' && C2 == 'O' && C3 == 'O')
    {
        return 'O'; // com esse ganha na terceira linha
    }
    else if (A1 == 'O' && B1 == 'O' && C1 == 'O')
    {
        return 'O'; // com esse ganha na primeira coluna
    }
    else if (A2 == 'O' && B2 == 'O' && C2 == 'O')
    {
        return 'O'; // com esse ganha na segunda coluna
    }
    else if (A3 == 'O' && B3 == 'O' && C3 == 'O')
    {
        return 'O'; // com esse ganha na terceira coluna
    }
    else if (A1 == 'O' && B2 == 'O' && C3 == 'O')
    {
        return 'O'; // com esse ganha na primeira diagonal
    }
    else if (A3 == 'O' && B2 == 'O' && C1 == 'O')
    {
        return 'O';
    }

    return '?';
}

int tabuleiro_completo(char A1, char A2, char A3, char B1, char B2, char B3, char C1, char C2, char C3)
{
    if (A1 != ' ' && A2 != ' ' && A3 != ' ' && B1 != ' ' && B2 != ' ' && B3 != ' ' && C1 != ' ' && C2 != ' ' && C3 != ' ')
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

char perguntar_jogador(char nome_o[50], char nome_x[50])
{
    char jogador;
    char parar = '?';
    while (parar != '0')
    {
        system("cls");
        printf("+---------------------------------------------------+\n");
        printf("|                                                   |\n");
        printf("|                  JOGO DA VELHA!!                  |\n");
        printf("|                                                   |\n");
        printf("|                                                   |\n");
        printf("|             VOCÊ GOSTARIA DE CONTINUAR            |\n");
        printf("|                  COM QUAL JOGADOR:                |\n");
        printf("|                                                   |\n");
        printf("|                                                   |\n");
        printf("|               X - PARA O JOGADOR %d:              |\n", nome_x);
        printf("|                                                   |\n");
        printf("|               O - PARA O JOGADOR %d:              |\n", nome_o);
        printf("|                                                   |\n");
        printf("|                                                   |\n");
        printf("|                                                   |\n");
        printf("|                                                   |\n");
        printf("|                                                   |\n");
        printf("+---------------------------------------------------+\n");

        scanf("%d", jogador);
        switch (jogador)
        {
        case 'X':
            parar = '0';

        case 'O':
            parar = '0';
        }
    }
    return jogador;
}

int main()

{
    // permiti colocar acentos
    setlocale(LC_ALL, "Portuguese");

    char opcao_menu = '9';

    int vitoriasX = 0;
    int derrotasX = 0;
    int empatesX = 0;
    int vitoriasO = 0;
    int derrotasO = 0;
    int empatesO = 0;

    while (opcao_menu != '6')
    {
        tela_inicial();
        char escolha = '8';
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
                scanf(" %c", &escolha);
                switch (escolha)
                {
                case '1':
                    printf("Digite o seu primeiro nome: \n");
                    scanf("%s", &nome_x);
                    printf("\nNome cadastrado com sucesso!!!\n");
                    break;
                case '2':
                    printf("Digite o seu primeiro nome: \n");
                    scanf("%s", &nome_o);
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
            // mostrar o ranking com o histórico dos outros jogadores
            while (escolha != '0')
            {
                historico_ranking(nome_o, nome_x, vitoriasX, derrotasX, empatesX, vitoriasO, derrotasO,  empatesO);
                printf("Para retornar a tela inicial é só digitar 0: ");
                scanf(" %c", &escolha);
            }
            break;
        case '3':
            // primeiro jogo em dubla
            init();
            char A1 = ' ';
            char A2 = ' ';
            char A3 = ' ';
            char B1 = ' ';
            char B2 = ' ';
            char B3 = ' ';
            char C1 = ' ';
            char C2 = ' ';
            char C3 = ' ';

            // jogador inicial
            char jogadorDaVez = 'X';

            char parar = '?';
            // posição de jogada
            while (parar != '0')
            {
                estrutura_jogo(nome_o, nome_x, A1, A2, A3, B1, B2, B3, C1, C2, C3);
                printf("Escolha a posição que será jogada (Ex: A1): \n");

                char entrada[2];
                scanf("%2s", &entrada);

                if (entrada[0] == 'A' && entrada[1] == '1')
                {
                    A1 = jogadorDaVez;
                }
                else if (entrada[0] == 'A' && entrada[1] == '2')
                {
                    A2 = jogadorDaVez;
                }
                else if (entrada[0] == 'A' && entrada[1] == '3')
                {
                    A3 = jogadorDaVez;
                }
                else if (entrada[0] == 'B' && entrada[1] == '1')
                {
                    B1 = jogadorDaVez;
                }
                else if (entrada[0] == 'B' && entrada[1] == '2')
                {
                    B2 = jogadorDaVez;
                }
                else if (entrada[0] == 'B' && entrada[1] == '3')
                {
                    B3 = jogadorDaVez;
                }
                else if (entrada[0] == 'C' && entrada[1] == '1')
                {
                    C1 = jogadorDaVez;
                }
                else if (entrada[0] == 'C' && entrada[1] == '2')
                {
                    C2 = jogadorDaVez;
                }
                else if (entrada[0] == 'C' && entrada[1] == '3')
                {
                    C3 = jogadorDaVez;
                }
                else
                {
                    printf("Opção inválida ou ocupada. Tente novamente:\n");
                    continue;
                }

                // verificar o vencedor
                int esta_completo = tabuleiro_completo(A1, A2, A3, B1, B2, B3, C1, C2, C3);
                char vencedor = verificar_ganhador(A1, A2, A3, B1, B2, B3, C1, C2, C3);
                if (vencedor == 'X')
                {
                    char sair = '?';
                    while (sair != '0')
                    {
                        tela_vencedor(vencedor);
                        printf("Para retornar a tela inicial é só digitar 0: \n");
                        char escolha;
                        scanf("%c", &escolha);
                        switch (escolha)
                        {
                        case '0':
                            printf("Sair");
                            sair = '0';
                            parar = '0';

                        default:
                            printf("Digitou errado!");
                        }
                    }
                    vitoriasX = vitoriasX + 1;
                    derrotasO = derrotasO + 1;
                }
                else if (vencedor == 'O')
                {
                    char sair = '?';
                    while (sair != '0')
                    {
                        tela_vencedor(vencedor);
                        printf("Para retornar a tela inicial é só digitar 0: \n");
                        char escolha;
                        scanf("%c", &escolha);
                        switch (escolha)
                        {
                        case '0':
                            printf("Sair");
                            sair = '0';
                            parar = '0';

                        default:
                            printf("Digitou errado!");
                        }
                    }
                    vitoriasO = vitoriasO + 1;
                    derrotasX = derrotasX + 1;
                }
                else if (vencedor == '?' && esta_completo == 1)
                {
                    // verificar empate
                    char sair = '!';
                    while (sair != '0')
                    {
                        tela_empate();
                        printf("Para retornar a tela inicial é só digitar 0: \n");
                        char escolha;
                        scanf(" %c", &escolha);
                        switch (escolha)
                        {
                        case '0':
                            printf("Sair");
                            sair = '0';
                            parar = '0';
                            break;
                        default:
                            printf("Digitou errado!");
                            break;
                        }
                    }
                    empatesO = empatesO + 1;
                    empatesX = empatesX + 1;
                }

                // trocando o jogador
                if (jogadorDaVez == 'X')
                {
                    jogadorDaVez = 'O';
                }
                else
                {
                    jogadorDaVez = 'X';
                }
            }

            break;
        case '4':
            // segundo jogo, jogar com a maquina
            init();
            char jogador = perguntar_jogador(nome_o, nome_x);

            //char A1 = ' ';
            //char A2 = ' ';
            //char A3 = ' ';
            //char B1 = ' ';
            //char B2 = ' ';
            //char B3 = ' ';
            //char C1 = ' ';
            //char C2 = ' ';
            //char C3 = ' ';

            // jogador inicial
            //char jogadorDaVez = 'X';
            char joagadorComputador;
            //char parar = '?';
            // posição de jogada
            while (parar != '0')
            {
                estrutura_jogo(nome_o, nome_x, A1, A2, A3, B1, B2, B3, C1, C2, C3);
                printf("Escolha a posição que será jogada (Ex: A1): \n");

                char entrada[2];
                scanf("%2s", &entrada);

                if (entrada[0] == 'A' && entrada[1] == '1')
                {
                    A1 = jogadorDaVez;
                }
                else if (entrada[0] == 'A' && entrada[1] == '2')
                {
                    A2 = jogadorDaVez;
                }
                else if (entrada[0] == 'A' && entrada[1] == '3')
                {
                    A3 = jogadorDaVez;
                }
                else if (entrada[0] == 'B' && entrada[1] == '1')
                {
                    B1 = jogadorDaVez;
                }
                else if (entrada[0] == 'B' && entrada[1] == '2')
                {
                    B2 = jogadorDaVez;
                }
                else if (entrada[0] == 'B' && entrada[1] == '3')
                {
                    B3 = jogadorDaVez;
                }
                else if (entrada[0] == 'C' && entrada[1] == '1')
                {
                    C1 = jogadorDaVez;
                }
                else if (entrada[0] == 'C' && entrada[1] == '2')
                {
                    C2 = jogadorDaVez;
                }
                else if (entrada[0] == 'C' && entrada[1] == '3')
                {
                    C3 = jogadorDaVez;
                }
                else
                {
                    printf("Opção inválida ou ocupada. Tente novamente:\n");
                    continue;
                }

                // verificar o vencedor
                int esta_completo = tabuleiro_completo(A1, A2, A3, B1, B2, B3, C1, C2, C3);
                char vencedor = verificar_ganhador(A1, A2, A3, B1, B2, B3, C1, C2, C3);
                if (vencedor == 'X')
                {
                    char sair = '?';
                    while (sair != '0')
                    {
                        tela_vencedor(vencedor);
                        printf("Para retornar a tela inicial é só digitar 0: \n");
                        char escolha;
                        scanf("%c", &escolha);
                        switch (escolha)
                        {
                        case '0':
                            printf("Sair");
                            sair = '0';
                            parar = '0';

                        default:
                            printf("Digitou errado!");
                        }
                    }
                }
                else if (vencedor == 'O')
                {
                    char sair = '?';
                    while (sair != '0')
                    {
                        tela_vencedor(vencedor);
                        printf("Para retornar a tela inicial é só digitar 0: \n");
                        char escolha;
                        scanf("%c", &escolha);
                        switch (escolha)
                        {
                        case '0':
                            printf("Sair");
                            sair = '0';
                            parar = '0';

                        default:
                            printf("Digitou errado!");
                        }
                    }
                }
                else if (vencedor == '?' && esta_completo == 1)
                {
                    // verificar empate
                    char sair = '!';
                    while (sair != '0')
                    {
                        tela_empate();
                        printf("Para retornar a tela inicial é só digitar 0: \n");
                        char escolha;
                        scanf(" %c", &escolha);
                        switch (escolha)
                        {
                        case '0':
                            printf("Sair");
                            sair = '0';
                            parar = '0';
                            break;
                        default:
                            printf("Digitou errado!");
                            break;
                        }
                    }
                }

                // trocando o jogador
                if (jogadorDaVez == 'X')
                {
                    jogadorDaVez = 'O';
                }
                else
                {
                    jogadorDaVez = 'X';
                }
            }

            break;
        case '5':
            // terceiro jogo especial
            init();
            break;
        case '6':
            opcao_menu = '6';
            break;
        default:
            printf("Opção inválida.\n");
        }
    }
    return 0;
}