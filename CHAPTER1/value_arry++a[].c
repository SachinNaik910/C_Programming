#include <stdio.h>

//int a[10];

main()
{
	int a[10];
	int i;
	//a[0] = 8;
	//memset(a,0,10*sizeof(int));
	for (i=0 ;i < 15 ;i++) {	
	    //printf("a[0]=%d ++a[0]=%d",++a[0],a[0]);
	    printf("a[%d]=%d\n",i,a[i]);
    }
	return 0;
}
