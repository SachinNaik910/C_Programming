#include <stdio.h>
#define forever for (;;)

#define PRINTK(A, B) printf("\nPRINTK(%d, %d)\n", A, B)
#define max(A, B) ((A) > (B) ? (A) : (B))

#undef getchar

#define dprint(expr) printf(#expr " = %g\n", expr)  // is == printf("x/y" " = &g\n", x/y); is cancatenated to = printf("x/y = &g\n", x/y); i,e # == ""

#define VALUE 0

int getchar(void) 
{
	printf("header");
}

main()
{
	char a;
	int b, i = 2, j = 3;
	int m = 1, n = 2;
	a = max('2', '3');
	putch(a);
	
	PRINTK(m++ , n++);
	b = max(i++, j++);
	printf("\nmax(%d, %d) = %d\ti = %d\tj = %d",b, i, j, i, j);
	
	#ifdef VALUE
	  printf("\n VALUE is defined\n");
	#endif
	
	//forever; infinite loop
	return 0;
}
