#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    
    // Variaveis
    
    int x;

    int y;

    // Código

    scanf("%d", &x);

    scanf("%d", &y);

    int z = x*y;
    
    printf("O resultado da multiplicação é: %d\n", z);
    
    return 0;
}