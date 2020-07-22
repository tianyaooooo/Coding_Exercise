/*
题目内容：

编写函数来使一个字符串逆序输出，要求必须用递归函数。

输入格式:

一个字符串，不会超过100个字符长，中间可能包含空格

输出格式：

该字符串的逆序

【注意】使用字符数组和递归实现。

输入样例：

Hello,everyone

输出样例：

enoyreve,olleH

时间限制：500ms内存限制：32000kb
*/

#include<iostream>
using namespace std;
#include<cstring>

//题目只要求序输出，未要求原字符数组逆序
void reverse(char a[], int len) 
{
	if (len==1)
	{
		cout<<a[0];
	}
	else
	{
		cout<<a[len-1];
		reverse(a,len-1);	
	}
}

int main()
{
	char str[101];
	cin.getline(str,100);
	reverse(str,strlen(str));
	return 0;
}
