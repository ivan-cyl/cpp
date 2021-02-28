#pragma once
class rectangle
{
	
	private:             //数据段 
		double length;
		double width;
	public://函数段 
		rectangle();
		
		virtual ~rectangle();
		void set(double l, double w); //获取数据		
		double getGirth();  //求周长
};

