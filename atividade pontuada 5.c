#include <stdio.h>
#include <stdlib.h>

int main() {
    
    
int escolhaIdioma;

    printf("Escolha um idioma de preferencia:\n");
    printf("1 - Ingles\n");
    printf("2 - Espanhol\n");
    printf("3 - Frances\n");
    scanf("%d", &escolhaIdioma);

    switch (escolhaIdioma) {
        case 1:
            printf("Welcome!\n");
            break;
        case 2:
            printf("Bienvenido!\n");
            break;
        case 3:
            printf("Bienvenue!\n");
            break;
        default:
            printf("Opção invalida!\n");
            break;
    }

    return 0;
}
