#include <locale.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int telas(){
    //criar tela inicial do jogo 
    printf("+---------------------------------------------------+\n");
    printf("|                                                   |\n");
    printf("|                                                   |\n");
    printf("|                                                   |\n");
    printf("|                                                   |\n");
    printf("|                                                   |\n");
    printf("|                                                   |\n");
    printf("|                                                   |\n");
    printf("|                                                   |\n");
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

int main() {
    //permiti colocar acentos
    setlocale(LC_ALL, "Portuguese");
    telas();
    
   return 0;

}