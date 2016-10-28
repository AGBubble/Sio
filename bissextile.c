/*/
si div par 4 BISS
si div par 4 par 100 pas BISS
si div 4 et par 100 et par 400 BISS

/*/

int main()
{
    int anno;

    printf("Entrez l'annee\n");
    scanf("%d", &anno);

    if (anno % 4 == 0)
    {

        if (anno % 100 == 0)
        {

            if (anno% 400 == 0)
            {
                printf("BISSEXTILE");
            }
            else
                printf(" PAS BISSEXTILE");
        }
        else
            printf("BISSEXTILE");


    }
    else
        printf("PAS BISSEXTILE");




}
