/*
��Ŀ���ݣ�

��д������ʹһ���ַ������������Ҫ������õݹ麯����

�����ʽ:

һ���ַ��������ᳬ��100���ַ������м���ܰ����ո�

�����ʽ��

���ַ���������

��ע�⡿ʹ���ַ�����͵ݹ�ʵ�֡�

����������

Hello,everyone

���������

enoyreve,olleH

ʱ�����ƣ�500ms�ڴ����ƣ�32000kb
*/

#include<iostream>
using namespace std;
#include<cstring>

//��ĿֻҪ���������δҪ��ԭ�ַ���������
void reverse(char a[], int len) 
{
	if (len==1)
	{
		cout<<a[0];
	}
	else
	{
		cout<<a[len-1];
		reverse(a,len-1);	
	}
}

int main()
{
	char str[101];
	cin.getline(str,100);
	reverse(str,strlen(str));
	return 0;
}
