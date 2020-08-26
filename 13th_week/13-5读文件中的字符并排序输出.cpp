/*
题目内容：

输入n个字符写入文本文件A.txt，字符间用空格分开。在打开该文件，读取所有字符并排序后，按从小到大顺序写入B.txt（字符间用空格分开），同时将文件B的内容显示在屏幕上。


输入格式:

第一行输入数字个数n(100>n>=1)，第2行输入n个字符(以空格分开）。


输出格式：

按从小到大顺序输出n个字符(以空格分开）


输入样例：

5
Z Y X A C


输出样例：

A C X Y Z

时间限制：500ms内存限制：32000kb
*/

#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	ofstream out("A.txt");
	if(!out)
	{
		cout<<"output file open error"<<endl;
		return 1;
	}
	int N;
	cin>>N;
	char * p = new char[N];
	for (int i = 0; i < N; i++)
	{
		cin>>p[i];
		out<<p[i]<<' ';
	}
	out.close();
	
	ifstream in("A.txt");
	if(!in)
	{
		cout<<"input file open error"<<endl;
		return 1;
	}
	int count = 0;
	char c;
	while(in)
	{
		in>>c;
		if(in)
		{
			p[count] = c;
			count++;
		}
	}
	in.close();
	
	for (int j = 0; j < count - 1; j++)
	{
		for (int k = j + 1; k < count; k++)
		{
			if (p[j] > p[k])
			{
				swap(p[j], p[k]);
			}
		}
	}
	
	ofstream out2("B.txt");
	if(!out2)
	{
		cout<<"output file open error"<<endl;
		return 1;
	}
	for (int i = 0; i < count - 1; i++)
	{
		out2<<p[i]<<' ';
		cout<<p[i]<<' ';
	}
	out2<<p[count - 1]<<endl;
	cout<<p[count - 1]<<endl;
	out2.close();
	delete []p;
	return 0;
}

