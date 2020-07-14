#include<iostream>
using namespace std;

/*
题目内容：

编写程序，输入一个人的名字，系统显示Hello ***.。

人名中间可能会有空格。

 
程序运行结果如下：

Zhang Wei

Hello Zhang Wei.


提示：输入带空格的字符串，用cin.getline()。

 
输入格式：

一个字符串，中间可能有空格。

输出格式：

Hello ***.

注意：单词间一个空格，行末紧跟一个英文句点。

 
输入样例：

Zhang Wei

输出样例：

Hello Zhang Wei.

时间限制：2000ms内存限制：32000kb
*/

int main()
{
	char name[50];
	cin.getline(name,50);
	cout<<"Hello "<<name<<"."<<endl;
	return 0;
}
