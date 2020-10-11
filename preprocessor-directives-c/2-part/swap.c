#include <stdio.h>

void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp; 
}

#define SWAP(x, y) \
	do {           \
		int temp;  \
		temp = x;  \
		x = y;     \
   		y = temp;  \
	} while(0)

int main(int argc, char *argv[])
{
	int a, b;
	a = 3;
	b = 5;

	printf("Before swapping, a = <%d>, b = <%d>\n", a, b);

	if (a > b)
		SWAP(a, b);
	else
		printf("Not swapping");

	for (long i = 0 ; i < 1000000001L ; ++i)
		SWAP(a, b);


	printf("After swapping, a = <%d>, b = <%d>\n", a, b);

	return 0;
}
