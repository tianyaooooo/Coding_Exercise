/*
��Ŀ���ݣ�

����Ҫ���д�������������ԡ�

��һ������ԭ��Ϊ int *new_array(int n); �ú������Ը��ݲ���n��̬����n��Ԫ�ص��������飬�������ָ�뷵�ء�

�ڶ�������ԭ��Ϊ void init_array(int *p, int n,int c); ��ָ����n��Ԫ�ص�����ÿ��Ԫ�ص�ֵ����ʼ��Ϊc��

�û����������Сn�ʹ���ʼ����ֵc,����new_array��������ռ䣬�ٵ���init_array��ʼ����������������������Ԫ�ء�

�����ʽ:

�����Сn�ʹ���ʼ����ֵc

�����ʽ��

���������Ԫ��,ע�����һ��Ԫ�غ�û�пո�

����������

8 27

���������

27 27 27 27 27 27 27 27

ʱ�����ƣ�500ms�ڴ����ƣ�32000kb
*/

#include<iostream>
using namespace std;

int *new_array(int n);
void init_array(int *p, int n,int c);

int main()
{
	int n, c;
	cin>>n>>c;
	int * pArr = new_array(n);
	init_array(pArr, n, c);
	for (int i = 0; i < n - 1; i++)
	{
		cout<<pArr[i]<<' ';
	}
	cout<<pArr[n - 1]<<endl;
	delete []pArr;
	return 0;
}

int *new_array(int n)
{
	return new int[n];
}

void init_array(int *p, int n, int c)
{
	for (int i = 0; i < n; i++)
	{
		p[i] = c;
	}
}


