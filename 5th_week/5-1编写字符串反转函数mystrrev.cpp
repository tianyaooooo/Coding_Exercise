/*
��Ŀ���ݣ�

��д�ַ�����ת����mystrrev���ú����Ĺ����ǽ�ָ���ַ����е��ַ�˳��ߵ���ǰ��󣬺��ǰ����Ȼ���ٱ�д��������֤֮��ע�⣬�������Ӧ���������н��С�

����ԭ��Ϊ void mystrrev(char str[]) 

�����ʽ:

һ���ַ��������ᳬ��100���ַ������м���ܰ����ո�

�����ʽ��

�����ַ����ķ�ת����ַ���

ע�⣺����Ӧʹ���ַ�����ʵ�֣�����ʹ���ַ�������⺯��������ʹ��string�ࡣ

����������

Hello,everyone

���������

enoyreve,olleH

ʱ�����ƣ�500ms�ڴ����ƣ�32000kb
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
