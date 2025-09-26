#include <stdio.h>

int main (){
    
    //Variaveis da primeira carta
    char estado;
    char codigoDc[4];
    char nome[20];
    int populacao, Pturisticos;
    float area , pib;
    float densidade1, pibCapita1;
  
    //Variaveis da segunda carta
    char estado2;
    char codigoDc2[4];
    char nome2[20];
    int populacao2, Pturisticos2;
    float area2 , pib2;
    float densidade2, pibCapita2;

    //códigos para a primeira carta
    printf("Digite uma letra de A-H para a carta 1 (representando um dos oito estados): \n");
    scanf(" %c" , &estado);  // adicionado espaço para evitar bug do enter
    printf("Digite o código de sua carta (ex: A01,B02..): \n");
    scanf("%s", codigoDc);
    printf("Digite o nome da cidade (ex: Bahia):\n");
    scanf("%s", nome);
    printf("Digite o número de habitantes: \n");
    scanf("%d", &populacao);
    printf("Digite a área (km²): \n");
    scanf("%f", &area);
    printf("Pib (Bilhões de reais): \n");
    scanf("%f", &pib);
    printf("Pontos turísticos: \n");
    scanf("%d", &Pturisticos);

    // cálculos carta 1
    densidade1 = populacao / area;
    pibCapita1 = (pib * 1000000000) / populacao; // PIB está em bilhões

    //códigos para a segunda carta
    printf("Digite uma letra de A-H para a carta 2 (representando um dos oito estados): \n");
    scanf(" %c" , &estado2);
    printf("Digite o código de sua carta (ex: A01,B02..): \n");
    scanf("%s", codigoDc2);
    printf("Digite o nome da cidade (ex: Ceará):\n");
    scanf("%s", nome2);
    printf("Digite o número de habitantes: \n");
    scanf("%d", &populacao2);
    printf("Digite a área (km²): ");
    scanf("%f", &area2);
    printf("Pib (Bilhões de reais): ");
    scanf("%f", &pib2);
    printf("Pontos turísticos: ");
    scanf("%d", &Pturisticos2);

    // cálculos carta 2
    densidade2 = populacao2 / area2;
    pibCapita2 = (pib2 * 1000000000) / populacao2;

     printf("\n");  //separação do comando pra deixar bonito :p

     //Daqui para baixo é a exibição da primeira carta :D
     printf("Carta 1 \n");
     printf("Estado: %c\n" , estado);     
     printf("Código: %s\n" , codigoDc);
     printf("Nome da cidade: %s\n", nome);
     printf("população: %d\n", populacao);
     printf("Área: %.2f km²\n", area);
     printf("Pib: %.2f Bilhões de reais\n", pib);
     printf("Pontos turísticos: %d\n", Pturisticos);
     printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
     printf("PIB per Capita: %.2f reais\n", pibCapita1);
    
    printf("\n");  // mais uma separação pra deixar bonito 

    //Exibição da segunda carta :>
     printf("Carta 2 \n");
     printf("Estado: %c\n" , estado2);     
     printf("Código: %s\n" , codigoDc2);
     printf("Nome da cidade: %s\n", nome2);
     printf("população: %d\n", populacao2);
     printf("Área: %.2f km²\n", area2);
     printf("Pib: %.2f Bilhões de reais\n", pib2);
     printf("Pontos turísticos: %d\n", Pturisticos2);
     printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
     printf("PIB per Capita: %.2f reais\n", pibCapita2);

    printf("\n");
    
     return 0;

}
