/*
��Ŀ���ݣ�

����������Shape, 
���д��麯��printName�����������ͼ�ε����ƺ���Ӧ�ĳ�Ա���ݡ����麯��printArea�������㼸��ͼ�ε����������Shape��������5�������ࣺCircle��Բ�Σ������ݳ�ԱΪ�뾶��Square(������) 
�����ݳ�ԱΪ�߳���Rectangle(������) �����ݳ�ԱΪ���Ϳ�Trapezoid(����) �����ݳ�ԱΪ�ϵס��µ׺͸ߡ�Triangle(������) 
�����ݳ�ԱΪ�׺͸ߡ����Թ��̣�����һ��ָ������ָ�����飬ʹ��ÿ��Ԫ��ָ��һ����̬��������������󣬷ֱ������Ӧ�ĳ�Ա������ʾ��������ͼ�ε����Լ������������������ֵ��


�����ʽ:

��������Բ�뾶�������α߳��������γ��������ϵ��µ׺͸ߡ������εױߺ͸ߣ���Ϊʵ����


�����ʽ��

��ο��������������ֱ�Ӹ��������еĲ�������ճ�����Լ��Ĵ��롣Բ����ȡ 3.14159

ע������еı����š��ո�

����������

10
5
2 4
1 2 3
4 3


���������

Բ:�뾶=10,���:314.159
������:�߳�=5,���:25
������:��=2,��=4,���:8
����:�ϵ�=1,�µ�=2,��=3,���:4.5
������:�ױ�=4,��=3,���:6
�����:357.659


ʱ�����ƣ�500ms�ڴ����ƣ�32000kb
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
		cout<<"Բ:�뾶="<<radius<<",";
	}
	double printArea()
	{
		double area = 3.14159*radius*radius;
		cout<<"���:"<<area<<endl;
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
		cout<<"������:�߳�="<<width<<",";
	}
	double printArea()
	{
		double area = width*width;
		cout<<"���:"<<area<<endl;
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
		cout<<"������:��="<<length<<","<<"��="<<width<<",";
	}
	double printArea()
	{
		double area = length*width;
		cout<<"���:"<<area<<endl;
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
		cout<<"����:�ϵ�="<<upside<<","<<"�µ�="<<downside<<","<<"��="<<height<<",";
	}
	double printArea()
	{
		double area = (upside + downside)*height/2;
		cout<<"���:"<<area<<endl;
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
		cout<<"������:�ױ�="<<downside<<","<<"��="<<height<<",";
	}
	double printArea()
	{
		double area = downside*height/2;
		cout<<"���:"<<area<<endl;
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
		//*(p + i)->printName(); //�ᱨ��! ��ȷ��ʽ��(*(p + i))->printName();
		p[i]->printName();
		//Area += (*(p + i))->printArea();
		Area += p[i]->printArea();
	}
	cout<<"�����:"<<Area<<endl;
	return 0;
}
