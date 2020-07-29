/*
题目内容：

用户首先输入两个整数m和n,然后输入m*n个元素，建立一个m*n的二维数组。要求使用 行指针 来遍历这个二维数组，输出该数组中所有元素的和。

输入格式:

首先输入两个整数m和n,然后依次输入m*n个元素

输出格式：

二维数组中所有元素的和

输入样例：

2 3
1 3 5 
2 4 6

输出样例：

21

时间限制：500ms内存限制：32000kb
*/

#include<iostream>
using namespace std;

int main()
{
	int m, n, sum = 0;
	cin>>m>>n;
	//动态申请二维数组的方法
	int * * p = new int * [m];
	for (int i = 0; i < m; i++)
	{
		p[i] = new int[n];
	}
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin>>p[i][j];
			sum += p[i][j];
		}
	}
	cout<<sum<<endl;
	//释放二维数组申请的空间
	for (int i = 0; i < m; i++)
	{
		delete []p[i]; //释放 m 个大小为 n 的一维数组
	}
	delete []p; //释放 int 指针类型 数组
	return 0;
}
