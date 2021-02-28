#include<iostream>
#include "rectangle.h"
using namespace std;
int main()
{
	rectangle re; //定义一个自己的类 
	int x, y;
	cout << "请输入长：";
	cin >> x;
	cout << "请输入宽：";
	cin >> y;
	re.set(x, y);   //输入数据 
	double girth;
	girth = re.getGirth();    //调用类中的函数 
	cout << "矩形的周长" << girth << endl; //输出周长和面积 
	return 0;
}