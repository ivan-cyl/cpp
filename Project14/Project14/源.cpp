#include <stdio.h>
#include <stdlib.h>
int main()
{
	int months,c;
	int	days[] = {31,28,31,30,31,30,31,30,31,30,31,30};
	do {
		printf("请输入月份：");
		c=scanf_s("%d",&months);

	} while (months < 1 || months>12);
	printf("%d月有%d天",c,days[months] );
	return 0;
}