/*
��Ŀ���ݣ�

��д��������n�׷���ĶԽ���Ԫ��֮�͡���д�������û��������Ľ���n����̬����n*n�Ĵ洢�ռ䣬������n�С�n�е�Ԫ�أ����ú��������ĶԽ�Ԫ��֮�ͣ������������������͡���Ԫ�ؾ�Ϊ������n>=1��

������ʽ��int   sumDiagonal(int *a,int n);

�����ʽ:

һ��������n����ʾ����Ľ�����

n�С�n�еľ���Ԫ�ء����ݼ��ÿո������

�����ʽ��

һ������

����������

3
6 1 2
1 13 6
62 4 35

���������

54

ʱ�����ƣ�1000ms�ڴ����ƣ�32000kb
*/

#include<iostream>
using namespace std;

int sumDiagonal(int **a, int n); // ��Ŀ���� *a���Ҿ��������� 

int main()
{
	int n;
	cin>>n;
	int * * p = new int * [n];
	for (int i = 0; i < n; i++)
	{
		p[i] = new int[n];
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin>>p[i][j];
		}
	}
	cout<<sumDiagonal(p, n)<<endl;
	return 0;
}

int sumDiagonal(int **a, int n)
{
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += a[i][i];
	}
	return sum;
}
