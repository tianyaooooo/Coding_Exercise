/*
题目内容：

输入华氏温度，用下列公式将其转换为摄氏温度并输出。

C=5/9*(F-32)

 
输入格式：

实数

输出格式：

转换后的摄氏温度，实数。

 
输入样例：

80

输出样例：

26.6667


时间限制：1000ms内存限制：32000kb
*/ 

#include<iostream>
using namespace std;


int main()
{
	double c,f;
	cin>>f;
	c=5./9*(f-32);
	cout<<c<<endl;
	
	return 0;
 } 
