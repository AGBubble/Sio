int main()
{
    /*int i, j, k;

    for(i=10;i>0;i--)
    {
        printf("ligne numero %d\n", i);
        for (j =1; j<=3; j++)
        {
            printf("Bonjour %d \n", j);
        }

    }
    return 0;*/

    int i, j;
    printf("Veuillez entrer un nombre\n");
    scanf("%d", &i);
    for (j = 1; j <= i ; j++)
    {
        if (i%j == 0)
        {
            printf("%d est diviseur de %d\n", j, i);
        }
    }
}
