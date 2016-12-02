#include <time.h>
#include <string.h>
int main()
{
    char nom2[5][20] = {"fenetre", "bois","fleur","planete","coeur"};
    char nom[20];
    char nom3[20];
    int i;
    int j;
    char lettre;
    srand(time(NULL));

    int x = rand()%5;

    strcpy(nom, nom2[x]);

    printf("%s\n", nom);

    printf("%d\n", strlen(nom));

    for (i = 0 ; i < strlen(nom) ; i++)
    {
        nom3[i] = '-';
    }
    nom3[i] = '\0';
    printf("\n%s", nom3);
    while (strcmp(nom,nom3) != 0)
    {
        printf("\n\nEntrez une lettre\n");
        lettre = getch();
        j++;
        for (i = 0 ; i < strlen(nom)+1 ; i++)
        {
            if(lettre == nom[i])
            {
                nom3[i] = lettre;

            }
        }
        printf("%s",nom3);
    }
}
