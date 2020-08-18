/*
��Ŀ���ݣ�

��֪����Point�Ķ������£� 

class Point
{ 
int x, y; //���x��y���� 
public: Point( int = 0, int = 0 ); // ���캯�� 
void SetPoint( int, int ); // �������� 
int GetX() { return x; } // ȡx���� 
int GetY() { return y; } // ȡy���� 
void Print(); //���������� }; 
Point( int a, int b ) { SetPoint( a, b ); } 
void SetPoint( int a, int b ) { x = a; y = b; } 
void Print() { cout << "[" << x << "," << y << "]"; 
} 

��ͨ���̳еķ�������һ��������Circle������ 
1�����������ݳ�Ա�У� double radius; 
2.�����ĳ�Ա�����У� 

Circle(int x = 0, int y = 0 , double r = 0.0); //�����ݳ�Ա��ֵ����ʹ��SetRadius�ͻ����Point 
void SetRadius( double ); //���ð뾶 
double GetRadius(); //ȡ�뾶 
double Area(); //������� 
void Print(); //���Բ������Ͱ뾶����ʹ�û����Print 
���������зֱ��������������������ʹ���û�����ĳ�ֵ�ֱ�Ի��������������������ݳ�Ա��ֵ���������еĳ�Ա�����ֱ���ʾ���������������������ݳ�Ա��Ϣ��
Բ����ȡ3.14�� 


�����ʽ:

��һ����Point��ĳ�ʼ����Ϣ���ڶ�����Circle��ĳ�ʼ����Ϣ


�����ʽ��

��ο�����������ϸ����������������ֱ�ӽ��������ָ���ճ�������������


����������

30 50 
120 80 10 


���������

Point p [30,50]
Circle c Center=[120,80]
Radius=10
The centre of circle c [120,80]
The area of circle c 314

ʱ�����ƣ�500ms�ڴ����ƣ�32000kb
*/

#include<iostream>
using namespace std;

class Point
{ 
private:
	int x, y; 
public: 
	Point( int a = 0, int b = 0 )
	{
		SetPoint(a, b);
	} 
	void SetPoint(int a, int b)
	{
		x = a;
		y = b;
	}
	int GetX() { return x;} 
	int GetY() { return y;} 
	void Print()
	{
		cout << "[" << x << "," << y << "]"<<endl;
	}
};

class Circle : public Point
{
private:
	double radius;
public:
	Circle(int x = 0, int y = 0, double r = 0.0) : Point(x, y)
	{
		radius = r;
	}
	void SrtRadius(double r)
	{
		radius = r;
	}
	double GetRadius(){return radius;}
	double Area()
	{
		return 3.14*radius*radius;
	}
	void Print()
	{
		cout<<"Circle c Center=";
		Point::Print();
		cout<<"Radius="<<radius<<endl;
	}
};

int main()
{
	int x1, y1, x2, y2;
	double r2;
	cin>>x1>>y1;
	cin>>x2>>y2>>r2;
	Point p (x1, y1);
	Circle c (x2, y2, r2);
	cout<<"Point p ";
	p.Print();
	c.Print();
	cout<<"The centre of circle c ";
	c.Point::Print();
	cout<<"The area of circle c "<<c.Area()<<endl;
	return 0;
}
