#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    int pop;
    float area, dp, pib, pibper;
    int pt;

    printf("Digite a populacao: ");
    scanf("%d", &pop);
    printf("Sua populacao: %d\n", pop);

    printf("Digite a area: ");
    scanf("%f", &area);
    printf("Sua area: %.2f\n", area);
    
    printf("Digite O PIB(soma dos bens): ");
    scanf("%f", &pib);
    printf("PIB: %.2f\n", pib);
    
    printf("Digite quantos pontos turisticos existe: ");
    scanf("%d", &pt);
    printf("Seu ponto turistico: %d\n", pt);
    
    dp = pop / area;
    pibper = pib / pop;

    printf("populacao:%d \n area:%.2f \n PIB: %.2f \n pontos turistico:%d \n Densidade Populacional: %.2f \n PIB per Capita %.2f", pop , area, pib, pt, dp,pibper);


    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    return 0;
}
