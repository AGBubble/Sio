/*/
Je souhaite appliquer un tarif degressif
Ecrire un programme
si  nbEcran < 10 ecrans = 150� l'�cran
si 10 � 49, les 9 premiers � 150 et le reste � 135
si plus de 49 les 9 premiers sont � 150 , le 10 - 49 � 135 et le reste � 110
/*/

int main()
{
    int nbEcran;
    int pap;
    int pEcran10 = 150;
    int pEcran49 = 135;
    int pEcran50 = 110;
    int papEcran10 = 1350;
    int papEcran49 = 5400;

    printf("Combien d'ecrans voulez vous ?");
    scanf("%d", &nbEcran);

    if (nbEcran < 10)
    {
        pap = pEcran10 * nbEcran;
    }
    else if (nbEcran > 10 && nbEcran <=49 )
    {
        pap = papEcran10 + pEcran49 * nbEcran;
    }
    else
    {
        pap = papEcran10 + papEcran49 + pEcran50 * nbEcran;
    }

    printf("Vous devez payer la somme de %d euros", pap);
}
