/*
题目内容：

编写两个加密函数，第一个函数使用凯撒加密法，即将将原来的小写字母用字母表中其后面的第3个字母的大写形式来替换，大写字母按同样规则用小写字母替换，可将字母表看成是首末衔接的。例如"AMDxyzXYZ" 加密为 "dpgABCabc"。第二个函数使用单双号加密法，即将字符串"abcde",根据单双号区分为两个字符串"ace"和"bd"，再连接在一起成为密文"acebd"。

用户输入一个字符串作为明文，再输入数字1或2，输入1使用第一个函数加密并输出密文，输入2使用第二个函数加密并输出密文。要求使用函数指针来切换加密函数。


提示：三个函数的原型可设为：

void caesar(char s[]);

void oddeven(char s[]);

void cipher(void (*f)(char s[]),char s[]);//形参为指向函数的指针，对应实参可为相应格式的函数名。


输入格式:

一个字符串作为明文，再输入数字1或2，输入1使用第一个函数加密并输出密文，输入2使用第二个函数加密并输出密文。


输出格式：

加密后的密文


输入样例：

jacky

2


输出样例：

jcyak

时间限制：500ms内存限制：32000kb
*/

#include<iostream>
#include<cstring>
using namespace std;

void caesar(char s[])
{
	int len = strlen(s);
	for (int i = 0; i < len; i++)
	{
		if ('a' <= s[i] && s[i] <= 'z')
		{
			s[i] = (s[i] + 3 - 'a') % 26 + 'A';
			continue; // 一定要加！例如 s[i] = 'x', 经过上面语句后变为 'A', 若没有 continue 将会继续执行下面的语句，进一步将 s[i] 的值修改为 'd' 
		}
		if ('A' <= s[i] && s[i] <= 'Z')
		{
			s[i] = (s[i] + 3 - 'A') % 26 + 'a';
		}
	}
}

void oddeven(char s[])
{
	int len = strlen(s);
	int mid = (len + 1)/2;
	char s2[100];
	for (int i = 0; i < len; i++)
	{
		if (i%2 == 0)
		{
			s2[i/2] = s[i];
		}
		else
		{
			s2[mid + i/2] = s[i];
		}
	}
	for (int i = 0; i < len; i++)
	{
		s[i] = s2[i];
	}
}

void cipher(void (*pf) (char s[]), char s[])
{
	(*pf)(s);
}

int main()
{
	char str[100];
	cin.getline(str, 99);
	int n;
	cin>>n;
	if (n == 1)
	{
		cipher(caesar, str);
	}
	else
	{
		cipher(oddeven, str);
	} 
	cout<<str<<endl;
	return 0;
} 

