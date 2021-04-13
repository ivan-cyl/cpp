#include<stdio.h>
#include<stdlib.h>
int main()
{
	int numb;/*代表一个整数*/
	int abc;/*代表运算结果：绝对值*/
	printf("请输入整数：");
	scanf_s("%d", &numb);/*输入整数的值*/
	if (numb > 0)abc = numb;
	else abc = -numb;
	printf("%d的绝对值是%d\n", numb, abc);
	system("pause");
	return 0;
}