#include <stdio.h>

int main (){
    
    // Variaveis da primeira carta
    char estado;
    char codigoDc[4];
    char nome[20];
    unsigned long int populacao;
    int Pturisticos;
    float area , pib;
    float densidade1, pibCapita1, superPoder1;
  
    // Variaveis da segunda carta
    char estado2;
    char codigoDc2[4];
    char nome2[20];
    unsigned long int populacao2;
    int Pturisticos2;
    float area2 , pib2;
    float densidade2, pibCapita2, superPoder2;

    // Entrada da primeira carta
    printf("Digite uma letra de A-H para a carta 1 (representando um dos oito estados): \n");
    scanf(" %c" , &estado);
    printf("Digite o código de sua carta (ex: A01,B02..): \n");
    scanf("%s", codigoDc);
    printf("Digite o nome da cidade (ex: Bahia):\n");
    scanf("%s", nome);
    printf("Digite o número de habitantes: \n");
    scanf("%lu", &populacao);
    printf("Digite a área (km²): \n");
    scanf("%f", &area);
    printf("Pib (Bilhões de reais): \n");
    scanf("%f", &pib);
    printf("Pontos turísticos: \n");
    scanf("%d", &Pturisticos);

    // cálculos carta 1
    densidade1 = (float)populacao / area;
    pibCapita1 = (pib * 1000000000.0f) / (float)populacao;
    superPoder1 = (float)populacao + area + (pib * 1000000000.0f) + (float)Pturisticos + pibCapita1 + (1.0f / densidade1);

    // Entrada da segunda carta
    printf("Digite uma letra de A-H para a carta 2 (representando um dos oito estados): \n");
    scanf(" %c" , &estado2);
    printf("Digite o código de sua carta (ex: A01,B02..): \n");
    scanf("%s", codigoDc2);
    printf("Digite o nome da cidade (ex: Ceará):\n");
    scanf("%s", nome2);
    printf("Digite o número de habitantes: \n");
    scanf("%lu", &populacao2);
    printf("Digite a área (km²): ");
    scanf("%f", &area2);
    printf("Pib (Bilhões de reais): ");
    scanf("%f", &pib2);
    printf("Pontos turísticos: ");
    scanf("%d", &Pturisticos2);

    // cálculos carta 2
    densidade2 = (float)populacao2 / area2;
    pibCapita2 = (pib2 * 1000000000.0f) / (float)populacao2;
    superPoder2 = (float)populacao2 + area2 + (pib2 * 1000000000.0f) + (float)Pturisticos2 + pibCapita2 + (1.0f / densidade2);

    printf("\n");

    // Exibição da carta 1
    printf("Carta 1 \n");
    printf("Estado: %c\n" , estado);     
    printf("Código: %s\n" , codigoDc);
    printf("Nome da cidade: %s\n", nome);
    printf("População: %lu\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("Pib: %.2f Bilhões de reais\n", pib);
    printf("Pontos turísticos: %d\n", Pturisticos);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pibCapita1);
    printf("Super Poder: %.2f\n", superPoder1);
    
    printf("\n");

    // Exibição da carta 2
    printf("Carta 2 \n");
    printf("Estado: %c\n" , estado2);     
    printf("Código: %s\n" , codigoDc2);
    printf("Nome da cidade: %s\n", nome2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("Pib: %.2f Bilhões de reais\n", pib2);
    printf("Pontos turísticos: %d\n", Pturisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pibCapita2);
    printf("Super Poder: %.2f\n", superPoder2);

    printf("\n");

    // Comparações
    printf("Comparação de Cartas:\n");
    printf("População: Carta 1 venceu (%d)\n", populacao > populacao2);
    printf("Área: Carta 1 venceu (%d)\n", area > area2);
    printf("PIB: Carta 1 venceu (%d)\n", pib > pib2);
    printf("Pontos Turísticos: Carta 1 venceu (%d)\n", Pturisticos > Pturisticos2);
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", densidade1 < densidade2); // menor vence
    printf("PIB per Capita: Carta 1 venceu (%d)\n", pibCapita1 > pibCapita2);
    printf("Super Poder: Carta 1 venceu (%d)\n", superPoder1 > superPoder2);

    printf("\n");
    
    return 0;
}
