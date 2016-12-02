int main ()
{
    int tab[3] = {1,2,3};
    int i;
    for (i = 0 ; i < 3 ; i++)
    {
        printf("%d", *(tab+i));
    }
}
