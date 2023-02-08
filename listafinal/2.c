int main()
{
    float chico = 1.70;
    float juca = 1.10;
    int anos = 0;

    while (juca <= chico)
    {
        chico += 0.02;
        juca += 0.03;
        anos++;
    }

    printf("Serão necessários %d anos para Juca ser maior que Chico.\n", anos);

    return 0;
}
