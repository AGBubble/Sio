#include <stdio.h>

int main()
{
	int table[50];
	int dim;
	int i;
	int max;
	int min;
	
	printf("Donnez une taille au tableau : \n"); /* Determiner la taille du tableau */ 
	scanf("%d", &dim);
	
	printf("Entrez les valeurs du tableau\n");
	for (i = 0 ; i < dim ; i++) /* Entrer les valeurs du tableau */
	{
		scanf("%d", &table[i]);
	}
	printf("Voici le tableau\n");
	for (i = 0 ; i < dim ; i++)
	{
		printf("%d\n", table[i]);
	}
	for (i = 0 ; i < dim ; i++)
	{
		if ( table[i] > table[max])
		{
			max = i;
		}
		if (table[i] < table[min])
		{
			min = i;
		}
	}
	printf("La valeur maximale est : %d\n\n", table[max]);
	printf("La valeur minimale est : %d", table[min]);	
	
	return 0;
}