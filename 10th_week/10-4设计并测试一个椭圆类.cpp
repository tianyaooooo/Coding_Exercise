/*
��Ŀ���ݣ�

��Ʋ�����һ����ΪEllipse����Բ�࣬������ΪԲ�����꼰������Ͷ̰���ĳ��ȡ����һ�����캯����Ellipse(int,int,double,double)������Щ���Խ��г�ʼ������ͨ����Ա�����������Բ�������double Area()����

S����Բ�����=PI(Բ����)��a�������ᣩ��b���̰��ᣩ
����PIȡ3.14

�����ʽ:

Բ�����ꡢ������Ͷ̰���ĳ���


�����ʽ��

��Բ�����

����������

1 1 1 2

���������

6.28

ʱ�����ƣ�500ms�ڴ����ƣ�32000kb
*/

#include<iostream>
using namespace std;

class Ellipse
{
private:
	int x, y;
	double a, b;

public:
	Ellipse(int x, int y, double a, double b);
	double Area();
	~Ellipse(){}
};

Ellipse::Ellipse(int x, int y, double a, double b)
{
	this->x = x;
	this->y = y;
	this->a = a;
	this->b = b;
}

double Ellipse::Area()
{
	return 3.14*a*b;
}

int main()
{
	int x, y;
	double a, b;
	cin>>x>>y>>a>>b;
	Ellipse e1(x, y, a, b);
	cout<<e1.Area()<<endl;
	return 0;
}
