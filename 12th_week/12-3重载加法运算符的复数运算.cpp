/*
��Ŀ���ݣ�

����һ�������࣬�����ؼӷ��������+���͸�ֵ�������=�������öԸ��������Ҫ��


�����ʽ:

������������������ʵ�����鲿


�����ʽ��

�Ȱ���Ҫ���ʽ�������������Ȼ����������������ĺ�


����������

1 2
3 4

���������

1+j2
3+j4
4+j6

ʱ�����ƣ�500ms�ڴ����ƣ�32000kb
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


