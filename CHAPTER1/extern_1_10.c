#include <stdio.h>
int var;
int notextern;
int global;

main()
{
    extern int var;
    int notextern;
    printf("01:var value=%d notextern=%d global=%d\n",var,notextern,global);
    var++;notextern++;global++;
    printf("02:var value=%d notextern=%d global=%d\n",var,notextern,global);
    foo();
    printf("05:var value=%d notextern=%d global=%d\n",var,notextern,global);
}

foo()
{
    extern int var;
    int notextern;
    printf("03:var value=%d notextern=%d global=%d\n",var,notextern,global);
    var++;notextern++;global++;
    printf("04:var value=%d notextern=%d global=%d\n",var,notextern,global);
    return 0;
}
