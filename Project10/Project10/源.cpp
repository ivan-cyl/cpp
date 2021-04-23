#include <stdio.h>
#include <stdlib.h>
int main()
{
	int i, j;
	/*for (i = 1; i < 10; i++)
		printf("%4d", i);
	printf("\n-----------------------\n");*/
	for (i = 1; i < 10; i++)
	
		for (j = 1; j < 10; i++)
		{
			printf("%d*%d=%d",i,j,i*j);
		}
	printf("/n");
		/*{
			if (j != 9)
				printf("%4d", i*j);
			else
				printf("%4d\n", i*j);
		}*/
	
	return 0;
}