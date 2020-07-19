/*
题目内容：

将用户输入的阿拉伯数字转换成对应星期几的英文单词(monday,tuesday,wednesday,thursday,friday,saturday,sunday)。输入1显示"monday",输入7显示“sunday”，如果用户输入的数字不在1~7之间，显示信息：invalid


输入格式:

整数


输出格式：

星期几的英文单词或者“invalid”


输入样例1：

1


输出样例1：

monday


输入样例2：

8


输出样例2：

invalid

时间限制：2000ms内存限制：32000kb
*/

#include<iostream>
using namespace std;

int main()
{
	int i;
	cin>>i;
	if (i<1||i>7)
	{
		cout<<"invalid"<<endl;
	}
	else if(i==1)
	{
		cout<<"monday"<<endl;
	}
	else if(i==2)
	{
		cout<<"tuesday"<<endl;
	}
	else if(i==3)
	{
		cout<<"wednesday"<<endl;
	}
	else if(i==4)
	{
		cout<<"thursday"<<endl;
	}
	else if(i==5)
	{
		cout<<"friday"<<endl;
	}
	else if(i==6)
	{
		cout<<"saturday"<<endl;
	}
	else
	{
		cout<<"sunday"<<endl;
	}
	return 0;
}
