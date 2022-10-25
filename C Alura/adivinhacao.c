#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    
    // Variaveis
    
    int secret = 56;

    int chute;

    // Cabeçalho do jogo

    printf("--------------------------------------\n");
    printf("Bem vindo ao nosso Jogo de Adivinhação\n");
    printf("--------------------------------------\n");

    // Código
    
    printf("Qual é o seu chute? ");

    scanf("%d", &chute);

    if (secret == chute) {
        printf("Parabéns Você acertou o numero!\n");
    } 
    else if (secret < chute) {
        printf("Seu numero foi maior que o Numero secreto!");
    }

    else {
        printf("Seu numero foi menor que o Numero secreto!");
    }
    
    return 0;
}


