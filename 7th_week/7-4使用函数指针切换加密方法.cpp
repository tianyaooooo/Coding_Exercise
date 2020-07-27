/*
��Ŀ���ݣ�

��д�������ܺ�������һ������ʹ�ÿ������ܷ���������ԭ����Сд��ĸ����ĸ���������ĵ�3����ĸ�Ĵ�д��ʽ���滻����д��ĸ��ͬ��������Сд��ĸ�滻���ɽ���ĸ��������ĩ�νӵġ�����"AMDxyzXYZ" ����Ϊ "dpgABCabc"���ڶ�������ʹ�õ�˫�ż��ܷ��������ַ���"abcde",���ݵ�˫������Ϊ�����ַ���"ace"��"bd"����������һ���Ϊ����"acebd"��

�û�����һ���ַ�����Ϊ���ģ�����������1��2������1ʹ�õ�һ���������ܲ�������ģ�����2ʹ�õڶ����������ܲ�������ġ�Ҫ��ʹ�ú���ָ�����л����ܺ�����


��ʾ������������ԭ�Ϳ���Ϊ��

void caesar(char s[]);

void oddeven(char s[]);

void cipher(void (*f)(char s[]),char s[]);//�β�Ϊָ������ָ�룬��Ӧʵ�ο�Ϊ��Ӧ��ʽ�ĺ�������


�����ʽ:

һ���ַ�����Ϊ���ģ�����������1��2������1ʹ�õ�һ���������ܲ�������ģ�����2ʹ�õڶ����������ܲ�������ġ�


�����ʽ��

���ܺ������


����������

jacky

2


���������

jcyak

ʱ�����ƣ�500ms�ڴ����ƣ�32000kb
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
			continue; // һ��Ҫ�ӣ����� s[i] = 'x', �������������Ϊ 'A', ��û�� continue �������ִ���������䣬��һ���� s[i] ��ֵ�޸�Ϊ 'd' 
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

