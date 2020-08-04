/*
题目内容：

定义一个带重载构造函数的日期类Date，数据成员有年、月、日；成员函数包括：一个带参数的构造函数Date(int,int,int)，一个不带参数的构造函数(设置日期为1900年1月1日)，一个按“年-月-日”格式显示日期的函数，一个对数据成员赋值的函数void init(int,int,int)。

主函数中对类的测试要求：
1. 
分别使用两个不同的重载构造函数创建两个日期类对象（必须为d1,d2，d2初始值为2100-12-12）；
2. 
按“年-月-日”格式分别显示两个对象的值；
3. 输入数据，用init函数为d1赋值；
2．按“年-月-日”格式显示对象d1的值；。


输入格式:

给d1赋值的数据


输出格式：

d1的默认值
d2的初始值
d1赋值后的值


输入样例：

2011 4 29


输出样例：

1900-1-1
2100-12-12
2011-4-29

时间限制：500ms内存限制：32000kb
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
