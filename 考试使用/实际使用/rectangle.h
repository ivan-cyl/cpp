#pragma once
class rectangle
{
	
	private:             //���ݶ� 
		double length;
		double width;
	public://������ 
		rectangle();
		
		virtual ~rectangle();
		void set(double l, double w); //��ȡ����		
		double getGirth();  //���ܳ�
};

