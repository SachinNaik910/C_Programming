#include <stdio.h>
//#include "calci.h"

main()
{
	float a,b,val;
	char ch;
	printf("Enter two no for\n");
	scanf("%f %f",&a, &b);
	
	printf("Which operation would you like to be performed on above no:\n");
	printf("1:ADDTION\n2:SUBTRACTION\n3:MULTIPLICATION\n4:DIVISION\n");
	scanf(" %c", &ch);
	printf("%d\n",ch);
	
	switch(ch){
		case '1':
			val = addition(a, b);
			printf("%f + %f = %f\n", a, b, val);
		    break;
		case '2':
			val = subtraction(a, b);
			printf("%f - %f = %f\n", a, b, val);
		    break;
		case '3':
			val = multiplication(a, b);
			printf("%f x %f = %f\n", a, b, val);
			break;
		case '4':
			val = division(a, b);
			printf("%f / %f = %f\n", a, b, val);
			break;
		default:
			printf("Wrong input\n\n");
			break;
	}
}
