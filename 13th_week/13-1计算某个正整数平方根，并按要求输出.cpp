/*
��Ŀ���ݣ�

����һ����������������ƽ����(��sqrt����)�����������ȡ1~6λС����������ʾ������


�����ʽ:

����һ����������


�����ʽ��

��������6����ʾ��С��λ������ȡ1~6λ��


����������

2


���������

1.4
1.41
1.414
1.4142
1.41421
1.414214

ʱ�����ƣ�500ms�ڴ����ƣ�32000kb
*/

#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

int main()
{
	int x;
	double y;
	cin>>x;
	y = sqrt(x);
	cout<<setiosflags(ios::fixed)<<setprecision(1)<<y<<endl;
	cout<<setiosflags(ios::fixed)<<setprecision(2)<<y<<endl;
	cout<<setiosflags(ios::fixed)<<setprecision(3)<<y<<endl;
	cout<<setiosflags(ios::fixed)<<setprecision(4)<<y<<endl;
	cout<<setiosflags(ios::fixed)<<setprecision(5)<<y<<endl;
	cout<<setiosflags(ios::fixed)<<setprecision(6)<<y<<endl;
	return 0;
}
