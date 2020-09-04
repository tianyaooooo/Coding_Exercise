/*
定义时间类，私有成员时、分、秒，整型；成员函数：set()设置时间，add()加时间，show()显示时间。编写主函数，定义时间类对象，用户输入时间的时、分、秒，设置对象的时间为用户输入的时、分、秒，用户再输入时间（表示时间长度），计算第1个之间加第2个时长后的时间，格式为hh:mm:ss，24小时制，最小时刻为00:00:00，最大时刻为23:59:59。
输入：两行，每行三个整数，第一行为某时刻，第2行为某时长的时、分、秒。
输出：两行，加之前的时刻，加之后的时刻。

【输入输出样例】
输入：

8 59 59
0 0 2

输出：

08:59:59
09:00:01

时间限制：500ms内存限制：32000kb
*/

#include<iostream>
using namespace std;

class Time
{
private:
	int hour;
	int minute;
	int second;
public:
	Time(int hh = 0, int mm = 0, int ss = 0):hour(hh), minute(mm), second(ss){};
	void set(int hh, int mm, int ss)
	{
		hour = hh;
		minute == mm;
		second == ss;
	}
	Time add(int hh, int mm, int ss)
	{
		Time temp;
		if (second + ss > 59)
		{
			temp.second = second + ss - 60;
			temp.minute += 1;
		}
		else
		{
			temp.second = second + ss;
		}
		if (temp.minute + minute + mm > 59)
		{
			temp.minute = temp.minute + minute + mm - 60;
			temp.hour += 1;
		}
		else
		{
			temp.minute = temp.minute + minute + mm;
		}
		if (temp.hour + hour + hh > 23)
		{
			temp.hour = temp.hour + hour + hh - 24;
		}
		else
		{
			temp.hour = temp.hour + hour + hh;
		}
		return temp;
	}
	void show()
	{
		if (hour >= 0 && hour <= 9)
		{
			cout<<'0'<<hour<<':';
		}
		else
		{
			cout<<hour<<':';
		}
		if (minute >= 0 && minute <= 9)
		{
			cout<<'0'<<minute<<':';
		}
		else
		{
			cout<<minute<<':';
		}
		if (second >= 0 && minute <= 9)
		{
			cout<<'0'<<second<<endl;
		}
		else
		{
			cout<<second<<endl;
		}
	}
	~Time(){}
};

int main()
{
	int h1, h2, m1, m2, s1, s2;
	cin>>h1>>m1>>s1;
	cin>>h2>>m2>>s2;
	Time time1(h1, m1, s1);
	time1.show();
	Time time2 = time1.add(h2, m2, s2);
	time2.show();
	return 0;
}


