#include <stdio.h>

int main ()
{
    char phrase[100];
    char phrase1[100];
    int i,j;

    printf("Entrez une phrase A : ");
    gets(phrase);
    printf("Entrez une autre phrase B :");
    gets(phrase1);

    for (i = 0 ; phrase[i] != '\0' ; i++)
    {
        if (phrase[i] >= 97 && phrase[i] <= 122)
        {
            phrase[i] -= 32;

        }
    }
    i = 0;
    for (i = 0 ; phrase1[i] != '\0' ; i++)
    {
        if (phrase1[i] >= 97 && phrase1[i] <= 122)
        {
            phrase1[i] -= 32;

        }
    }
    i = 0;
    j = 0;
    while (phrase[i] != '\0' || phrase1[j] != '\0')
    {
        if (phrase[i] < phrase1[j])
        {
            printf("La phrase A est la première");
            return 0;
        }
        else if (phrase[i] == phrase1[j])
        {
            i++;
            j++;
        }
        else
        {
            printf("La phrase B est la première");
            return 0;
        }

    }



}
