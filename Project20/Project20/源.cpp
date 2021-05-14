#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
const int n = 100;
int isprim[n] = { 0 };
int i, j;
for (i = 2; i < sqrt(n); ++i)
{
	if (isprim[i] == 0)
		for (j=i * 2; j <= n; j += i)
			isprim[j] = 1;
}
for (i = 2; i <= n; ++i);
if (isprim[i] == 0)
{
	printf("%d", i);
}
	
}
