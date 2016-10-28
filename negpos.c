// les deux valeurs sont de même signe ou pas

int main()
{
    int num1;
    int num2;

    printf("Entrez 2 entiers");
    scanf("%d &d", &num1, &num2);
    ;

    if ( (num1 < 0 && num2 < 0) || (num1 > 0 && num2 > 0))
    {
        printf("Les nombres sont du meme signe");
    }
    else
        printf("Les nombres ne sont pas du meme signe");
}
