int main ()
{
    char nom [5][20];
    char nom2 [20];
    int i;
    int t =0;

    for (i = 0 ; i < 5 ; i ++)
    {
        printf("\nEntrez un nom :");
        gets(nom[i]);
    }
    printf("\nVotre nom est il dans la base ? ");
    gets(nom2);
    for (i = 0 ; i < 5 ; i++)
    {
        if (strcmp(nom[i], nom2) == 0)
        {
            printf("le nom est dans la base, il se trouve a la ligne %d", i+1);
            t++;
            break;
        }
        else
            printf("Pas a la ligne %d\n", i+1);
    }
    if (t != 1)
    {
        printf("Le nom n'est pas dans la base");
    }

}
