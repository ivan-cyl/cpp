#include <stdio.h>
#include <stdlib.h>
int main()
{
int i, j;
printf("������i��ֵ��");
scanf_s("%d", &i);
for (j = 2; j < i; ++i)
{
	if (i%j == 0)
		break;
}
if (i < j)
{printf("i��������"); 
}
else
{
	printf("i������");
}
system("pause");
return 0;
}

