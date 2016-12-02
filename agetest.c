int main ()
{
    int age;

    printf("Entrez votre age : ");
    scanf("%d", &age);

    while (age < 0 || age > 120)
    {
        printf("\nErreur, resaisir votre age :");
        scanf("%d", &age);
    }
}

