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

    double densidadedemograficaA = populacaoA / areaA;
    double pibpercapitaA = pibA / populacaoA;

    printf("densidade populacional : %.2f\n", densidadedemograficaA);
    printf("pib per capita : %.2f\n", pibpercapitaA);

    double superpoderA = populacaoA + areaA + pibA + densidadedemograficaA + pibpercapitaA;
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

    double densidadedemograficaB = populacaoB / areaB;
    double pibpercapitaB = pibB / populacaoB;

    printf("densidade populacional : %.2f\n", densidadedemograficaB);
    printf("pib per capita : %.2f\n", pibpercapitaB);

    double superpoderB = populacaoB + areaB + pibB + densidadedemograficaB + pibpercapitaB;
    printf("super poder : %.2f\n", superpoderB);

    printf("\n");

    if (populacaoA > populacaoB){
        printf("População: Carta 1 venceu\n");
    }else if (populacaoB > populacaoA){
        printf("População: Carta 2 venceu\n");
    }else{
        printf("População: Houve um Empate!\n");
    }

    if ( areaA > areaB ){
        printf("Área: Carta 1 venceu\n");
    }else if(areaB > areaA){
        printf("Área: Carta 2 venceu\n");
    }else{
        printf("Área: Houve um Empate!\n");
    }

    if (pibA > pibB){
        printf("Pib: Carta 1 venceu\n");
    }else if (pibB > pibA){
        printf("Pib: Carta 2 venceu\n");
    }else{
        printf("Pib: Houve um Empate!\n");
    }

    if (pontosturisticosA > pontosturisticosB){
        printf("Pontos turísticos: Carta 1 venceu\n");
    }else if (pontosturisticosB > pontosturisticosA){
        printf("Pontos turísticos: Carta 2 venceu\n");
    }else{
        printf("Pontos turísticos: Houve um Empate!\n");
    }

    if (densidadedemograficaA < densidadedemograficaB){
        printf("Densidade demográfica: Carta 1 venceu\n");
    }else if (densidadedemograficaB < densidadedemograficaA){
        printf("Densidade demográfica: Carta 2 venceu\n");
    }else{
        printf("Densidade demográfica: Houve um Empate!\n");
    }

    if (pibpercapitaA > pibpercapitaB){
        printf("Pib per capita: Carta 1 venceu\n");
    }else if (pibpercapitaB > pibpercapitaA){
        printf("Pib per capita: Carta 2 venceu\n");
    }else{
        printf("Pib per capita: Houve um Empate!\n");
    }
    
    if (superpoderA > superpoderB){
        printf("Super poder: Carta 1 venceu\n");
    }else if ( superpoderB > superpoderA){
        printf("Super poder: Carta 2 venceu\n");
    }else {
        printf("Super poder: Houve um Empate!\n");
    }


   return 0;
}
