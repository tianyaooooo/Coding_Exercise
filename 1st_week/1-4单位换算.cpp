/*
题目内容：

编写一个程序，将英寸换算为厘米。输入英寸，输出厘米。

换算关系：1inch=2.54cm


程序运行结果如下：

14

14inch=35.56cm

 
提示：显示:输入的数、"inch="、换算结果和"cm"。

 
输入格式：

一个实数。

输出格式：

换算式,单位为小写英文字母，等号为英文等号，单位和数字之间没有空格，如：

14inch=35.56cm


输入样例：

14

输出样例：

14inch=35.56cm


时间限制：2000ms内存限制：32000kb
*/

#include<iostream>
using namespace std;

int main()
{
	double x,y;
	cin>>x;
	y=2.54*x;
	cout<<x<<"inch="<<y<<"cm";	
	return 0;
