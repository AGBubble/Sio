/* Exercice 1 */

int main()
{
    int nb1; /* On déclare des variables pour chaque nombre que l'on doit entrer*/
    int nb2;

    printf("Entrez deux nombres\n");
    scanf("%d %d", &nb1, &nb2); /*  La fonction qui va nous permettre d'entrer des valeurs */

    int pdt = nb1 * nb2; /* La variable qui contiendra le produit */

    printf("%d", pdt);

    /* LE PROGRAMME AVEC DES REELS
    float nb1;
    float nb2;

    printf("Entrez deux nombres\n");
    scanf("%f %f", &nb1, &nb2);

    float pdt = nb1 * nb2;

    printf("%.2f", pdt);
    */
}
