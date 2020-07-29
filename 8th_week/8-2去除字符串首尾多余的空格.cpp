/*
题目内容：

用户输入一个字符串，首尾有多余的空格，编写程序来去除这些多余的空格。要求必须使用指针来完成本题。

输入格式:

一个首尾有多余空格字符串。为了便于标识出尾部的空格，在字符串尾部额外添加了个#号表示字符串结束。字符串内部保证不会出现#号。

输出格式：

去除空格后的字符串，同样在在字符串尾部额外添加了个#号表示字符串结束。

输入样例：

my score    #

输出样例：

my score#

时间限制：500ms内存限制：32000kb
*/

#include<iostream>
#include<cstring>
using namespace std;

int main()
{
	char str[100];
	cin.getline(str, 99);
	int len = strlen(str);
	char * i, * start, * end;
	for (i = str; i < str + len; i++)
	{
		if (* i != ' ')
		{
			start = i;
			break;
		}
	}
	for (i = str + len - 2; i >= str; i--)
	{
		if (* i != ' ')
		{
			end = i;
			break;
		}
	}
	for (i = start; i <= end; i++)
	{
		cout<<*i;
	}
	cout<<"#"<<endl;
	return 0;
}
