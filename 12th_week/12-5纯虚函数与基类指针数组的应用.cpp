/*
题目内容：

定义抽象基类Shape, 
其中纯虚函数printName（）输出几何图形的名称和相应的成员数据、纯虚函数printArea（）计算几何图形的面积。并由Shape类派生出5个派生类：Circle（圆形），数据成员为半径、Square(正方形) 
，数据成员为边长、Rectangle(长方形) ，数据成员为长和宽、Trapezoid(梯形) ，数据成员为上底、下底和高、Triangle(三角形) 
，数据成员为底和高。测试过程，定义一个指向基类的指针数组，使其每个元素指向一个动态产生的派生类对象，分别调用相应的成员函数显示各个几何图形的属性及面积，最终输出总面积值。


输入格式:

依次输入圆半径、正方形边长、长方形长宽、梯形上底下底和高、三角形底边和高，均为实数。


输出格式：

请参考输出样例，建议直接复制样例中的部分文字粘贴进自己的代码。圆周率取 3.14159

注意输出中的标点符号、空格。

输入样例：

10
5
2 4
1 2 3
4 3


输出样例：

圆:半径=10,面积:314.159
正方形:边长=5,面积:25
长方形:长=2,宽=4,面积:8
梯形:上底=1,下底=2,高=3,面积:4.5
三角形:底边=4,高=3,面积:6
总面积:357.659


时间限制：500ms内存限制：32000kb
*/

#include<iostream>
using namespace std;

class Shape
{
public:
	virtual void printName() = 0;
	virtual double printArea() = 0;
};

class Circle : public Shape
{
private:
	double radius;
public:
	Circle(double r = 0): radius(r){}
	void printName()
	{
		cout<<"圆:半径="<<radius<<",";
	}
	double printArea()
	{
		double area = 3.14159*radius*radius;
		cout<<"面积:"<<area<<endl;
		return area;
	}
};

class Square : public Shape
{
private:
	double width;
public:
	Square(double w = 0): width(w){}
	void printName()
	{
		cout<<"正方形:边长="<<width<<",";
	}
	double printArea()
	{
		double area = width*width;
		cout<<"面积:"<<area<<endl;
		return area;
	}
};

class Rectangle : public Shape
{
private:
	double length, width;
public:
	Rectangle(double l = 0, double w = 0): length(l), width(w){}
	void printName()
	{
		cout<<"长方形:长="<<length<<","<<"宽="<<width<<",";
	}
	double printArea()
	{
		double area = length*width;
		cout<<"面积:"<<area<<endl;
		return area;
	}
};

class Trapezoid : public Shape
{
private:
	double upside, downside, height;
public:
	Trapezoid(double u = 0, double d = 0, double h = 0): upside(u), downside(d), height(h){}
	void printName()
	{
		cout<<"梯形:上底="<<upside<<","<<"下底="<<downside<<","<<"高="<<height<<",";
	}
	double printArea()
	{
		double area = (upside + downside)*height/2;
		cout<<"面积:"<<area<<endl;
		return area;
	}
};

class Triangle : public Shape
{
private:
	double downside, height;
public:
	Triangle(double d = 0, double h = 0): downside(d), height(h){}
	void printName()
	{
		cout<<"三角形:底边="<<downside<<","<<"高="<<height<<",";
	}
	double printArea()
	{
		double area = downside*height/2;
		cout<<"面积:"<<area<<endl;
		return area;
	}
};

int main()
{
	double Area = 0, r, squ_w, rec_l, rec_w, tra_u, tra_d, tra_h, tri_d, tri_h;
	cin>>r>>squ_w>>rec_l>>rec_w>>tra_u>>tra_d>>tra_h>>tri_d>>tri_h;
	Shape * p[5] = {new Circle(r), new Square(squ_w), new Rectangle(rec_l, rec_w), new Trapezoid(tra_u, tra_d, tra_h), new Triangle(tri_d, tri_h)};
	for (int i = 0; i < 5; i++)
	{
		//*(p + i)->printName(); //会报错! 正确形式：(*(p + i))->printName();
		p[i]->printName();
		//Area += (*(p + i))->printArea();
		Area += p[i]->printArea();
	}
	cout<<"总面积:"<<Area<<endl;
	return 0;
}
