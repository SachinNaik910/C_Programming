#include<stdio.h>
main()
{
	printf("int=%d\tfloat=%d\tchar=%d \n",sizeof(int),sizeof(float),sizeof(char));
	printf("long=%d\tlong int=%d\tlong long=%d \n",sizeof(long),sizeof(long int),sizeof(long long));
	printf("doulbe=%d\tlong double=%d\tdouble long=%d\tshort=%d",sizeof(double),sizeof(long double),sizeof(double long),sizeof(short));	
	return 0;
}
