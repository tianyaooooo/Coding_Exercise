/*
题目内容：

编写一个程序，从键盘输入一行字符（可包含各种字符，遇回车符结束），写入到文件a1.txt中；再从a1.txt中读出文件内容，将其中的小写字母转换成大写字母后显示在屏幕上。


提示：输入带空格的字符串，用cin.getline()。


输入格式:

一个字符串，中间可能有大写或小写字母、空格、数字以及其他标点符号。长度小于80。


输出格式：

输出同输入内容相同的字符串，其中小写字母变成大写字母。


输入样例：

We are students from Xi’an Jiaotong University.


输出样例：

WE ARE STUDENTS FROM XI’AN JIAOTONG UNIVERSITY.

时间限制：500ms内存限制：32000kb
*/

#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	ofstream out("a1.txt");
	if(!out)
	{
		cout<<"output file open error"<<endl;
		return 1;
	}
	char ch[80];
	cin.getline(ch, 80);
	out<<ch<<endl;
	out.close();
	
	ifstream in("a1.txt");
	if(!in)
	{
		cout<<"input file open error"<<endl;
		return 1;
	}
	in.getline(ch, 80);
	in.close();
	
	int i = 0;
	while (ch[i] != '\0')
	{
		if ('a' <= ch[i] && ch[i] <= 'z')
		{
			cout<<(char)('A' + ch[i] - 'a'); 
		}
		else
		{
			cout<<ch[i];
		}
		i++;
	}
	cout<<endl;
	return 0;
}

