int main()
{
    int nb1;
    int nb2;

    printf("Entrez deux nombres\n");
    scanf("%d %d", &nb1, &nb2);
    printf("%d %d\n", nb1, nb2);

    int temp;

    temp = nb1;
    nb1 = nb2;
    nb2 = temp;

    printf("%d %d", nb1, nb2);

}
