/*
题目内容：

编写一个函数，将表示数字的数值（0-12）转换成对应的英文名称（小写）。用户输入阿拉伯数字，程序输出对应数的英文单词。要求必须使用指针数组完成。

输入格式:

0-12的数

输出格式：

输入数字对应的英文单词，均为小写字母

【提示】:函数格式： char * digitName(int n);

输入样例：

1

输出样例：

one

时间限制：500ms内存限制：32000kb
*/ 

#include<iostream>
using namespace std;

const char * digitName(int n)
{
	const char * name[13] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten", "eleven", "twelve"};
	return name[n];
}

int main()
{
	int n;
	cin>>n;
	cout<<digitName(n)<<endl;
	return 0;
}
