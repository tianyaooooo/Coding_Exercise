/*
题目内容：

恺撒加密法加密规则是：将原来的小写字母用字母表中其后面的第3个字母的大写形式来替换，大写字母按同样规则用小写字母替换，对于字母表中最后的三个字母，可将字母表看成是首未衔接的。如字母c就用F来替换，字母y用B来替换，而字母Z用c代替。编程实现以下功能：输入一个字符串，将其加密后输出。

程序运行结果如下：

AMDxyzXYZ

dpgABCabc


输入格式:

一个字符串（不会超过20个字符，由26个英文字母构成）


输出格式：

一个字符串


输入样例：

AMDxyzXYZ


输出样例：

dpgABCabc

时间限制：2000ms内存限制：32000kb
*/

#include<iostream>
using namespace std;

int main()
{
	char input[100];
	char output[100];
	int i;
	cin>>input;
	for (i=0; input[i]!='\0';i++)
	{
		if(input[i]>='a'&&input[i]<='z')
		{
			output[i]=(input[i]-'a'+3)%26+'A';
		}
		if(input[i]>='A'&&input[i]<='Z')
		{
			output[i]=(input[i]-'A'+3)%26+'a';
		}
	}
	output[i]='\0'; //要加，否则可能出现bug 
	cout<<output<<endl;
	return 0;
}
