/*
��Ŀ���ݣ�

�������

y=sin(x*x)/(1-cos(x))

��ֵ��

 
�����ʽ��

ʵ��,����0.

�����ʽ��

ʵ��
 

����������

0.1

���������

2.00163

��ʾ�����Һ��������Ǻ�����ֵ��ͨ����ѧ�⺯��sin(x)�����ң���cos(x)�����ң������㣬��Ҫ����ͷ�ļ�<cmath>��

ʱ�����ƣ�1000ms�ڴ����ƣ�32000kb
*/

#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	double x,y;
	cin>>x,
	y=sin(x*x)/(1-cos(x));
	cout<<y<<endl;
	
	return 0;
}
