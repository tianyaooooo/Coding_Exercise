/*
��Ŀ���ݣ�

���һ���๦�ܵ�MyTime�࣬��ƶ�����صĹ��캯������������ʱ�䣬����ʱ��ļӼ����㣬�����ֿ��ܵĸ�ʽ��24Сʱ�ơ�12Сʱ�ƣ����ʱ�䡣

ע�⣺

��1���뿼�����õ�ʱ��ĺ����ԣ�ʱ0-23�� ��0-59����0-59����

��2��12Сʱ���У�12:00:00ǰΪAM�� 12:00:00���Ժ�ΪPM

��3���Ӽ�����ļ�����������һ��ʱ��ĳ��ȣ���λΪ��ʱ���֡��롱

��4�����캯����û����ʱ������ʱ��Ϊ0ʱ 0�� 0�룻�в���ʱ�����óɸ�����ʱ���֡��롣

 ����������

��1��������������t1,t2����ͨ�����캯����ʼ�����ǣ�t2��ʼ��ΪΪ8��10��30��

��2����ʾ��12��24Сʱ����ʾt1��t2��ʱ�䡣

��3��������t1��ʱ�䣬�������û����롣

��4����������Ӽ���ʱ�䡣

��5��t1�������ʱ�䣬����12Сʱ��24Сʱ����ʾ��

��6��t2�������ʱ�䣬����12Сʱ��24Сʱ����ʾ��


�����ʽ:

��һ��Ϊt1��ʱ�䣬�ڶ���Ϊ���Ӽ���ʱ��


�����ʽ��

��ʾ��12��24Сʱ����ʾt1��t2�ĳ�ʼʱ��
t1������Ĵ��Ӽ���ʱ�䰴12Сʱ��24Сʱ����ʾ
t2������Ĵ��Ӽ���ʱ�䰴12Сʱ��24Сʱ����ʾ


����������

11 30 30
5 15 20


���������

00:00:00 AM
00:00:00
08:10:30 AM
08:10:30
04:45:50 PM
16:45:50
02:55:10 AM
02:55:10


ʱ�����ƣ�500ms�ڴ����ƣ�32000kb
*/

#include<iostream>
using namespace std;

class MyTime
{
private:
	int hour, minute, second;

public:
	MyTime():hour(0), minute(0), second(0){}
	MyTime(int h, int m, int s):hour(h), minute(m), second(s){} // ��������Ӧ�����ж������������ʱ��ĺ����ԣ�����Ŀû�и���������ʱҪ��ô�죬�ʴ˴����Ժ����Լ���
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
