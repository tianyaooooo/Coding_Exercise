/*
��Ŀ���ݣ�

��д��������һ��Ӣ���ַ����еĵ��ʸ�����

�����ʽ:

һ���500����ĸ��Ӣ���ַ���,���������ֺ������ַ��������ܰ���һЩӢ�ı����ţ����š���㡢�ʺţ��������Ŷ�������ʱ����Ϊһ�����ʡ� ���ʼ���ܰ���һ�������ո�

�����ʽ��

�þ��ӵĵ��ʸ���

ע�⣺����Ӧʹ���ַ�����ʵ�֣�����ʹ���ַ�������⺯��������ʹ��string�ࡣ

����������

We hope everyone watches them with warmth.

���������

7

ʱ�����ƣ�500ms�ڴ����ƣ�32000kb
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
