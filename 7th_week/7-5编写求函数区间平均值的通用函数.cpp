/*
��Ŀ���ݣ�

��д����ѧ��������ƽ��ֵ��ͨ�ú��������Լ������ָ�������ں�����ƽ��ֵ(ȡ������)��

��������ƽ��ֵ������������ԭ��Ϊ��

int  func1(int x);

int  func2(int x)

ֻ���ǲ���Ϊ������������ɡ�

func1����ѧ���ʽΪ��y=a*x^2+b*x+c��a,b,c���û����룻

func2����ѧ���ʽΪ��y=x^m��m���û����룻

ͨ�ú����Ĳ���Ϊ��������ƽ��ֵ������ָ�룬�Լ������������½����Ͻ硣

���� func1 = 3*x^2+2*x+1, �����½����Ͻ�ֱ�Ϊ0��3����

func1(0)=1

func1(1)=6

func1(2)=17

func1(3)=34

��ƽ��ֵΪ����1+6+17+34��/4=14 ��ֱ��ȡ������������)

��ʾ����1�����ں���ԭ�͵����ƣ�a,b,c��m��������ʹ��ȫ�ֱ������ݡ�

��2��ͨ�ú���ԭ�Ϳ���Ϊ��int avg( int (*f)(int),int x1,int x2);


�����ʽ:

�û��������룺

func1�Ĳ��� a,b,c

func2�Ĳ��� m

�����������½����Ͻ�


�����ʽ��

func1��������ƽ��ֵ

func2��������ƽ��ֵ


����������

3 2 1
1
0 3


���������

14
1


ʱ�����ƣ�500ms�ڴ����ƣ�32000kb
*/

#include<iostream>
#include<cmath>
using namespace std;


int a,b,c,m; // ע�⣡���ܷ��� main ������ 
int avg(int (*pf) (int x), int x1, int x2);
int func1(int x);
int func2(int x);

int main()
{
	cin>>a>>b>>c;
	cin>>m;
	int upper, lower;
	cin>>lower>>upper;
	cout<<avg(func1, lower, upper)<<endl;
	cout<<avg(func2, lower, upper)<<endl;
	return 0;
}

int avg(int (*pf) (int x), int x1, int x2)
{
	int sum = 0;
	for (int x = x1; x <= x2; x++)
	{
		sum += (*pf)(x);
		
	}
	return sum/(x2 - x1 + 1);	
}

int func1(int x)
{
	return a*x*x + b*x + c;
}

int func2(int x)
{
	return pow(x, m);
}
