#include <stdio.h>
#include <stdlib.h>

int main() {
    
    
int numero, i, flag = 0;

printf("Digite um numero inteiro: ");
scanf("%d", &numero);

if (numero <= 1) {
printf("Este número não é primo\n");
return 0;
}

for (i = 2; i <= numero / 2; ++i) {
if (numero % i == 0) {
flag = 1;
break;
}
}

switch (flag) {
case 0:
    printf("Este número é primo\n");
        break;
    default:
      printf("Este número não é primo\n");
       break;
    }

    return 0;
}