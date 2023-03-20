#include <stdio.h>
#define PASTE(A,B) A##B

int main()
{
	int ab = 20;
	int bd = 30;
	printf("%d %d\n", PASTE(a,b), PASTE(b,d));
	return 0;
}
