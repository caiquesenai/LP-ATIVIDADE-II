#include <stdio.h>
#include <stdlib.h>

int main() {

int numero; 
int totalNumeros;
int contadorPares = 0;
int contadorImpares = 0;
float somaPares = 0; 
float somaImpares = 0;
int i;



printf("Digite a quantidade de numeros a serem inseridos: ");
scanf("%d", &totalNumeros);

    for ( i = 0; i < totalNumeros; i++) {

printf("Digite o numero %d: ", i + 1);
scanf("%d", &numero);

    if (numero % 2 == 0) {
     
        contadorPares++;
        somaPares += numero;
        
    } else {
            
        contadorImpares++;
        somaImpares += numero;
    }
    }

    if (contadorPares > 0) {
        printf("Quantidade de números pares: %d\n", contadorPares);
        printf("Média aritmética dos numeros pares: %.2f\n", somaPares / contadorPares);
    } else {
        printf("Nenhum número par foi digitado!\n");
    }

    if (contadorImpares > 0) {
        printf("Quantidade de números ímpares: %d\n", contadorImpares);
        printf("Média aritmética dos numeros ímpares: %.2f\n", somaImpares / contadorImpares);
    } else {
        printf("Nenhum número ímpar foi digitado!\n");
    }

    return 0;
}