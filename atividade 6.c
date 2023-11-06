#include <stdio.h>

int main() {
    
    int codigoProduto;

    printf("Escolha o código do produto:\n");
    printf("1 - Camiseta\n");
    printf("2 - Calça\n");
    printf("3 - Sapato\n");
    scanf("%d", &codigoProduto);

    switch (codigoProduto) {
        case 1:
            printf("Voce escolheu Camiseta. Preço: R$ 29.99\n");
            break;
        case 2:
            printf("Voce selecionou Calça. Preço: R$ 49.99\n");
            break;
        case 3:
            printf("Voce selecionou Sapato. Preço: R$ 79.99\n");
            break;
        default:
            printf("Código de produto inválido.\n");
    }

    return 0;
}