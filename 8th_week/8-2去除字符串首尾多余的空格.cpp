/*
��Ŀ���ݣ�

�û�����һ���ַ�������β�ж���Ŀո񣬱�д������ȥ����Щ����Ŀո�Ҫ�����ʹ��ָ������ɱ��⡣

�����ʽ:

һ����β�ж���ո��ַ�����Ϊ�˱��ڱ�ʶ��β���Ŀո����ַ���β����������˸�#�ű�ʾ�ַ����������ַ����ڲ���֤�������#�š�

�����ʽ��

ȥ���ո����ַ�����ͬ�������ַ���β����������˸�#�ű�ʾ�ַ���������

����������

my score    #

���������

my score#

ʱ�����ƣ�500ms�ڴ����ƣ�32000kb
*/

#include<iostream>
#include<cstring>
using namespace std;

int main()
{
	char str[100];
	cin.getline(str, 99);
	int len = strlen(str);
	char * i, * start, * end;
	for (i = str; i < str + len; i++)
	{
		if (* i != ' ')
		{
			start = i;
			break;
		}
	}
	for (i = str + len - 2; i >= str; i--)
	{
		if (* i != ' ')
		{
			end = i;
			break;
		}
	}
	for (i = start; i <= end; i++)
	{
		cout<<*i;
	}
	cout<<"#"<<endl;
	return 0;
}
