#include<stdio.h>
#include<stdlib.h>
int main()
{
	int numb;/*����һ������*/
	int abc;/*����������������ֵ*/
	printf("������������");
	scanf_s("%d", &numb);/*����������ֵ*/
	if (numb > 0)abc = numb;
	else abc = -numb;
	printf("%d�ľ���ֵ��%d\n", numb, abc);
	system("pause");
	return 0;
}