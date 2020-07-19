/*
题目内容：

编写函数计算一个英文字符串中的单词个数。

输入格式:

一个最长500个字母的英文字符串,不包含数字和特殊字符，但可能包含一些英文标点符号（逗号、句点、问号）。标点符号独立出现时不视为一个单词。 单词间可能包含一个或多个空格。

输出格式：

该句子的单词个数

注意：本题应使用字符数组实现，不能使用字符串处理库函数，不能使用string类。

输入样例：

We hope everyone watches them with warmth.

输出样例：

7

时间限制：500ms内存限制：32000kb
*/

#include<iostream>
using namespace std;

int Num(char str[])
{
	int i=0, count=0;
	while (str[i]!='\0')
	{
		if ((str[i]<'a'||str[i]>'z')&&(str[i]<'A'||str[i]>'Z'))
		{
			i++;
		}
		else
		{
			count++;
			while (str[i]>='a'&&str[i]<='z'||str[i]>='A'&&str[i]<='Z')
			{
				i++;
			}
			
			
		}
	}
	return count;	
}

int main()
{
	char word[501];
	int num;
	cin.getline(word,500);
	num=Num(word);
	cout<<num<<endl;
	return 0;
}
