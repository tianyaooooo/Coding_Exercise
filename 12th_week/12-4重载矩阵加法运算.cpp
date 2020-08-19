/*
题目内容：

编写一个矩阵类，重载矩阵加法运算。设A，B，C均为m行，n列的矩阵，要求程序能实现C=A+B的操作。 


输入格式:

第一行为矩阵的行数和列数，下面为两个矩阵的元素值


输出格式：

两个矩阵的和。注意，输出的每行元素，行末没有空格。


输入样例：

2 3
1 3 2
4 2 5
2 3 4
3 2 6


输出样例：

3 6 6
7 4 11


提示：由于涉及深浅拷贝的问题，不建议使用动态数组。

时间限制：500ms内存限制：32000kb
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
