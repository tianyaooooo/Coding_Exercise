/*
��Ŀ���ݣ�

��дһ������������ʾ���ֵ���ֵ��0-12��ת���ɶ�Ӧ��Ӣ�����ƣ�Сд�����û����밢�������֣����������Ӧ����Ӣ�ĵ��ʡ�Ҫ�����ʹ��ָ��������ɡ�

�����ʽ:

0-12����

�����ʽ��

�������ֶ�Ӧ��Ӣ�ĵ��ʣ���ΪСд��ĸ

����ʾ��:������ʽ�� char * digitName(int n);

����������

1

���������

one

ʱ�����ƣ�500ms�ڴ����ƣ�32000kb
*/ 

#include<iostream>
using namespace std;

const char * digitName(int n)
{
	const char * name[13] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten", "eleven", "twelve"};
	return name[n];
}

int main()
{
	int n;
	cin>>n;
	cout<<digitName(n)<<endl;
	return 0;
}
