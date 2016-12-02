int main ()
{
    /*int tab[3] = {1,2,3};
    int i;
    for (i = 0 ; i < 3 ; i++)
    {
        printf("%d", *(tab+i));
    }*/

    int tab1[20];
    int tab2[10];
    int i, j , k;

    printf("Combien de valeurs dans tab 1 ? ");
    scanf("%d", &j);

    if (j > 10)
    {
        printf("ERREUR : PLUS DE 10 VALEURS\n\n");
        printf("Combien de valeurs dans tab 1 ? ");
        scanf("%d", &j);
    }
    for (i = 0 ; i < j ; i++)
        {
            printf("Entrez les valeurs");
            scanf("%d", tab1 + i);
        }

    printf("Combien de valeurs dans tab 2 ? ");
    scanf("%d", &k);

    if (k > 10)
    {
        printf("ERREUR : PLUS DE 10 VALEURS\n\n");
        printf("Combien de valeurs dans tab 2 ? ");
        scanf("%d", &k);
    }
    for (i = 0 ; i < k ; i++)
        {
            printf("Entrez les valeurs");
            scanf("%d", tab2 + i);

        }
    for (i = 0 ; i < k ; i++)
    {
        *(tab1 + j + i) = *(tab2 + i);
    }
    for (i = 0 ; i < k+j ; i++)
    {
        printf("%d ", *(tab1+i));
    }
}
