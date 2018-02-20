/*Func to cal blanck ,tab,newline*/
#include <stdio.h>

main()
{
   char ch;
   for(ch = getchar();ch != EOF; ch =getchar()){
       if(ch == ' ')
          space_count++;
       if(ch == ' ')
          tab_count++;
       if(ch == ' ')
          newline_count++; 
   }
}
