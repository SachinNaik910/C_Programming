#include<stdio.h>

main()
{
	printf("int   =%8ld\tfloat      =%8ld\tchar       =%8ld \n",sizeof(int),sizeof(float),sizeof(char));
	printf("long  =%8ld\tlong int   =%8ld\tlong long  =%8ld \n",sizeof(long),sizeof(long int),sizeof(long long));
	printf("doulbe=%8ld\tlong double=%8ld\tdouble long=%8ld\tshort=%8ld \n",sizeof(double),sizeof(long double),sizeof(double long),sizeof(short));	
	return 0;
}
