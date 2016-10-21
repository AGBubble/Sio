#include<stdio.h>

main()
{
    int age;

    printf("Veuillez entrer votre age :");
    scanf("%d", &age); // & = adresse de, donc on enregistre la valeur de la saisie à l'adresse de la variable age
    printf("\n \n Vous avez %d ans", age);
}
