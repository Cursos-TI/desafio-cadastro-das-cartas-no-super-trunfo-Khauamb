int main() {

    char Estado[50];
    char Codigo[50];
    char Cidade[50];
    int Populacao;
    float Area;
    float PIB;
    int Turismo;
    int numero1 = Populacao, numero2 = Area, DP;
    int numero1 = Populacao, numero2 = PIB, PPC;

    printf ("Carta A\n");

    printf ("Digite o Nome do Estado: ");
    scanf ("%s", &Estado);

    printf ("Digite o Código da carta: ");
    scanf ("%s", &Codigo);

    printf ("Digite o Nome da cidade: ");
    scanf ("%s", &Cidade);

    printf ("Digite o número populacional: ");
    scanf ("%d", &Populacao);

    printf ("Digite a área do estado em km²: ");
    scanf ("%f", &Area);

    printf ("Digite o PIB: ");
    scanf ("%f", &PIB);

    printf ("Digite o Número de pontos turísticos: ");
    scanf ("%d", &Turismo);

    printf ("Nome do Estado: %s\n", Estado);

    printf ("Código da carta: %s\n", Codigo);

    printf ("Nome da cidade: %s\n", Cidade);

    printf ("População: %d\n", Populacao);

    printf ("Área do estado em km²: %f\n", Area);

    printf ("PIB: %f\n", PIB);

    printf ("Número de pontos turísticos: %d\n", Turismo);

    printf ("Número de pontos turísticos: %d\n", Turismo);

    printf ("Número de pontos turísticos: %d\n", Turismo);



    printf ("Carta B\n");

    printf ("Digite o Nome do Estado: ");
    scanf ("%s", &Estado);

    printf ("Digite o Código da carta: ");
    scanf ("%s", &Codigo);

    printf ("Digite o Nome da cidade: ");
    scanf ("%s", &Cidade);

    printf ("Digite o número populacional: ");
    scanf ("%d", &Populacao);

    printf ("Digite a área do estado em km²: ");
    scanf ("%f", &Area);

    printf ("Digite o PIB: ");
    scanf ("%f", &PIB);

    printf ("Digite o Número de pontos turísticos: ");
    scanf ("%d", &Turismo);

    printf ("Nome do Estado: %s\n", Estado);

    printf ("Código da carta: %s\n", Codigo);

    printf ("Nome da cidade: %s\n", Cidade);

    printf ("População: %d\n", Populacao);

    printf ("Área do estado em km²: %f\n", Area);

    printf ("PIB: %f\n", PIB);

    printf ("Número de pontos turísticos: %d\n", Turismo);

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