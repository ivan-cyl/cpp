#include<iostream>
#include "rectangle.h"
using namespace std;
int main()
{
	rectangle re; //����һ���Լ����� 
	int x, y;
	cout << "�����볤��";
	cin >> x;
	cout << "�������";
	cin >> y;
	re.set(x, y);   //�������� 
	double girth;
	girth = re.getGirth();    //�������еĺ��� 
	cout << "���ε��ܳ�" << girth << endl; //����ܳ������ 
	return 0;
}