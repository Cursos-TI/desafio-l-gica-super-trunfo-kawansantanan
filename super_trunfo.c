#include <stdio.h>

int main()
{
    printf("carta 1\n");

    char estadoA;
    char codigoA;
    char nomeA;
    int populacaoA;
    float areaA;
    float pibA;
    int pontosturisticosA;
   

    printf("estado: ");
    scanf("%s", &estadoA);
    printf("codigo da carta: ");
    scanf("%s", &codigoA);
    printf("nome da cidade: ");
    scanf("%s", &nomeA);
    printf("população: ");
    scanf("%d", &populacaoA);
    printf("área em Km: ");
    scanf("%f", &areaA);
    printf("pib: ");
    scanf("%f", &pibA);
    printf("pontos turísticos: ");
    scanf("%d", &pontosturisticosA);

    double densidadepopulacionalA = populacaoA / areaA;
    double pibpercapitaA = pibA / populacaoA;

    printf("densidade populacional : %.2f\n", densidadepopulacionalA);
    printf("pib per capita : %.2f\n", pibpercapitaA);

    double superpoderA = populacaoA + areaA + pibA + densidadepopulacionalA + pibpercapitaA;
    printf("super poder : %.2f\n", superpoderA);

    printf("\n");

    char estadoB;
    char codigoB;
    char nomeB;
    int populacaoB;
    float areaB;
    float pibB;
    int pontosturisticosB;
   

    printf("carta 2\n");

    printf("estado: ");
    scanf("%s", &estadoB);
    printf("codigo da carta: ");
    scanf("%s", &codigoB);
    printf("nome da cidade: ");
    scanf("%s", &nomeB);
    printf("população: ");
    scanf("%d", &populacaoB);
    printf("área em Km: ");
    scanf("%f", &areaB);
    printf("pib:");
    scanf("%f", &pibB);
    printf("pontos turísticos: ");
    scanf("%d", &pontosturisticosB);

    double densidadepopulacionalB = populacaoB / areaB;
    double pibpercapitaB = pibB / populacaoB;

    printf("densidade populacional : %.2f\n", densidadepopulacionalB);
    printf("pib per capita : %.2f\n", pibpercapitaB);

    double superpoderB = populacaoB + areaB + pibB + densidadepopulacionalB + pibpercapitaB;
    printf("super poder : %.2f\n", superpoderB);

    printf("\n");

    if (populacaoA > populacaoB){
        printf("População: Carta 1 venceu\n");
    }else{
        printf("População: Carta 2 venceu\n");

    }

    if ( areaA > areaB ){
        printf("Área: Carta 1 venceu\n");
    }else{
        printf("Área: Carta 2 venceu\n");

    }

    if (pibA > pibB){
        printf("Pib: Carta 1 venceu\n");
    }else{
        printf("Pib: Carta 2 venceu\n");

    }

    if (pontosturisticosA > pontosturisticosB){
        printf("Pontos turísticos: Carta 1 venceu\n");
    }else{
        printf("Pontos turísticos: Carta 2 venceu\n");

    }

    if (densidadepopulacionalA < densidadepopulacionalB){
        printf("Densidade populacional: Carta 1 venceu\n");
    }else{
        printf("Densidade populacional: Carta 2 venceu\n");

    }

    if (pibpercapitaA > pibpercapitaB){
        printf("Pib per capita: Carta 1 venceu\n");
    }else{
        printf("Pib per capita: Carta 2 venceu\n");

    }
    
    if (superpoderA > superpoderB){
        printf("Super poder: Carta 1 venceu\n");
    }else{
        printf("Super poder: Carta 2 venceu\n");

    }

   return 0;
}
