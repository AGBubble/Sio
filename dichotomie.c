#include <stdio.h>

int main()
{
	int a[20] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
	int val; /* valeur à rechercher */
	int pos; /* position de la valeur */
	int n = 20; /* dimension du tableau */
	int i; /* indice courant */
	int inf, mil, sup; /* limites du champ de recherche */
	
	
	printf("Valeur a rechercher");
	scanf("%d", &val);
	
	/* Affichage du tableau */
	
	for(i = 0 ; i < n ; i++)
	{
		printf("%d ",a[i]);
	}
	
	/* Initialisation des limites du domaine de recherche */
	
	inf = 0;
	sup = n - 1;
	
	/* Recherche de la position de la valeur */
	
	pos = -1;
	while ((inf <= sup) && (pos == -1))
	{
		mil = (sup+inf)/2;
		if (val < a[mil])
		{
			sup= mil - 1; 
		}
		else if (val > a[mil])
		{
			inf = mil + 1;
		}
		else
			pos = mil;
	}
	
	/* Edition du resultat */
	
	if (pos == -1)
	{
		printf("La valeur recherchee ne se trouve pas dans le 		tableau. \n");
	}
	else
	{
		printf("La valeur du tableau se trouve a la position %d", 		pos);
	}
}