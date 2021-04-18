#include <stdio.h>
int main(void)
{
	int a=4, b=5, x;/*定义变量，分配空间。要定义数据类型*/
	x = a + b;/*变量使用。=的优先级比+低*/
	printf("%d+%d=%d", a, b, x);
}