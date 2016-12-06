#include <stdio.h>
#include <string.h>

main()
{
	int i;
	int longueur;
	char verbe[20];
	char racine[20];
	char pronom[5];
	char term[5];
	
	
	printf("Entrez un verbe du premier groupe\n");
	gets(verbe);
	
	longueur = strlen(verbe);
	
	if (verbe[longueur-2] != 'e' )
	{
		printf("ERREUR !! Entrez un verbe du premier groupe\n");
		gets(verbe);
	}
	
	for (i = 0 ; i < longueur - 2 ; i++)
	{
			racine[i] = verbe[i];
	}
	
	for (i = 1 ; i < 7 ; i++)
	{
		switch(i)
		{
			case 1 :
				if (*racine == 'a' || *racine == 'e' || *racine == 'i' ||
				 *racine == 'o' || *racine == 'u' || *racine == 'y')
					{
						strcpy(pronom,"J\'");
					}
				else
					{
						strcpy(pronom,"Je");
					}
					
					strcpy(term, "e");
					break;
				
			case 2 : 
				strcpy(pronom,"Tu");
				strcpy(term, "es");
				break;
			
			case 3 : 
				strcpy(pronom,"Il");
				strcpy(term, "e");
				break;
				
			case 4 : 
				strcpy(pronom,"Nous");
				if (verbe[longueur - 3] == 'g')
					{
						strcpy(term, "eons");
					}
				else
					{
						strcpy(term, "ons");
					}
				break;
				
			
			case 5 : 
				strcpy(pronom,"Vous");
				strcpy(term, "ez");
				break;
			
			case 6 : 
				strcpy(pronom,"Ils");
				strcpy(term, "ent");
				break;
		}
		printf("\n%s %s%s\n",pronom,racine,term);
	}
	
	return 0;
	
	
}
