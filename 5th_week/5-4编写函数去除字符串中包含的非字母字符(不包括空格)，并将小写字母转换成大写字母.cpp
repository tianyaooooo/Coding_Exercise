/*
��Ŀ���ݣ�

��д����ȥ���ַ����а����ķ���ĸ�ַ�(�������ո�)������Сд��ĸת���ɴ�д��ĸ��

ע�⣬���ں�����������������Ӧ���������н��С�

�����ʽ:

��ת�����ַ������ַ����������ո񣬳��Ȳ�����200��

�����ʽ��

ת������ַ���

ע�⣺����Ӧʹ���ַ�����ʵ�֣�����ʹ���ַ�������⺯��������ʹ��string�ࡣ

����������

happy new year!

���������

HAPPY NEW YEAR

ʱ�����ƣ�500ms�ڴ����ƣ�32000kb
*/

#include<iostream>
using namespace std;

void trans(char str[])
{
	int i=0,count=0;
	while (str[i]!='\0')
	{
		if (str[i]!=' '&& (str[i]<'a'||str[i]>'z')&&(str[i]<'A'||str[i]>'Z'))
		{
			i++;
			count++;
		}
		else if (str[i]==' '||(str[i]>='A'&&str[i]<='Z'))
		{
			str[i-count]=str[i];
			i++;
		}
		else 
		{
			str[i-count]=str[i]-'a'+'A';
			i++;
		}
	}
	str[i-count]='\0';
}

int main()
{
	char a[201];
	cin.getline(a,200);
	trans(a);
	cout<<a;
	return 0;
}
