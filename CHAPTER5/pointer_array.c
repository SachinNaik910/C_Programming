#include <stdio.h>

main()
{
	int a[5] = {5, 1, 2, 3, 4};
	int *p;
	float *pa;
	p = a;
	pa = a;
	//*(a+5) = 6;
	printf("%d %f %d %d %d", *p, *pa, *a, *(a+100),*(++p));
	
	return 0;
}
