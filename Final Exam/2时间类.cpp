/*
����ʱ���࣬˽�г�Աʱ���֡��룬���ͣ���Ա������set()����ʱ�䣬add()��ʱ�䣬show()��ʾʱ�䡣��д������������ʱ��������û�����ʱ���ʱ���֡��룬���ö����ʱ��Ϊ�û������ʱ���֡��룬�û�������ʱ�䣨��ʾʱ�䳤�ȣ��������1��֮��ӵ�2��ʱ�����ʱ�䣬��ʽΪhh:mm:ss��24Сʱ�ƣ���Сʱ��Ϊ00:00:00�����ʱ��Ϊ23:59:59��
���룺���У�ÿ��������������һ��Ϊĳʱ�̣���2��Ϊĳʱ����ʱ���֡��롣
��������У���֮ǰ��ʱ�̣���֮���ʱ�̡�

���������������
���룺

8 59 59
0 0 2

�����

08:59:59
09:00:01

ʱ�����ƣ�500ms�ڴ����ƣ�32000kb
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


