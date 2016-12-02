#include <myconio.h>
int main()
{
    int i = 0;
    while(i < 16)
    {
        Sleep(500);
        gotoxy(i, i);
        textcolor(i);
        printf("Hello World");
        i++;
    }


}
