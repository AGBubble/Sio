/* 
Ecrire un programme qui echange deux entiers saisis

*/

int main()
{
    int nb1;
    int nb2;

    printf("Entrez deux nombres\n");
    scanf("%d %d", &nb1, &nb2);
    printf("%d %d\n", nb1, nb2); /* On affiche les nombres saisis*/

    int temp; /* On initialise une variable temporaire*/ 

    temp = nb1; /* La var temporaire prend la valeur de nb1*/
    nb1 = nb2; /* nb 1 prend nb2 */
    nb2 = temp; /* nb 2 prend temp donc nb1 a l'origine*/

    printf("%d %d", nb1, nb2);

}
