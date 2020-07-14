/*
题目内容：

将n美分转换成25、10、5和1美分的硬币总共有多少种转换方法？

运行结果如下：

25

13

如果n不在0~99之间，输出提示信息“the money is invalid!”

运行结果如下：

101

the money is invalid!

输入格式:

整数，表示美分数

输入可能不是[0,99]之间的整数。输入不在该区间时，输出为“the money is invalid!”。


输出格式：

转换方法数或者提示信息“the money is invalid!”（不带引号啊，单词间只有一个空格）


输入样例：

25


输出样例：

13

时间限制：2000ms内存限制：64000kb
*/ 

#include <iostream>
using namespace std;

//这里只是让算可能的情况数，而不用求每种钱各多少张 
int main()
{
	int n,count=0;
	cin>>n;
	if (n<0||n>99)
	{
		cout<<"the money is invalid!"<<endl;
	}
	else
	{
		for (int a=0;a<=n/25;a++)
		{
			for (int b=0; b<=(n-25*a)/10;b++)
			{
				for (int c=0; c<=(n-25*a-10*b)/5;c++)
				{
					count+=1;
				}
			}
		}
		cout<<count<<endl;
	}
	return  0;
}

