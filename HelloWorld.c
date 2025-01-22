#include <stdio.h>
#include <math.h>

int main() {
    int x, y;
    char name[25];

    printf("CALCULADORA DE POTÊNCIAS\n");
    printf("Digite o valor da base: ");
    scanf("%d", &x);
    printf("Digite o valor do expoente: ");
    scanf("%d", &y);
    getchar(); //clear new line char from buffer
    printf("A potência com a base %d e expoente %d é igual a: %0.lf\n", x, y, pow(x,y));
    printf("Qual seu nome?");
    fgets(name, sizeof(name), stdin);
    printf("\nOlá, %s", name);

    return 0;
}
