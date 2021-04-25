#include <stdio.h>
#include <stdlib.h>
int main()
{
	float m = 0.8, day = 1, numb = 0, numbs = 0,n=2;
	for (day = 1; numbs < 100; ++day)
	{
		numbs += n;
		n *= 2;
	}
	numb = (numbs*m) / (day - 1);
	printf("平均每天开销%.2f", numb);
}