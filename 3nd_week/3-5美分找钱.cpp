/*
��Ŀ���ݣ�

��n����ת����25��10��5��1���ֵ�Ӳ���ܹ��ж�����ת��������

���н�����£�

25

13

���n����0~99֮�䣬�����ʾ��Ϣ��the money is invalid!��

���н�����£�

101

the money is invalid!

�����ʽ:

��������ʾ������

������ܲ���[0,99]֮������������벻�ڸ�����ʱ�����Ϊ��the money is invalid!����


�����ʽ��

ת��������������ʾ��Ϣ��the money is invalid!�����������Ű������ʼ�ֻ��һ���ո�


����������

25


���������

13

ʱ�����ƣ�2000ms�ڴ����ƣ�64000kb
*/ 

#include <iostream>
using namespace std;

//����ֻ��������ܵ����������������ÿ��Ǯ�������� 
int main()
{
	int n,count=0;
	cin>>n;
	if (n<0||n>99)
	{
		cout<<"the money is invalid!"<<endl;
	}
	else
	{
		for (int a=0;a<=n/25;a++)
		{
			for (int b=0; b<=(n-25*a)/10;b++)
			{
				for (int c=0; c<=(n-25*a-10*b)/5;c++)
				{
					count+=1;
				}
			}
		}
		cout<<count<<endl;
	}
	return  0;
}

