/*
��Ŀ���ݣ�

���һ��MyTime�࣬��Ա����SetTime()����ʱ�䣬print_12()��12��0-11��Сʱ����ʾʱ�䣨AM���磬PM���磩��print_24()��24��0-23��Сʱ����ʾʱ�䡣


�����ʽ:

��������ʱ���ʱ���֡���


�����ʽ��

����12Сʱ�ƺ�24Сʱ��������ʾʱ��,ע��ʱ���ʽ�е�ð����Ӣ��ð��,ʱ���붼����λ��AM,PMǰ��һ���ո�����12:00��00:00:00 AM������ʮ������00:00:00 PM�� 


����������

13 23 34


���������

01:23:34 PM
13:23:34

ʱ�����ƣ�500ms�ڴ����ƣ�32000kb
*/

#include<iostream>
#include<cstring>
using namespace std;

class MyTime
{
	private:
		int hour;
		int minute;
		int second;
	
	public:
		void SetTime(int myhour, int myminute, int mysecond);
		void print_12();
		void print_24();
};

// �ٶ������ʱ���Ǻ���ģ���Ŀû��˵��������ô�죩����û��������Ч�Լ��飬����û�� 77 88 99 
void MyTime::SetTime(int myhour, int myminute, int mysecond)
{
	hour = myhour;
	minute = myminute;
	second = mysecond;
	return;
}

void MyTime::print_12()
{
	int flag = 0;
	if (hour <=9)
	{
		cout<<0<<hour;
	}
	else if (hour > 9 && hour <12)
	{
		cout<<hour;
	}
	else if (hour >= 12 && hour <= 21)
	{
		cout<<0<<hour - 12;
		flag = 1; 
	}
	else if (hour > 21 && hour < 24)
	{
		cout<<hour - 12;
		flag = 1;
	}
	else
	{
		cout<<0<<0; 
	}
	cout<<':';
	if (minute <= 9)
	{
		cout<<0<<minute;
	}
	else
	{
		cout<<minute;
	}
	cout<<':';
	if (second <=9)
	{
		cout<<0<<second;
	}
	else
	{
		cout<<second;
	}
	if (flag == 0)
	{
		cout<<' '<<"AM"<<endl;
	}
	else
	{
		cout<<' '<<"PM"<<endl;
	}	
	return;
}

void MyTime::print_24()
{
	if (hour <= 9)
	{
		cout<<0<<hour;
	}
	else
	{
		cout<<hour;
	}
	cout<<':';
	if (minute <=9)
	{
		cout<<0<<minute;
	}
	else
	{
		cout<<minute;
	}
	cout<<':';
	if (second <= 9)
	{
		cout<<0<<second;
	}
	else
	{
		cout<<second<<endl;
	}
}

int main()
{
	int h, m, s;
	cin>>h>>m>>s;
	MyTime clock;
	clock.SetTime(h, m, s);
	clock.print_12();
	clock.print_24();
	return 0;
}
