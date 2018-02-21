/* width and precsion */
#include <stdio.h>
 
#define INT 5 /*Should be in capital letters*/
#define FLOAT 5.67
#define CHAR  'N'
#define STRING "Ritchie"
#define MAX(a,b) (a>b)?a:b /*This is also called as MACRO*/
//#define
 
main()
{
	printf("INT=%d FLOAT=%d CHAR=%c STRING=%s MAXIMUN=%d",INT,FLOAT,CHAR,STRING,MAX(5698,3452));
}
