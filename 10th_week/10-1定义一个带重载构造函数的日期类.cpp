/*
��Ŀ���ݣ�

����һ�������ع��캯����������Date�����ݳ�Ա���ꡢ�¡��գ���Ա����������һ���������Ĺ��캯��Date(int,int,int)��һ�����������Ĺ��캯��(��������Ϊ1900��1��1��)��һ��������-��-�ա���ʽ��ʾ���ڵĺ�����һ�������ݳ�Ա��ֵ�ĺ���void init(int,int,int)��

�������ж���Ĳ���Ҫ��
1. 
�ֱ�ʹ��������ͬ�����ع��캯������������������󣨱���Ϊd1,d2��d2��ʼֵΪ2100-12-12����
2. 
������-��-�ա���ʽ�ֱ���ʾ���������ֵ��
3. �������ݣ���init����Ϊd1��ֵ��
2��������-��-�ա���ʽ��ʾ����d1��ֵ����


�����ʽ:

��d1��ֵ������


�����ʽ��

d1��Ĭ��ֵ
d2�ĳ�ʼֵ
d1��ֵ���ֵ


����������

2011 4 29


���������

1900-1-1
2100-12-12
2011-4-29

ʱ�����ƣ�500ms�ڴ����ƣ�32000kb
*/
 
#include<iostream>
using namespace std;

class Date
{
private:
	int year;
	int month;
	int day;	
public:
	Date():year(1990), month(1), day(1){}
	Date(int y, int m, int d)
	{
		year = y;
		month = m;
		day = d;
	}
	void init(int y, int m, int d)
	{
		year = y;
		month = m;
		day = d;
	}
	void pint_ymd()
	{
		cout<<year<<'-'<<month<<'-'<<day<<endl;
	}
	~Date(){};
};

int main()
{
	int yy, mm, dd;
	cin>>yy>>mm>>dd;
	Date d1;
	Date d2(2100,12,12);
	d1.pint_ymd();
	d2.pint_ymd();
	d1.init(yy, mm, dd);
	d1.pint_ymd();
	return 0;
}
