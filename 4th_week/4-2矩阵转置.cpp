/*
题目内容：

用户输入矩阵阶数，然后按行输入所有矩阵元素（整数），将该矩阵转置输出。阶数应是[1,5]之间的整数，不在该区间时，显示“matrix order error”。

 
输入格式：

第1行，一个整数，表示阶数n。

以后是n行数据，每行n个整数，是按行输入的矩阵元素。

 
输出格式：

n行转置的数据，数据间以一个空格分隔，行末没有空格。


输入输出样例1

输入：

4
4 6 8 9
2 7 4 5
3 8 16 15
1 5 7 11

输出：

4 2 3 1
6 7 8 5
8 4 16 7
9 5 15 11

 
输入输出样例2

输入：

0

输出：

matrix order error


注意：转置应该是存储矩阵的数组中的元素实现了转置运算，而不仅是显示效果。


时间限制：2000ms内存限制：32000kb
*/

#include<iostream>
using namespace std;

int main()
{
	int A[5][5],B[5][5];
	int n;
	cin>>n;
	if (n<1||n>5)
	{
		cout<<"matrix order error"<<endl;
	}
	else
	{
		for (int i=0;i<n;i++)
		{
			for (int j=0;j<n;j++)
			{
				cin>>A[i][j];
				B[j][i]=A[i][j];
			}
		}
		for (int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				cout<<B[i][j]<<" ";
			}
			cout<<endl;
		}	
	}
	
	return 0;
}
