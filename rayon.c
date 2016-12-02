#include <stdio.h>
#include <stdlib.h>

double Volume(double );

int main ()
{
    double resultat = 0;

    resultat = Volume(5.0);
    printf("%lf", resultat);
    return 0;
}

double Volume(double R)
{
    double res;
    res = (4* 3.1415) / 3 * (R * R * R);
    return res;
}
