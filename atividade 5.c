#include <stdio.h>

int main() {
    
     int escolhaIdioma;


    printf("Escolha um idioma de preferência:\n");
    printf("1 - Inglês\n");
    printf("2 - Espanhol\n");
    printf("3 - Francês\n");
    scanf("%d", &escolhaIdioma);

    switch (escolhaIdioma) {
        case 1:
            printf("Welcome!\n");
            break;
        case 2:
            printf("¡Bienvenido!\n");
            break;
        case 3:
            printf("Bienvenue!\n");
            break;
        default:
            printf("Opção inválida.\n");
    }

    return 0;
}