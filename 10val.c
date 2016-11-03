/*
Entrez 10 entiers
Afficher la Somme
3 variables max
*/

int main ()
{
    int i = 0;
    int j;
    int k = 0;


    while (i < 10)
    {
        printf("Entrez 1 valeur\n");
        scanf("%d", &j);

    k = k +j;

        i++;
    }
    printf("%d", k);
}
