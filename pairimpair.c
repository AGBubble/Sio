//
//  pairimpair.c
//  
//
//  Created by aina on 30/10/16.
//  Copyright © 2016 aina. All rights reserved.
//

#include "pairimpair.h"
#include "stdio.h"

    int main ()
{
    int nombre;
    
    printf("Entrez un entier\n");
    scanf("%d", &nombre);
    
    if (nombre % 2 == 0)
    {
        printf("PAIR\n");
    }
    else
        printf("IMPAIR\n");
    
}
