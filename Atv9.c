#include <stdio.h>

 main() {
    float salarioAtual, salarioReajustado, bonus = 0;
    int tempoServico;

    printf("Digite o valor do salário atual do funcionário: ");
    scanf("%f", &salarioAtual);

    printf("Digite o tempo de serviço do funcionário (em anos): ");
    scanf("%d", &tempoServico);

    if (salarioAtual <= 500) {
        salarioReajustado = salarioAtual * 1.25; // Aumento de 25%
        if (tempoServico < 1) {
            bonus = 0; // Sem bônus
        }
    } else if (salarioAtual <= 1000) {
        salarioReajustado = salarioAtual * 1.2; // Aumento de 20%
        if (tempoServico >= 1 && tempoServico <= 3) {
            bonus = 100; // Bônus de R$100
        }
    } else if (salarioAtual <= 1500) {
        salarioReajustado = salarioAtual * 1.15; // Aumento de 15%
        if (tempoServico >= 4 && tempoServico <= 6) {
            bonus = 200; // Bônus de R$200
        }
    } else if (salarioAtual <= 2000) {
        salarioReajustado = salarioAtual * 1.1; // Aumento de 10%
        if (tempoServico >= 7 && tempoServico <= 10) {
            bonus = 300; // Bônus de R$300
        }
    } else {
        salarioReajustado = salarioAtual; // Sem reajuste
        if (tempoServico > 10) {
            bonus = 500; // Bônus de R$500
        }
    }

    salarioReajustado += bonus;

    if (salarioReajustado == salarioAtual) {
        printf("O funcionário não tem direito a aumento.\n");
    } else {
        printf("Salário reajustado: %.2f\n", salarioReajustado);
    }

    
}