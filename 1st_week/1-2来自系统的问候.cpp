#include<iostream>
using namespace std;

/*
��Ŀ���ݣ�

��д��������һ���˵����֣�ϵͳ��ʾHello ***.��

�����м���ܻ��пո�

 
�������н�����£�

Zhang Wei

Hello Zhang Wei.


��ʾ��������ո���ַ�������cin.getline()��

 
�����ʽ��

һ���ַ������м�����пո�

�����ʽ��

Hello ***.

ע�⣺���ʼ�һ���ո���ĩ����һ��Ӣ�ľ�㡣

 
����������

Zhang Wei

���������

Hello Zhang Wei.

ʱ�����ƣ�2000ms�ڴ����ƣ�32000kb
*/

int main()
{
	char name[50];
	cin.getline(name,50);
	cout<<"Hello "<<name<<"."<<endl;
	return 0;
}
