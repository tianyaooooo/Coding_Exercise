/*
题目内容：

编写一个乘法计算器程序。用户输入两个数，计算它们的乘积并显示。

 
程序运行结果如下：

3.4  72

244.8

 
提示：声明三个double类型的变量，乘法用*号。

 
输入格式：

两个实数，中间用空格隔开。

输出格式：

计算结果，实数。

 
输入样例：

3.4  72

输出样例：

244.8


时间限制：2000ms内存限制：32000kb
*/

#include<iostream>
using namespace std;


int main()
{
	double a,b;
	cin>>a>>b;
	cout<<a*b<<endl;
	return 0;
}
