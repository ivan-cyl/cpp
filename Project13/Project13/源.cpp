#include <stdio.h>
#include <stdlib.h>
int main()
{
int i, j;
printf("请输入i的值：");
scanf_s("%d", &i);
for (j = 2; j < i; ++i)
{
	if (i%j == 0)
		break;
}
if (i < j)
{printf("i不是素数"); 
}
else
{
	printf("i是素数");
}
system("pause");
return 0;
}

