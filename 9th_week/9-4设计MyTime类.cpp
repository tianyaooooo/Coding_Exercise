/*
题目内容：

设计一个MyTime类，成员函数SetTime()设置时间，print_12()以12（0-11）小时制显示时间（AM上午，PM下午），print_24()以24（0-23）小时制显示时间。


输入格式:

所需设置时间的时、分、秒


输出格式：

按照12小时制和24小时制依次显示时间,注意时间格式中的冒号是英文冒号,时分秒都是两位，AM,PM前有一个空格，晚上12:00是00:00:00 AM，中午十二点是00:00:00 PM。 


输入样例：

13 23 34


输出样例：

01:23:34 PM
13:23:34

时间限制：500ms内存限制：32000kb
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

// 假定输入的时间是合理的（时0-23， 分0-59，秒0-59，因为题目没有说不合理怎么办），故没有设置有效性检验，例如没有 77 88 99 
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
	else
	{
		cout<<hour - 12;
		flag = 1;
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
		cout<<0<<second<<endl;
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
