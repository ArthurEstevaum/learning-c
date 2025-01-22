#include <stdio.h>

int main() {
    const double PI = 3.14159;
    double radius;

    printf("Digite o valor do raio do círculo: ");
    scanf("%lf", &radius);
    printf("O valor da circunferência é: %2lf\n", 2 * PI * radius);

    return 0;
}