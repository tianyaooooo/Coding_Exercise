/*
题目内容：

编写函数 print_spaced 显示字符串，要求显示出的字符串每个字母之间都有一个空格。要求编写两个同名函数，一个支持字符数组输入，另一个支持string类型输入。然后编写main函数测试这两个函数，第一个使用字符数组输入，第二个使用string类型输入。


输入格式:

两个字符串，长度不超过100，只包含英文大小写字母，不含其他字符。


输出格式：

经间隔空格处理后的两个字符串，两个字符串分居两行。注意字符串的最后一个字母后面没有空格。


输入样例：

news
final


输出样例：

n e w s
f i n a l


时间限制：500ms内存限制：32000kb
*/

#include<iostream>
using namespace std;
#include<cstring>
#include<string>
 
void print_spaced(char x[])
{
	int len1=strlen(x);
	for (int i=0;i<len1-1;i++)
	{
		cout<<x[i]<<' ';
	}
	cout<<x[len1-1]<<endl;
}

void print_spaced(string y)
{
	int len2=y.length();
	for (int i=0;i<len2-1;i++)
	{
		cout<<y.substr(i,1)+ ' ';
	}
	cout<<y.substr(len2-1,1)+'\0'<<endl;
	
}

int main()
{
	char a[101];
	string b;
	cin>>a;
	cin>>b;
	print_spaced(a);
	print_spaced(b);
	return 0;
}
