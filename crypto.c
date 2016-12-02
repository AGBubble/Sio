/*
Cryptez une phrase qui remplacera la lettre de la phrase par la suivante dans l'alphabet

*/

int main ()
{
    char phrase[100];
    gets(phrase);
    /*char crypto[100]
    gets(crypto)*/

    int i;

    for (i = 0 ; i =! '\0' ; i++)
    {
        if phrase[i] >= 'a' && phrase[i] < 'z'
        {
            phrase[i]++;
        }
        else if phrase[i] == 'z'
        {
            phrase[i] == 'a';
        }
    }





}
