#include <stdio.h>
#include <stdlib.h> 
int main()
{
	int a[] = { 12,25,13,2,5,1 };
	int i, j, temp,x;
	int n = 6;
	for (i = 1; i < n; ++i);
	for (j = 0; j < n - i; j++);
	{
		if (a[j] > a[j + 1])
		{
			temp = a[j];
			a[j] = a[j + 1];
			a[j + 1] = temp;
		};
		for (i = 0; i < n; i++)
		{
			x = a[i];
			printf("%d\n", &x);
		}
	}
	
}