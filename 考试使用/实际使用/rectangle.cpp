#include "rectangle.h"
#include<iostream>
using namespace std;

rectangle::rectangle()
{

}
void rectangle::set(double l, double w) //��ȡ����
{
	length = l;
	width = w;
}
double rectangle::getGirth()  //���ܳ�
{
	return 2 * (length + width);
}
rectangle::~rectangle()
{

}
