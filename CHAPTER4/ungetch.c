#include <stdio.h>
#include <ctype.h>
#include <conio.h>

void main()
{
    int c,d;
    long value;

    value = 0;
    c = getch();
    d = getch();
    printf( "c=%d d =%d\n", c,d);
    ungetch( c );
    printf( "c=%d\n", c);
    c = getch();
    printf( "c=%d\n", c);
}
