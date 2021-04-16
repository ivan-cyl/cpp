#include<stdio.h>
void main()
{
	int numb, abc;
	scanf_s("%d", &numb);
	if (numb > 0) abc = numb;
	else abc = -numb;
	printf("%d的绝对值为%d\n", numb, abc);
}