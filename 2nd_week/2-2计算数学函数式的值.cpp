/*
题目内容：

编程求函数

y=sin(x*x)/(1-cos(x))

的值。

 
输入格式：

实数,大于0.

输出格式：

实数
 

输入样例：

0.1

输出样例：

2.00163

提示：正弦和余弦三角函数的值是通过数学库函数sin(x)（正弦）、cos(x)（余弦）来计算，需要包含头文件<cmath>。

时间限制：1000ms内存限制：32000kb
*/

#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	double x,y;
	cin>>x,
	y=sin(x*x)/(1-cos(x));
	cout<<y<<endl;
	
	return 0;
}
