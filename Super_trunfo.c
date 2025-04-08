int main() {

    char EstadoA[50];
    char CodigoA[50];
    char CidadeA[50];
    unsigned int PopulacaoA;
    long double AreaA;
    long double PIBA;
    int TurismoA;
    // Densidade populacional
    long double DPA;
    //PIB per capita
    long double PPCA;
    int ResultadoA;

    char EstadoB[50];
    char CodigoB[50];
    char CidadeB[50];
    unsigned int PopulacaoB;
    long double AreaB;
    long double PIBB;
    int TurismoB;
    // Densidade populacional
    long double DPB;
    //PIB per capita
    long double PPCB;
    int ResultadoB;

    printf ("*** Carta A ***\n");

    printf ("Digite o Nome do Estado: ");
    scanf ("%s", &EstadoA);

    printf ("Digite o Código da carta: ");
    scanf ("%s", &CodigoA);

    printf ("Digite o Nome da cidade: ");
    scanf ("%s", &CidadeA);

    printf ("Digite o número populacional: ");
    scanf ("%u", &PopulacaoA);

    printf ("Digite a área do estado em km²: ");
    scanf ("%.3lf", &AreaA);

    printf ("Digite o PIB: ");
    scanf ("%.3lf", &PIBA);

    printf ("Digite o Número de pontos turísticos: ");
    scanf ("%d", &TurismoA);

    printf ("Nome do Estado: %s\n", EstadoA);

    printf ("Código da carta: %s\n", CodigoA);

    printf ("Nome da cidade: %s\n", CidadeA);

    printf ("População: %u\n", PopulacaoA);

    printf ("Área do estado em km²: %.3lf\n", AreaA);

    printf ("PIB: %.3lf\n", PIBA);

    printf ("Número de pontos turísticos: %d\n", TurismoA);

    DPA = (float)(PopulacaoA / AreaA);
    printf ("Densidade populacional: %.3lf\n", DPA);

    PPCA = (float)(PIBA / PopulacaoA);
    printf ("PIB per capita: %.3lf\n", PPCA);

    printf ("*** Carta B ***\n");

    printf ("Digite o Nome do Estado: ");
    scanf ("%s", &EstadoB);

    printf ("Digite o Código da carta: ");
    scanf ("%s", &CodigoB);

    printf ("Digite o Nome da cidade: ");
    scanf ("%s", &CidadeB);

    printf ("Digite o número populacional: ");
    scanf ("%u", &PopulacaoB);

    printf ("Digite a área do estado em km²: ");
    scanf ("%.3lf", &AreaB);

    printf ("Digite o PIB: ");
    scanf ("%.3lf", &PIBB);

    printf ("Digite o Número de pontos turísticos: ");
    scanf ("%d", &TurismoB);

    printf ("Nome do Estado: %s\n", EstadoB);

    printf ("Código da carta: %s\n", CodigoB);

    printf ("Nome da cidade: %s\n", CidadeB);

    printf ("População: %u\n", PopulacaoB);

    printf ("Área do estado em km²: %.3lf\n", AreaB);

    printf ("PIB: %.3lf\n", PIBB);

    printf ("Número de pontos turísticos: %d\n", TurismoB);

    DPB = (float)(PopulacaoB / AreaB);
    printf ("Densidade populacional: %.3lf\n", DPB);

    PPCB = (float)(PIBB / PopulacaoB);
    printf ("PIB per capita: %.3lf\n", PPCB);

    printf ("*** Pontuação ***\n");

    ResultadoA = PPCA > PPCB;
    ResultadoB = DPA > DPA;

    printf ("O PPCA comparado ao PPCA tem o valor de %d\n",PPCA, ResultadoA);
    printf ("O DPA comparado ao DPB tem o valor de %d\n",ResultadoB);

    return 0;
}

    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.