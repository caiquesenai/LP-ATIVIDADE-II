#include <stdio.h>
#include <stdlib.h>

int main() {
   
int codigoAcesso = ;
int tentativa;

    do {
        printf("Digite o código de acesso: ");
        scanf("%d", &tentativa);

        if (tentativa == codigoAcesso) {
            printf("Acesso permitido!\n");
            break;
        } else {
            printf("Acesso negado. Tente novamente.\n");
        }
    } while (1);

    return 0;
}