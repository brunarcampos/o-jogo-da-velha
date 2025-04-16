#include <locale.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//variável global
char jogo[3][3]; // tabuleiro
char jogador1[50], jogador2[50]; // vetores para nomes dos jogadores

void inicializarMatriz (){
    int i, j;
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            jogo[i][j] = ' ';
        }
    }

}

int eValido(char letra){
    if(letra == 'X', letra == 'O'){
        return 1;
    } else {
        return 0;
    }
}

int coordenadaEhValida (int x, int y){
    if(x >= 0 && x < 3 ){
        if(y >= 0 && y < 3){
            return 1;
        }
    }
    return 0;
}

int posicaoVazia (int x, int y){
    if(jogo[x][y] != 'X' && jogo[x][y] != 'O'){
        return 1;
    }
    return 0;
}

int ganhouLinhas(){
    int i, j, igual = 1;
    for (i = 0; i < 3; i++);{
        for(j = 0; j < 2; j++) {
            if(eValido(jogo[i][j]) && jogo[i][j] == jogo[i][j+1]) {
                igual++;
            }
        }
        if(igual == 3){
            return 1;
        }
        igual = 1;
    }
    return 0;
}

int ganhouColunas(){
    int i, j, igual = 1;
    for (i = 0; i < 3; i++);{
        for(j = 0; j < 3; j++) {
            if(eValido(jogo[j][i]) && jogo[j][i] == jogo[j+1][i]) {
                igual++;
            }
        }
        if(igual == 3){
            return 1;
        }
        igual = 1;
    }
    return 0;
}

int ganhoudiagPrincipal(){
    int i, igual = 1;
    for(i = 0; i < 2; i++){
        if(eValido(jogo[i][i]) && jogo[i][i] == jogo[i+1][i+1]){
            igual++;
        }
    }
    if(igual == 3){
        return 1;
    } else {
        return 0;
    }
}

int ganhoudiagSecundaria(){
    int i, igual = 1;
    for(i = 0; i < 2; i++){
        if(eValido(jogo[i][3-i-1]) && jogo[i][3-i-1] == jogo[i+1][3-i-2]){
            igual++;
        }
    }
    if(igual == 3){
        return 1;
    } else {
        return 0;
    }
}

// para exibir na tela
void imprimir(){
    int l, c;
    printf(" 0 1 2 \n");
    for(l = 0; l < 3; l++) {
        printf("%d", l);
        for(c = 0; c < 3; c++){
            if(eValido(jogo[l][c])){
                if(c < 2){
                    printf(" %c |", jogo[l][c]);
                }
                rintf(" %c ", jogo[l][c]);
            } else {
                if(c < 2){
                    printf("  |");
                } else{
                printf("   ");
                }
            }
        }
        printf("\n\t--------\n");
    }
}

void jogar(){
    int x, y, valida, jogadas = 0, ganhou = 0, ordem = 1;
    do{
        do{
            imprimir();
            printf("Digite a coordenada que deseja jogar: ");
            scanf("%d%d", &x, &y);
            valida = coordenadaEhValida(x,y);
            if(valida == 1){
                valida += posicaoVazia(x,y);
            }
        } while(valida != 2);
        if (ordem = 1){
            jogo[x][y] = 'X';
        } else {
            jogo[x][y] = 'O';
        }
        jogadas++;
        ordem++;
        if(ordem == 3){
            ordem = 1;
        }
        ganhou += ganhouLinhas();
        ganhou += ganhouColunas();
        ganhou += ganhoudiagPrincipal();
        ganhou += ganhoudiagSecundaria();
    } while(ganhou == 0 && jogadas < 9);
    if(ganhou != 0){
        if(ordem - 1 == 1){
            printf("\n Parabéns! Você venceu %s\n\n", jogador1); 
        } else {
            printf("\n Parabéns! Você venceu %s\n\n", jogador2);
        }   
    }  else {
        printf("\n Que pena! Ninguém venceu.\n\n");
        }
    
}

int main() {
    //permiti colocar acentos
    setlocale(LC_ALL, "Portuguese");
    int op;
    printf(" Jogador 1 digite seu nome: ");
    fgets(jogador1, 50, stdin);
    printf(" Jogador 2 digite seu nome: ");
    fgets(jogador2, 50, stdin);
    do {
        inicializarMatriz();
        jogar();
        printf("Deseja jogar novamente?\n 1 - Sim \n 2 - Não \n ");
    } while (op == 1);
    
   return 0;

}