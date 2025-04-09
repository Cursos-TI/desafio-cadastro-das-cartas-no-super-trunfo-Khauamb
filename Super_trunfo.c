#include <stdio.h>

int main() {

    char EstadoA[50];
    char CodigoA[50];
    char CidadeA[50];
    int PopulacaoA;
    float AreaA;
    float PIBA;
    int TurismoA;
    // Densidade populacional
    float DPA;
    //PIB per capita
    float PPCA;
    char EstadoB[50];
    char CodigoB[50];
    char CidadeB[50];
    int PopulacaoB;
    float AreaB;
    float PIBB;
    int TurismoB;
    // Densidade populacional
    float DPB;
    //PIB per capita
    float PPCB;

    printf ("*** Carta A ***\n");

    printf ("Digite o Nome do Estado: ");
    scanf ("%s", &EstadoA);

    printf ("Digite o Código da carta: ");
    scanf ("%s", &CodigoA);

    printf ("Digite o Nome da cidade: ");
    scanf ("%s", &CidadeA);

    printf ("Digite o número populacional: ");
    scanf ("%d", &PopulacaoA);

    printf ("Digite a área do estado em km²: ");
    scanf ("%f", &AreaA);

    printf ("Digite o PIB: ");
    scanf ("%f", &PIBA);

    printf ("Digite o Número de pontos turísticos: ");
    scanf ("%d", &TurismoA);

    printf ("Nome do Estado: %s\n", EstadoA);

    printf ("Código da carta: %s\n", CodigoA);

    printf ("Nome da cidade: %s\n", CidadeA);

    printf ("População: %d\n", PopulacaoA);

    printf ("Área do estado em km²: %f\n", AreaA);

    printf ("PIB: %f\n", PIBA);

    printf ("Número de pontos turísticos: %d\n", TurismoA);

    DPA = (float)(PopulacaoA / AreaA);
    printf ("Densidade populacional: %f\n", DPA);

    PPCA = (float)(PIBA / PopulacaoA);
    printf ("PIB per capita: %f\n", PPCA);

    printf ("*** Carta B ***\n");

    printf ("Digite o Nome do Estado: ");
    scanf ("%s", &EstadoB);

    printf ("Digite o Código da carta: ");
    scanf ("%s", &CodigoB);

    printf ("Digite o Nome da cidade: ");
    scanf ("%s", &CidadeB);

    printf ("Digite o número populacional: ");
    scanf ("%d", &PopulacaoB);

    printf ("Digite a área do estado em km²: ");
    scanf ("%f", &AreaB);

    printf ("Digite o PIB: ");
    scanf ("%f", &PIBB);

    printf ("Digite o Número de pontos turísticos: ");
    scanf ("%d", &TurismoB);

    printf ("Nome do Estado: %s\n", EstadoB);

    printf ("Código da carta: %s\n", CodigoB);

    printf ("Nome da cidade: %s\n", CidadeB);

    printf ("População: %d\n", PopulacaoB);

    printf ("Área do estado em km²: %f\n", AreaB);

    printf ("PIB: %f\n", PIBB);

    printf ("Número de pontos turísticos: %d\n", TurismoB);

    DPB = (float)(PopulacaoB / AreaB);
    printf ("Densidade populacional: %f\n", DPB);

    PPCB = (float)(PIBB / PopulacaoB);
    printf ("PIB per capita: %f\n", PPCB);

    printf ("*** Pontuação ***\n");

    printf ("A PopulaçãoA comparado a PopulaçãoB tem valor maior? %d\n", PopulacaoA > PopulacaoB);
    printf ("A AreaA comparado a AreaB tem valor maior? %d\n", AreaA > AreaB);
    printf ("O PIBA comparado ao PIBB tem valor maior? %d\n", PIBA > PIBB);
    printf ("O TurismoA comparado ao TurismoB tem valor maior? %d\n", TurismoA > TurismoB);
    printf ("O PPCA comparado ao PPCB tem valor maior? %d\n", PPCA > PPCB);
    printf ("A DPA comparado a DPB tem valor menor? %d\n", DPA < DPB);
    printf ("O Super poder da carta A comparado a Carta B é maior? %d\n", (PopulacaoA + AreaA + PIBA + TurismoA + PPCA + 1/DPA) > (PopulacaoB + AreaB + PIBB + TurismoB + PPCB + 1/DPB) );

    return 0;
}