/*
��Ŀ���ݣ�

��д������������������ֵ���ú�����ԭ��Ϊ  void reset(int *a, int *b);

�����ڲ�������ֵ����Ϊ��������ԭֵ��ƽ����(����С������������)��


�����ʽ:

���������õ�ֵ


�����ʽ��

���ú������ֵ


����������

7 14


���������

11 11

ʱ�����ƣ�500ms�ڴ����ƣ�32000kb
*/

#include<iostream>
using namespace std;

void reset(int *a, int *b)
{
	int ave;
	ave = (int) ((*a + *b)/2.0 + 0.5);
	*a = ave;
	*b = ave;
}

int main()
{
	int x, y;
	cin>>x>>y;
	reset(&x, &y);
	cout<<x<<' '<<y<<endl;
	return 0;
} 
