/*
��Ŀ���ݣ�

���û�����İ���������ת���ɶ�Ӧ���ڼ���Ӣ�ĵ���(monday,tuesday,wednesday,thursday,friday,saturday,sunday)������1��ʾ"monday",����7��ʾ��sunday��������û���������ֲ���1~7֮�䣬��ʾ��Ϣ��invalid


�����ʽ:

����


�����ʽ��

���ڼ���Ӣ�ĵ��ʻ��ߡ�invalid��


��������1��

1


�������1��

monday


��������2��

8


�������2��

invalid

ʱ�����ƣ�2000ms�ڴ����ƣ�32000kb
*/

#include<iostream>
using namespace std;

int main()
{
	int i;
	cin>>i;
	if (i<1||i>7)
	{
		cout<<"invalid"<<endl;
	}
	else if(i==1)
	{
		cout<<"monday"<<endl;
	}
	else if(i==2)
	{
		cout<<"tuesday"<<endl;
	}
	else if(i==3)
	{
		cout<<"wednesday"<<endl;
	}
	else if(i==4)
	{
		cout<<"thursday"<<endl;
	}
	else if(i==5)
	{
		cout<<"friday"<<endl;
	}
	else if(i==6)
	{
		cout<<"saturday"<<endl;
	}
	else
	{
		cout<<"sunday"<<endl;
	}
	return 0;
}
