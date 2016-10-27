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
    else if (nombre >=10 && nombre <=20)
    {
        float p2;
        float rem = 0;
        p2 = nombre*prix*0.80;
        rem = p2*0.2;
        printf("Vous devez payer %.2f euros",p2);
        printf("\n\n\nvous avez %.2f euros de remise",rem);

    }
    else
    {
        float p3;
        float rem1 = 0;
        p3 = nombre*prix*0.70;
        rem1 = p3*0.3;
        printf("Vous devez payer %.2f euros",p3);
        printf("\n\n\nvous avez %.2f euros de remise",rem1);
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

    if(nbCles >= 20)
    {
        prixTotal = prixTotal * 0.7;
    }

    else if(nbCles >= 10)
    {
        prixTotal = prixTotal * 0.8;
    }
    printf("\n\nVous me devez %.2f euros", prixTotal);
}
**/
