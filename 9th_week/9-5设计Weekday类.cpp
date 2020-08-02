/*
��Ŀ���ݣ�

���һ��Weekday�࣬��Ա����SetDay()�������ڼ���IncDay()ǰ��һ�죬NowDay()��ӡ��ǰ�����ڼ���


�����ʽ:

�û�����һ�����֣�0��ʾ�����գ�1��ʾ����һ�����ƣ�6��ʾ���������ø����ֳ�ʼ��Weekday��


�����ʽ��

ʹ�����Ĵ�ӡ���ӵ���������3�������ڼ�����������ʱ��ѭ����


����������

0


���������

������
����һ
���ڶ�


ʱ�����ƣ�500ms�ڴ����ƣ�32000kb
*/ 

#include<iostream>
using namespace std;

class Weekday
{
	private:
		int i;
		
	public:
		void SetDay(int day);
		void IncDay();
		void NowDay();	
};

void Weekday::SetDay(int day)
{
	i = day;
	return;
}

void Weekday::IncDay()
{
	i = (i + 1)%7;
	return;
}

void Weekday::NowDay()
{
	switch(i)
	{
		case 0: cout<<"������"<<endl; break;
		case 1: cout<<"����һ"<<endl; break;
		case 2: cout<<"���ڶ�"<<endl; break;
		case 3: cout<<"������"<<endl; break;
		case 4: cout<<"������"<<endl; break;
		case 5: cout<<"������"<<endl; break;
		case 6: cout<<"������"<<endl; 
	}
	return;
}

int main()
{
	int myday;
	cin>>myday;
	Weekday weekday;
	weekday.SetDay(myday);
	weekday.NowDay();
	weekday.IncDay();
	weekday.NowDay();
	weekday.IncDay();
	weekday.NowDay();
	return 0;
}
