int main()
{
    float tot, rem = 0,port, pap, pu,tsp, totsr;
    int nbCles;



    printf("Combien voulez de cles ?");
    scanf("%d", &nbCles);
    tsp = nbCles * 4.90;

    if (tsp >= 500)
    {
        totsr = tsp;
    }
    else if (tsp > 95)
    {
        totsr = tsp + tsp* .10;
    }
    else
    {
        totsr = tsp + 9.50;
    }

    if (tsp > 245)
    {
        tot = tsp *.5+ totsr;
    }


    printf("vous devez payer %.2f", tot);

}
