/*
��Ŀ���ݣ�

��дһ�������࣬���ؾ���ӷ����㡣��A��B��C��Ϊm�У�n�еľ���Ҫ�������ʵ��C=A+B�Ĳ����� 


�����ʽ:

��һ��Ϊ���������������������Ϊ���������Ԫ��ֵ


�����ʽ��

��������ĺ͡�ע�⣬�����ÿ��Ԫ�أ���ĩû�пո�


����������

2 3
1 3 2
4 2 5
2 3 4
3 2 6


���������

3 6 6
7 4 11


��ʾ�������漰��ǳ���������⣬������ʹ�ö�̬���顣

ʱ�����ƣ�500ms�ڴ����ƣ�32000kb
*/

#include<iostream>
using namespace std;

class Matrix
{
private:
	double matrix[10][10];
	int m, n;
public:
	Matrix(int M, int N);
	Matrix operator + (Matrix B);
	void Show();	
};

Matrix::Matrix(int M = 0, int N = 0)
{
	m = M;
	n = N;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin>>matrix[i][j];
		}
	}
}

Matrix Matrix::operator +(Matrix B)
{
	Matrix temp;
	temp.m = m;
	temp.n = n;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			temp.matrix[i][j] = matrix[i][j] + B.matrix[i][j];
		}
	}
	return temp;
}

void Matrix::Show()
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n - 1; j++)
		{
			cout<<matrix[i][j]<<' ';
		}
		cout<<matrix[i][n - 1]<<endl;
	}
}

int main()
{
	int M, N;
	cin>>M>>N; 
	Matrix A(M,N), B(M, N);
	(A + B).Show();
	return 0;
}
