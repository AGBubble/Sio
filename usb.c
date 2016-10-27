main()
{
    float prix;
    int nombre;
    prix = 4.90;

    printf("Combien de cles voulez vous ?");
    scanf("%d", &nombre);

    if (nombre < 10)
    {
        float p1;
        p1 = nombre*prix;
        printf(" vous devez payer %f",p1);
    }
    else
    {
        float p2;
        p2 = nombre*prix*0.80;
        printf("Vous devez payer %f",p2);
    }
}
