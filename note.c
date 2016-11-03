int main()
{
    int note;

    printf("Entrez votre note\n");
    scanf("%d", &note);

  /*  if ( note == 10)
    {
        printf("Passable");
    }
    else if (note == 12)
    {
        printf("Assez bien");
    }
    else if (note == 14)
    {
        printf("Bien");
    }
    else if (note == 16)
    {
        printf("Tres bien");
    }
    else if (note == 18)
    {
        printf("FELICITATIONS DU JURY");
    }
    else if (note == 20)
    {
        printf("FELICITATIONS DU JURY");
    }*/








    switch(note)
{
        case 10 : printf("Passable");
            break;
        case 12 : printf("Assez bien");
            break;
        case 14 : printf("Bien");
            break;
        case 16 : printf("Tres bien");
            break;
        case 18 :
        case 20 : printf("FELICITATIONS DU JURY");
            break;
        default : printf("Ta race");
}
}
