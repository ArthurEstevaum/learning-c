#include <stdio.h>
#include <math.h>

int main() {
    double cathetus1, cathetus2;

    printf("Digite o valor dos catetos: ");
    //printf("Digite o valor do segundo cateto: ");
    scanf("%lf %lf", &cathetus1, &cathetus2);
    printf("O valor da hipotenusa de um triângulo retângulo de catetos %.2lf e %.2lf é %.2lf\n", cathetus1, cathetus2, hypot(cathetus1, cathetus2));
    
    return 0;
}