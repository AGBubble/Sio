int main()
{
    int tab[] = {1,25,-2,9,7,8,0,25,25,12};
    int i, j, temp;
    temp = 0;
    for (i = 0, j = 9; i < 5; i++, j--)
    {
        temp = tab[i];
        tab[i] = tab[j];
        tab[j] = temp;
    }
    for (i = 0 ; i < 10 ; i++)
    {
        printf("%d ", tab[i]);
    }


}
