/*
��Ŀ���ݣ�

����ʽ��������������ĸ�а���ָ�����������һЩ��ĸ���γ����ġ����������china���ڼ��Ϊ1��λ�ò���������ĸ�����е���ĸa,b,c,d,e���ͱ������cahbicndae�����Ϊ2ʱ������Ϊchainbac��Ҫ���������ĺͼ�����Ӵ��������ĸ�����У�������a,b,c,d,e��������ȡ����Ӧ��ĸ���뵽�����У����������ĸ���е���ĸȡ�꣬���ͷ��ȡ��Ҫ�����������һ����ĸһ����������ĸ�����е���ĸ��


�����ʽ:

һ���������ַ�����һ���Ǳ�ʾ�����������������(������30���ַ�)�������ȡֵ��Χ�ǣ�1~5����


�����ʽ��

����(������60���ַ�)


����������

china

1


���������

cahbicndae

ʱ�����ƣ�2000ms�ڴ����ƣ�32000kb
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
		//��pos��ֵ������string�Ĵ�С����substr�������׳�һ��out_of_range�쳣
		//��pos+n��ֵ������string�Ĵ�С����substr�����n��ֵ��ֻ������string��ĩβ	
	}
	cout<<b<<endl;
	return 0;
}
