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
	{printf("�´���");
}
	else if (guess < magic)
	{
		printf("��С��");
}
	else
	{
		printf("�¶��ˣ���");
	}
	} while (guess != magic);
	printf("������%d", magic);
	return 0;
}