/* EOF */
#include <stdio.h>

main()
{
   char c;
   while((c = getchar()) != EOF){
      putchar(c);                    /*EOF is define in stdio.h as macro #define EOF (-1)*/
      printf("\nEOF=%d\n",EOF);      /*EOF print will come twice because char+Enter we type*/
   }
   return 0;
} 
