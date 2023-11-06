#include <stdio.h>
#include <stdbool.h>

int main() {
   
   
float valorCompra;
int diaDaSemana;
float desconto = 0.0;

    printf("Informe o valor da compra em reais: ");
    scanf("%f", &valorCompra);

    printf("Informe o dia da semana (1 = segunda, 2 = terça, ..., 7 = domingo): ");
    scanf("%d", &diaDaSemana);

    if (valorCompra > 100) {
        if (diaDaSemana >= 1 && diaDaSemana <= 5) {
            desconto = valorCompra * 0.10; 
        } else if (diaDaSemana >= 6 && diaDaSemana <= 7) {
            desconto = valorCompra * 0.15; 
        }
    }

    if (desconto > 0) {
        printf("Você teve um desconto de R$%.2f. O valor da compra é R$%.2f.\n", desconto, valorCompra - desconto);
    } else {
        printf("Não há desconto aplicável. O valor final da compra é R$%.2f.\n", valorCompra);
    }

    return 0;
}