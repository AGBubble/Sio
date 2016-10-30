/* Ecrire un programme qui affiche le plus grand de 5 entiers saisis */

#include <stdio.h>

int main ()
{
	
	int table[5]; /* Initialise un tableau de taille 5*/
	int i = 0; /* variable qui va servir de compteur dans le tableau */
	int max; 
	
	table[0] = 56; /* les valeurs de chaque case dans le tableau */
	table[1] = 654;
	table[2] = 684698;
	table[3] = 6874;
	table[4] = 564;
	
	for (i = 0 ; i < 5 ; i++ ) /* on met le compteur i devant la case 0, tant que i est plus petit 5 on fait i+1 a chaque tour de boucle */
		
	{
		if (table[i] > table[max]) /* si la valeur dans la case numero i est plus grande que la valeur dans la case numero max (vide a l'origine) */
		{
			max = i; /* la valeur de max prendra la valeur de i */ 
		}
		
	}
	printf("%d", table[max]); /* on affiche la valeur representee par un entier qui est contenue par la case max*/ 
}