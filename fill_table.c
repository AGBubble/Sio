int main()
{
    int tab[10];
    int i;

    for (i = 0; i < 10; i++)
    {
        printf("Entrez une valeur svp\n");
        scanf("%d", &tab[i]);
    }
    printf("\n\n\t\t Affichage du tableau\n\n");
    for (i = 0; i< 10; i++)
    {
        printf("%d", tab[i]);
        printf(" | ");
    }
}
