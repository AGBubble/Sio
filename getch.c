#include <myconio.h>

int main()
{
    char lettre;
    int x = 0, y = 0, i = 0, j =0;
    gotoxy(x,y);

    for (i = 0 ; i < 10 ; i++)
    {
        for (j = 0 ; j < 10 ; j++)
        {
            printf("-");
        }
        printf("\n");
    }
    while (lettre != 27)
    {
        lettre = getch();
        if (lettre == -32)
        {
            lettre = getch();
            switch(lettre)
            {
                case 77 :
                    if (x < 9)
                    {
                        x++;
                        gotoxy(x,y);

                    }
                    break;

                case 75 :
                    if (x > 0)
                    {
                        x--;
                        gotoxy(x,y);

                    }
                    break;
                case 72 :
                    if (y > 0)
                    {
                        y--;
                        gotoxy(x,y);
                    }
                    break;
                case 80 :
                    if (y < 9)
                    {
                        y++;
                        gotoxy(x,y);
                    }
                    break;
            }
        }
    }
}
