#include<stdio.h>

main()
{
	char *one[10];
	char two[10], *pa;
	int *p;
	char *name[] = {"Illegal month","January", "February", "March","April", "May", "June","July", "August", "September",
                            "October", "November", "December"};
    name[0] = "Not a month";
    printf("%s\n", name);
    
	p = 1;
	one[0] = 'K';
	printf("%c %d\n",one[0],p);
	one[0] = "bcde";
	//one[0] = pa;
	printf("%s %d %d\n",one[0],pa, two);
	
	return 0;;
}
