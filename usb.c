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
        printf(" vous devez payer %.2f euros",p1);
    }
    else
    {
        float p2;
        p2 = nombre*prix*0.80;
        printf("Vous devez payer %.2f euros",p2);
    }
}

/** Correction

main()
{
    int nbCles;
    float prixTotal, pu=4.9;

    printf("Combien de cles voulez-vous ?");
    scanf("%d", &nbCles);

    prixTotal = nbCles * pu;

    if(nbCles >= 10)
    {
        prixTotal = prixTotal * 0.8;
    }
    printf("\n\nVous me devez %.2f euros", prixTotal);
}
**/
