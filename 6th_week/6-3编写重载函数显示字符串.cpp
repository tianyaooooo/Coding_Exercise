/*
��Ŀ���ݣ�

��д���� print_spaced ��ʾ�ַ�����Ҫ����ʾ�����ַ���ÿ����ĸ֮�䶼��һ���ո�Ҫ���д����ͬ��������һ��֧���ַ��������룬��һ��֧��string�������롣Ȼ���дmain����������������������һ��ʹ���ַ��������룬�ڶ���ʹ��string�������롣


�����ʽ:

�����ַ��������Ȳ�����100��ֻ����Ӣ�Ĵ�Сд��ĸ�����������ַ���


�����ʽ��

������ո����������ַ����������ַ����־����С�ע���ַ��������һ����ĸ����û�пո�


����������

news
final


���������

n e w s
f i n a l


ʱ�����ƣ�500ms�ڴ����ƣ�32000kb
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
