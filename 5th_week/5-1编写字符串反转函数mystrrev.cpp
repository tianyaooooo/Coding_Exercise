/*
题目内容：

编写字符串反转函数mystrrev，该函数的功能是将指定字符串中的字符顺序颠倒（前变后，后变前）。然后再编写主函数验证之。注意，输入输出应在主函数中进行。

函数原型为 void mystrrev(char str[]) 

输入格式:

一个字符串，不会超过100个字符长，中间可能包含空格

输出格式：

输入字符串的反转后的字符串

注意：本题应使用字符数组实现，不能使用字符串处理库函数，不能使用string类。

输入样例：

Hello,everyone

输出样例：

enoyreve,olleH

时间限制：500ms内存限制：32000kb
*/

#include<iostream>
using namespace std;

void mystrrev(char str[])
{
	int i=0,len=0;
	while (str[i]!='\0')
	{
		len++;
		i++;
	}
	char temp;
	for (i=0;i<len/2;i++)
	{
		temp=str[i];
		str[i]=str[len-1-i];
		str[len-1-i]=temp;
	}
}

int main()
{
	char s[101];
	cin.getline(s,100);
	mystrrev(s);
	cout<<s<<endl;
	return 0;
}
