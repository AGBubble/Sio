// L'utilisateur doit donner numéro du département et dire si il habite en ile de france ou pas

int main()
{
    int numDep;
    printf("Entrez le nemero de votre departement");
    scanf("%d", &numDep);

    if (numDep == 75 || numDep == 77 || numDep == 78)
    {
        printf(" wsh wsh cousin Mafia k'1 k'1");
    }
    else if (numDep >= 91 && numDep <= 95)
    {
        printf("wsh wsh cousin Mafia k'1 k'1");
    }
    else
    {
        printf("Vous n'etes pas francilien");
    }

}
