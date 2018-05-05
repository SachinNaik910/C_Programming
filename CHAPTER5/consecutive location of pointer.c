#include <stdio.h>

main()
{
	int *p;
	char *pa;
	int a[2] = {1, 2, 3};
	char b[2] = "the";
	p = a;
	printf("%d %d", p, (p+1));
	pa = b;
	printf("\t%d %d", pa, (pa+1));
}
