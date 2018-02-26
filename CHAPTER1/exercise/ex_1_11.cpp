#include <stdio.h
main()
{
	for(ch = getchar() ;ch != EOF ;ch = getchar()) {
		if((64 < ch < 91 || 96 < ch < 123 ) {
			word_count++;
		}
	}
	printf("word count = %d",word_count);
}
