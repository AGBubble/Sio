/*
    Trouver une valeur entre 0 et 100
*/

#include <time.h>
/*int main ()
{
    int x;
    int y;
    int i = 0;

    srand(time(NULL));

    x = rand()%100 + 1;

    while (i <= 6)
    {
        printf("Entrez une valeur entre 1 et 100\n");
        scanf("%d", &y);
        if ( y < x)
        {
            printf("C'est plus grand\n");
            i++;
        }
        else if (y > x)
        {
            printf("C'est plus petit\n");
            i++;
        }
        else if (y == x)
        {
            printf("BRAVO");
            break;
        }

    }
    if ( y != x)
    {
        printf("Perdu");
    }
            return 0;
}*/

int main ()
{
    int x;
    int y;
    int i = 0;

    srand(time(NULL));

    x = rand()%100 + 1;

    while (y != x && i <= 6)
    {
        printf("Entrez une valeur en 1 et 100\n");
        scanf("%d", &y);
        if (y < x)
        {
            printf("\nC'est plus grand\n");
        }
        if (y > x)
        {
            printf("\nC'est plus petit\n");
        }
        i++;
    }
    if (x == y)
    {
        printf("GAGNE");
    }
    else
    {
        printf("PERDU");
    }
}
