/*Display each word in new line*/
#include <stdio.h>
#define INIT 'a'

main()
{
	char ch, lastch;
	int word_count=0;
	lastch = INIT;
	for(ch = getchar(); ch != EOF; ch = getchar()) {
		if(ch != ' ') 
			putchar(ch);
		else if(ch == ' ' && lastch != ' ')                // for many space
			putchar('\n');
		lastch = ch;
		
	}
	printf("word count = %d",word_count);
}
