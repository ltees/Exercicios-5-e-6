#include <stdio.h>
#include <math.h>


int main() {
    float a, b, c, delta, x1, x2;


    printf("Digite o valor de a (diferente de zero): ");
    scanf("%f", &a);


    if (a == 0) {
        printf("Nao e equacao de segundo grau.\n");
    } else {
        printf("Digite o valor de b: ");
        scanf("%f", &b);
        printf("Digite o valor de c: ");
        scanf("%f", &c);


        delta = b*b - 4*a*c;


        if (delta < 0) {
            printf("Nao existe raiz.\n");
        } else if (delta == 0) {
            x1 = -b / (2*a);
            printf("Raiz unica: %.2f\n", x1);
        } else {
            x1 = (-b + sqrt(delta)) / (2*a);
            x2 = (-b - sqrt(delta)) / (2*a);
            printf("Duas raizes reais: %.2f e %.2f\n", x1, x2);
        }
    }

}
