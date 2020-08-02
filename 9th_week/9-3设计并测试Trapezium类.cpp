/*
题目内容：

设计并测试一个名为Trapezium的梯形类，其属性为梯形的四个顶点的坐标。该梯形上边和下边均和x轴平行。
根据类的封装性要求，在类的声明中用8个私有的整型变量表示4个点的坐标值，声明成员函数initial(int,int,int,int,int,int,int,int)初始化数据成员，函数GetPosition(int&,int&,int&,int&,int&,int&,int&,int&)读取坐标值，函数Area()计算面积。


输入格式:

梯形四个顶点的坐标，依次为左上(x1,y1)、右上(x2,y2)、左下(x3,y3)和右下(x4,y4)角的顶点。


输出格式：

梯形的面积


输入样例：

3 2 5 2 1 -4 7 -4



输出样例：

24

时间限制：500ms内存限制：32000kb
*/ 

#include<iostream>
using namespace std;

class Trapezium
{
	private:
		int x1, y1, x2, y2, x3, y3, x4, y4;
	
	public:
		void initial(int X1, int Y1, int X2, int Y2, int X3, int Y3, int X4, int Y4);
		// 我没搞懂题目里让怎么定义 GetPosition，测试中也没用到 
		void GetPosition(int&, int&, int&, int&, int&, int&, int&, int&);
		int Area()
		{
			return (x2 - x1 + x4 - x3)* (y1 - y3)/2;
		}
}; 

void Trapezium::initial(int X1, int Y1, int X2, int Y2, int X3, int Y3, int X4, int Y4)
{
	x1 = X1;
	y1 = Y1;
	x2 = X2;
	y2 = Y2;
	x3 = X3;
	y3 = Y3;
	x4 = X4;
	y4 = Y4;
	return;
}

int main()
{
	int x_1, y_1, x_2, y_2, x_3, y_3, x_4, y_4;
	cin>>x_1>>y_1>>x_2>>y_2>>x_3>>y_3>>x_4>>y_4;
	Trapezium t;
	t.initial(x_1, y_1, x_2, y_2, x_3, y_3, x_4, y_4);
	cout<<t.Area();
	return 0;
}
