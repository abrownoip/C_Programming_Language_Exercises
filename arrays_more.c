// Character Information //

#include <stdio.h>

main()
{
	// Declare and assign variables //
	// c for character, i for counter, nwhite for white spaces, nother for anything not digits or white space //
	// ndigit for digits //
	int c = 0, i = 0, nwhite = 0, nother = 0;
	int ndigit[10];

	nwhite = nother = 0;
	for ( i=0; i<10 ; ++i)
		ndigit[i] = 0;

	while((c = getchar()) != EOF)
		if(c >= '0' && c <= '9')
			++ndigit[c-'0'];
		else if (c == ' ' || c == '\n' || c == '\t')
			++nwhite;
		else
			++nother;

	printf("digits = ");
	for(i = 0; i < 10; ++i)
		printf("%d", ndigit[i]);
	printf(", white space = %d, other = %d\n", 
		nwhite, nother);
}