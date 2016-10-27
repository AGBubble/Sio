main ()
{
    int age;

        printf("Entrez votre age");
        scanf("%d", &age);

    if(age >=18 && age <=65)
    {
        printf("\nBienvenue");
    }
    else
    {
        printf("Age non conforme");
    }

}
