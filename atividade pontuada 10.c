#include <stdio.h>
#include <stdlib.h>

int main() {
float num1;
float num2;
float resultado;
char operacao;


printf("Digite o primeiro numero: ");
scanf("%f", &num1);

printf("Digite o segundo numero: ");
scanf("%f", &num2);

 printf("Informe a operação desejada (+ ou -): ");
 scanf(" %c", &operacao);

switch (operacao) {
    case '+':
     resultado = num1 + num2;
     printf("Resultado da adição e: %.2f\n", resultado);
        break;
    
    case '-':
     resultado = num1 - num2;
     printf("Resultado da subtração e: %.2f\n", resultado);
        break;
        
        default:
        printf("Operaçao invalida!\n");
        
            break;
}

    return 0;
}