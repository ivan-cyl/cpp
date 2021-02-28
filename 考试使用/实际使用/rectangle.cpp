#include "rectangle.h"
#include<iostream>
using namespace std;

rectangle::rectangle()
{

}
void rectangle::set(double l, double w) //获取数据
{
	length = l;
	width = w;
}
double rectangle::getGirth()  //求周长
{
	return 2 * (length + width);
}
rectangle::~rectangle()
{

}
