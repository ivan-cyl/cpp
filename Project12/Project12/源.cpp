#include <stdio.h>
#include<stdlib.h>
#include <time.h>
int main()
{
	int magic, guess,counter=0;
	srand(time(NULL));
	magic = rand() % 100 + 1;
	do {
	printf("please guess a magic number");
	scanf_s("%d", &guess);
	counter++;
	if (guess > magic)
	{printf("猜大了");
}
	else if (guess < magic)
	{
		printf("猜小了");
}
	else
	{
		printf("猜对了！！");
	}
	} while (guess != magic);
	printf("该数是%d", magic);
	return 0;
}