/*
��Ŀ���ݣ�

��Ʋ�����һ����ΪTrapezium�������࣬������Ϊ���ε��ĸ���������ꡣ�������ϱߺ��±߾���x��ƽ�С�
������ķ�װ��Ҫ���������������8��˽�е����ͱ�����ʾ4���������ֵ��������Ա����initial(int,int,int,int,int,int,int,int)��ʼ�����ݳ�Ա������GetPosition(int&,int&,int&,int&,int&,int&,int&,int&)��ȡ����ֵ������Area()���������


�����ʽ:

�����ĸ���������꣬����Ϊ����(x1,y1)������(x2,y2)������(x3,y3)������(x4,y4)�ǵĶ��㡣


�����ʽ��

���ε����


����������

3 2 5 2 1 -4 7 -4



���������

24

ʱ�����ƣ�500ms�ڴ����ƣ�32000kb
*/ 

#include<iostream>
using namespace std;

class Trapezium
{
	private:
		int x1, y1, x2, y2, x3, y3, x4, y4;
	
	public:
		void initial(int X1, int Y1, int X2, int Y2, int X3, int Y3, int X4, int Y4);
		// ��û�㶮��Ŀ������ô���� GetPosition��������Ҳû�õ� 
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
