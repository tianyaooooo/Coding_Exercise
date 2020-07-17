/*
题目内容：

插入式加密是在明文字母中按照指定间隔插入另一些字母以形成密文。例如对明文china，在间隔为1的位置插入其它字母序列中的字母a,b,c,d,e，就变成密文cahbicndae；间隔为2时的密文为chainbac，要求输入明文和间隔，从存放其它字母的序列（仅包含a,b,c,d,e）中依次取出对应字母插入到明文中，如果其它字母序列的字母取完，则从头再取，要求密文中最后一个字母一定是其它字母序列中的字母。


输入格式:

一个是明文字符串，一个是表示间隔的正整数。明文(不超过30个字符)，间隔的取值范围是（1~5）。


输出格式：

密文(不超过60个字符)


输入样例：

china

1


输出样例：

cahbicndae

时间限制：2000ms内存限制：32000kb
*/

#include<iostream>
#include<string>
using namespace std;

int main()
{
	string a;
	string b="";
	char c[5]={'a','b','c','d','e'};
	int k;
	cin>>a;
	cin>>k;
	int len=a.length(); //O(len)
	int p;
	if (len%k==0)
	{
		p=len/k;	
	} 
	else
	{
		p=len/k+1;
	}
	for (int i=0;i<p;i++) //O(len) 
	{
		b+=a.substr(i*k,k)+c[i%5]; //O(k)
		//s.substr(pos, n)
		//若pos的值超过了string的大小，则substr函数会抛出一个out_of_range异常
		//若pos+n的值超过了string的大小，则substr会调整n的值，只拷贝到string的末尾	
	}
	cout<<b<<endl;
	return 0;
}
