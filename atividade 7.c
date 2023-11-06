#include <stdio.h>

int main() {
    
int escolha;

    printf("Menu:\n");
    printf("1 - Novo jogo\n");
    printf("2 - Carregar jogo\n");
    printf("3 - Configurações\n");
    printf("Escolha uma opção: ");
    scanf("%d", &escolha);

    switch (escolha) {
        case 1:
            printf("Iniciando um novo jogo...\n");
          
            break;
        case 2:
            printf("Carregando um jogo existente...\n");
            break;
        case 3:
            printf("Acessando as configurações...\n");
            
            break;
        default:
            printf("Opção inválida.\n");
    }

    return 0;
}