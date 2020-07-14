/*
题目内容：

用户输入一个字符，如果是小写字母输出对应的大写字母，其他字符不转换。

提示：使用三目条件运算符 ...？... ：...


输入格式：

一个字符

输出格式：

一个字符

 
输入样例：

d

输出样例：

D


时间限制：500ms内存限制：32000kb
*/

#include<iostream>
using namespace std;

int main()
{
	char x,y;
	cin>>x;
	y='a'<=x&&x<='z'? x-'a'+'A':x;
	cout<<y<<endl;
	return 0;
}
