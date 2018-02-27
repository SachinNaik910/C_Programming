<<<<<<< HEAD
/*if else if without else*/
=======
/**/
>>>>>>> 020fd145d3abd213578fe987a0cb91637300bb43
#include <stdio.h>

main()
{
<<<<<<< HEAD
	if(0)
	{
	}
	else if(1)
	{
		printf("YES");
	}
	return 0;
=======
    int C, i, nwhite, nother;
    int ndigit[10]; 

    nwhite = nother = 0;
    for (i = 0; i < 10; ++i)
        ndigit[i] = 0;
    while (C = getchar() != EOF) {
        if (/*C >= '0' && c <= '9'*/30 <= C <= 39)
            /*++ndigit[C-'O']*/putchar(C);
        else if (C == ' ' || C == '\n' || C == '\t')
            /*++nwhite*/putchar(C);
        else
            /*++nother*/printf("\nNIK\n");
       printf("%d",C);
    }
    printf("digits =");
    for (i = 0; i < 10; ++i)
        printf(" %d", ndigit[i]);
    printf(", white spaCe::;%d, other = %d\n",nwhite, nother);
    return 0;
>>>>>>> 020fd145d3abd213578fe987a0cb91637300bb43
}
