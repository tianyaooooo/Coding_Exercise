/*
题目内容：

定义一个复数类，并重载加法运算符（+）和赋值运算符（=）以适用对复数运算的要求。


输入格式:

依次输入两个复数的实部和虚部


输出格式：

先按照要求格式输出两个复数，然后输出这两个复数的和


输入样例：

1 2
3 4

输出样例：

1+j2
3+j4
4+j6

时间限制：500ms内存限制：32000kb
*/

#include<iostream>
using namespace std;

class Complex
{
private:
	double real, img;
public:
	Complex(double r = 0, double i = 0): real(r), img(i){}
	Complex operator +(Complex &x);
	void Show();
};

Complex Complex::operator +(Complex &x)
{
	Complex temp;
	temp.real = real + x.real;
	temp.img = img + x.img;
	return temp;
}

void Complex::Show()
{
	if (img >= 0)
	{
		cout<<real<<"+j"<<img<<endl;
	}
	else
	{
		cout<<real<<"-j"<<-img<<endl;
	}
	return;
}

int main()
{
	double a, b, c, d;
	cin>>a>>b>>c>>d;
	Complex c1(a, b);
	Complex c2(c, d);
	c1.Show();
	c2.Show();
	(c1 + c2).Show();
	return 0;
}


