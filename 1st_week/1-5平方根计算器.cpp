/*
题目内容：

编写程序，计算一个正数的平方根。用户输入一个正数（可能为实数），输出它的平方根。

 
程序运行结果如下：

2

1.41421

提示：开平方使用函数sqrt(x)，x是双精度型,需要包含头文件cmath。


输入格式：

一个正数

输出格式：

平方根

 
输入样例：

2

输出样例：

1.41421


时间限制：2000ms内存限制：32000kb
*/

#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	double x;
	cin>>x;
	cout<<sqrt(x)<<endl;
	return 0;
}
