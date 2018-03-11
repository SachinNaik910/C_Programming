/*a.c*/
#include <stdio.h>
void b(void);
 
int z = 987; //rule -1
int y = 222; //rule -2
int x;       //rule -3
int main()
{
    x = 2016;
    b();
    printf("x = %d \t y =%d z = %d",x, y, z);
    return 0;
}/*a.c*/

