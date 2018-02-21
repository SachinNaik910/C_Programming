/*Func to cal blanck ,tab,newline*/
#include <stdio.h>

main()
{
   char ch;
   int space_count = 0,tab_count = 0,newline_count = 0;
   for(ch = getchar();ch != EOF; ch =getchar()){
       if(ch == ' ')
            space_count++;
       if(ch == '\t')
            tab_count++;
       if(ch == '\n'){
       	    newline_count++; 
       	    printf("space count=%d  tab count=%d newline count=%d\n",space_count,tab_count,newline_count);	  
	   }
   }
   return 0;
}
