/*
题目内容：

设计一个多功能的MyTime类，设计多个重载的构造函数，可以设置时间，进行时间的加减运算，按各种可能的格式（24小时制、12小时制）输出时间。

注意：

（1）请考虑设置的时间的合理性（时0-23； 分0-59；秒0-59）。

（2）12小时制中，12:00:00前为AM， 12:00:00及以后为PM

（3）加减运算的加数、减数是一个时间的长度，单位为“时、分、秒”

（4）构造函数：没参数时，设置时间为0时 0分 0秒；有参数时，设置成给定的时、分、秒。

 在主函数中

（1）声明两个对象t1,t2，并通过构造函数初始化它们（t2初始化为为8：10：30）

（2）显示按12、24小时制显示t1、t2的时间。

（3）再设置t1的时间，数据由用户输入。

（4）再输入待加减的时间。

（5）t1加输入的时间，并按12小时和24小时制显示。

（6）t2减输入的时间，并按12小时和24小时制显示。


输入格式:

第一行为t1的时间，第二行为待加减的时间


输出格式：

显示按12、24小时制显示t1、t2的初始时间
t1加输入的待加减的时间按12小时和24小时制显示
t2减输入的待加减的时间按12小时和24小时制显示


输入样例：

11 30 30
5 15 20


输出样例：

00:00:00 AM
00:00:00
08:10:30 AM
08:10:30
04:45:50 PM
16:45:50
02:55:10 AM
02:55:10


时间限制：500ms内存限制：32000kb
*/

#include<iostream>
using namespace std;

class MyTime
{
private:
	int hour, minute, second;

public:
	MyTime():hour(0), minute(0), second(0){}
	MyTime(int h, int m, int s):hour(h), minute(m), second(s){} // 根据题意应设置判断条件检查设置时间的合理性，但题目没有给出不合理时要怎么办，故此处忽略合理性检验
	void SetTime(int h, int m, int s)
	{
		hour = h;
		minute = m;
		second = s;
	}
	void addTime(MyTime u);
	void reduceTime(MyTime u);
	void print_12();
	void print_24();
	~MyTime(){}	 
};

void MyTime::addTime(MyTime u)
{
	second += u.second;
	if (second >= 60)
	{
		second -= 60;
		minute++;
	}
	minute += u.minute;
	if (minute >= 60)
	{
		minute -= 60;
		hour++;
	}
	hour += u.hour;
	if (hour >= 24)
	{
		hour -= 24;
	}
}

void MyTime::reduceTime(MyTime u)
{
	if (second < u.second)
	{
		second = second - u.second + 60;
		if (minute == 0)
		{
			minute = 59;
			if (hour == 0)
			{
				hour = 23;
			}
			else
			{
				hour--;
			}
		}
		else
		{
			minute--;
		}
	}
	else
	{
		second = second - u.second;
	}
	if (minute < u.minute)
	{
		minute = minute - u.minute + 60;
		if (hour == 0)
		{
			hour = 23;
		}
		else
		{
			hour--;
		}
	}
	else
	{
		minute = minute - u.minute;
	}
	if (hour < u.hour)
	{
		hour = hour - u.hour + 24;
	}
	else
	{
		hour = hour - u.hour;
	}
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
	MyTime t1;
	MyTime t2(8, 10, 30);
	int hh, mm, ss, delta_h, delta_m, delta_s;
	cin>>hh>>mm>>ss;
	cin>>delta_h>>delta_m>>delta_s;
	MyTime delta_t(delta_h, delta_m, delta_s);
	t1.print_12();
	t1.print_24();
	t2.print_12();
	t2.print_24();
	t1.SetTime(hh, mm, ss);
	t1.addTime(delta_t);
	t2.reduceTime(delta_t);
	t1.print_12();
	t1.print_24();
	t2.print_12();
	t2.print_24();
	return 0;
}
