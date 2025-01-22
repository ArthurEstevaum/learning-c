#include <stdio.h>
#include <math.h>

int main() {
    const double PI = 3.14159;
    double radius;

    printf("Digite o valor do raio do círculo: ");
    scanf("%lf", &radius);
    printf("A área do círculo é: %lf\n", PI * pow(radius, 2));
    
    return 0;
}