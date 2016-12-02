int main()
{
    int tab [] = {1,25,-2,9,7,8,0,25,25,12};
    int i, j, k;
    k =0;
    printf("Entrez une valeur \n");
    scanf("%d", &j);
    for (i = 0; i <10 ; i++)
    {

        if (tab[i] == j)
        {
            k++;
            printf("La valeur %d est presente en position %d\n",j,i+1);
        }
    }
    printf("%d apparait %d fois dans le tableau\n",j,k);
}
