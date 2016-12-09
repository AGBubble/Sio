#include <stdio.h>
#include <stdlib.h>

int main()
{
	float tab[15];
	int i;
	
	// Saisir le tableau 
	for (i = 0 ; i <= 15 ; i++)
	{
		printf("Case %d\n", i);
		scanf("%f", &tab[i]);
	}
	
	// Afficher le tableau
	printf("\nVoici le tableau\n");
	
	for (i = 0 ; i <= 15 ; i++)
	{
		printf("%d  %.0f |",i, tab[i]);
	}
	
	//Recherche du min max
	int min =0, max = 0;
	
	for (i = 0 ; i < 15 ; i++)
	{
		if ( tab[i] > tab[max])
		{
			max = i;
		}
		if (tab[i] < tab[min])
		{
			min = i;
		}
	}
	
	printf("\n min = %.2f a la case %d\n max = %.2f a la case %d", tab[min], min, tab[max], max);
	float moy, somme = 0; 
	for (i = 0 ; i < 15 ; i++)
		{
			if (i == min || i == max)
			{
				i++;
			}
			somme = somme + tab[i];
			moy = somme / 15;
		}		
	
	printf("\n\nsomme = %.0f", somme);
	printf("\nmoyenne = %.3f", moy);
}