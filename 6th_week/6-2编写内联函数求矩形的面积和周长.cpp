/*
题目内容：

编写函数求矩形的面积和周长，由于算式非常简单，请使用内联函数方式编写，提高程序运行效率

输入格式:

矩形的长和宽，均为整数

输出格式：

矩形的面积和周长

输入样例：

3 5

输出样例：

15 16

时间限制：500ms内存限制：32000kb
*/

#include<iostream>
using namespace std;

inline int Area(int x, int y)
{
	return x*y;
}

inline int Primeter(int x, int y)
{
	return 2*(x+y);
}

int main()
{
	int a,b,area,primeter;
	cin>>a>>b;
	area=Area(a,b);
	primeter=Primeter(a,b);
	cout<<area<<" "<<primeter<<endl;
	return 0;
}
