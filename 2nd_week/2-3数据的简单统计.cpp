/*
题目内容：

编程实现，用户从键盘输入3个整数，计算并打印这三个数的和、平均值及平均值的四舍五入整数值。

注意:输入的三个整数、它们的和、平均值的四舍五入值用整型变量表示，平均值用双精度变量表示。


输入格式：

三个整数，中间用空格隔开。

输出格式：

计算结果，整数、实数和整数，分别表示：和、平均值及平均值的四舍五入整数值，分三行输出。


输入样例：

3 6 8

输出样例：

17

5.66667

6

技巧提示：四舍五入：实数加0.5，再取整（转换为int型数）。

时间限制：1000ms内存限制：31kb
*/

#include<iostream>
using namespace std;

int main()
{
	int x,y,z,sum,ave;
	double average;
	cin>>x>>y>>z;
	sum=x+y+z;
	average=sum/3.;
	ave=int(average+0.5);
	cout<<sum<<endl;
	cout<<average<<endl;
	cout<<ave<<endl;	
	
	return 0;
}
