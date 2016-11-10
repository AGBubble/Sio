/*
Afficher un menu

1 - Calcul clé USB
2 - jeu + ou moins
3 - Somme des 10 nbs
4 - BISSEXTILE
5 - Quitter
*/

#include <stdio.h>
#include <time.h>
#include <stdlib.h>
void trouver() // A chaque fois que je fais un void qquechose() ca veut dire que je declqre une fonction dans laquelle je mets le code du programme
{
    int x;
    int y;
    int i = 0;

    srand(time(NULL));

    x = rand()%100 + 1;

    while (y != x && i <= 6)
    {
        printf("Entrez une valeur en 1 et 100\n");
        scanf("%d", &y);
        if (y < x)
        {
            printf("\nC'est plus grand\n");
        }
        if (y > x)
        {
            printf("\nC'est plus petit\n");
        }
        i++;
    }
    if (x == y)
    {
        printf("GAGNE");
    }
    else
    {
        printf("PERDU");
    }
}

void summ10()
{
    int i = 0;
    int j;
    int k = 0;


    while (i < 10)
    {
        printf("Entrez 1 valeur entre 1 et 100\n");
        scanf("%d", &j);
        while (j < 1 || j > 100)
        {
            printf("\nErreur, resaisir votre valeur :");
            scanf("%d", &j);
        }
        k = k +j;

        i++;
    }
    printf("La somme des 10 chiffres est %d", k);
}

void bissextile()
{
    int anno; /* Une variable pour l'annee qu'on veut savoir bissextile*/ 

    printf("Entrez l'annee\n");
    scanf("%d", &anno);

    if (anno % 4 == 0) /*  anno modulo 4 = 0 -> anno est divisible par 4*/ 
    { /* 1ere boucle : si oui on rentre dans la suivante*/

        if (anno % 100 == 0)  
        { /* 2eme boucle : si oui on rentre dans la suivante */ 

            if (anno% 400 == 0)
            { /* 3eme boucle si oui on affiche ceci*/
                printf("BISSEXTILE");
            }
            else /* 3eme boucle : sinon on affiche ceci */
                printf(" PAS BISSEXTILE");
        }
        else /* 2eme boucle : sinon on affiche ceci  */
            printf("BISSEXTILE");


    }
    else /* 1 ere boucle : sinon on affiche ceci */
        printf("PAS BISSEXTILE");
	
}

void usb()
{
    float prix;
    int nombre;
    prix = 4.90;

    printf("Combien de cles voulez vous ?");
    scanf("%d", &nombre);

    if (nombre < 10)
    {
        float p1;
        p1 = nombre*prix;
        printf(" vous devez payer %.2f euros",p1);
    }
    else if (nombre >=10 && nombre <=20)
    {
        float p2;
        float rem = 0;
        p2 = nombre*prix*0.80;
        rem = p2*0.2;
        printf("Vous devez payer %.2f euros",p2);
        printf("\n\n\nvous avez %.2f euros de remise",rem);

    }
    else
    {
        float p3;
        float rem1 = 0;
        p3 = nombre*prix*0.70;
        rem1 = p3*0.3;
        printf("Vous devez payer %.2f euros",p3);
        printf("\n\n\nvous avez %.2f euros de remise",rem1);
    }
}

/*
Afficher un menu

1 - Calcul clé USB
2 - jeu + ou moins
3 - Somme des 10 nbs
4 - BISSEXTILE
5 - Quitter
*/

int main () // On va appeler les fonctions que j'ai declarees dans la fonction principale main() le programme va lire cette fonction pour fair emarcher le menu
{
	int choix;
	
	while (choix != 5)
	{
		printf("\n\nChoisissez votre programme:\n\n1 - Calcul cle USB\n 2 - jeu + ou -\n 3 - Somme de 10 nombres\n 4 - Bissextile\n 5 - QUITTER\n");
		scanf("%d", &choix);
		
	    switch(choix) // Je demande a chaque cas correspondant a la valeur de choix d'appeler une des fonctions ecrites plus haut
		{
	        case 1 : usb();
	            break;
	        case 2 : trouver();
	            break;
	        case 3 : summ10();
	            break;
	        case 4 : bissextile();
	            break;
	        case 5 : return 0;
	    }
	        
		
	}
	
}