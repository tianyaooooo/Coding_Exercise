/*
题目内容：

输入5行信息，生成文件A.txt。然后再次打开该文件，为每一行前面加一个行号后显示在屏幕上，行号占据4个字符宽，行号左对齐显示。


输入格式:

5行字符，每行字符中可以有空格，长度小于80


输出格式：

行号占据4个字符宽，行号左对齐显示。


输入样例：

AB
CD
EF
UV
XY


输出样例：

1   AB
2   CD
3   EF
4   UV
5   XY

时间限制：500ms内存限制：32000kb
*/

#include<iostream>
#include<fstream>
#include<iomanip>
using namespace std;

int main()
{
	ofstream outfile("A.txt");
	if(!outfile)
	{
		cout<<"output file open error"<<endl;
		return 1;
	}
	char ch[80];
	for (int i = 0; i < 5; i++)
	{
		cin.getline(ch, 80);
		outfile<<ch<<endl;
	}
	outfile.close();
	
	ifstream infile("A.txt");	
	if(!infile)
	{
		cout<<"input file open error"<<endl;
		return 1;
	}
	int count = 0;
	while(infile)
	{
		infile.getline(ch, 80);
		if(infile)
		{		
			count++;
			cout<<setw(4)<<setiosflags(ios::left)<<count;
			cout<<ch<<endl;	
		}
	}
	infile.close();
	return 0;
} 

