/*
��Ŀ���ݣ�

��д��������ε�������ܳ���������ʽ�ǳ��򵥣���ʹ������������ʽ��д����߳�������Ч��

�����ʽ:

���εĳ��Ϳ���Ϊ����

�����ʽ��

���ε�������ܳ�

����������

3 5

���������

15 16

ʱ�����ƣ�500ms�ڴ����ƣ�32000kb
*/

#include<iostream>
using namespace std;

inline int Area(int x, int y)
{
	return x*y;
}

inline int Primeter(int x, int y)
{
	return 2*(x+y);
}

int main()
{
	int a,b,area,primeter;
	cin>>a>>b;
	area=Area(a,b);
	primeter=Primeter(a,b);
	cout<<area<<" "<<primeter<<endl;
	return 0;
}
