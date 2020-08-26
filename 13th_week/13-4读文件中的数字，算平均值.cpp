/*
题目内容：

输入n个数字（实数），将他们写入文件out1.txt，数字之间用空格分开。然后再次打开该文件，读出全部数字，计算他们平均值并输出在屏幕上。


输入格式:

第一行输入数字个数n，以后的n行每行输入一个实数。


输出格式：

输出n个数平均值。格式：Avg=平均值


输入样例：

5
1.0
2.0
3.0
4.0
5.0


输出样例：

Avg=3

时间限制：500ms内存限制：32000kb
*/

#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	ofstream out("out1.txt");
	if(!out)
	{
		cout<<"output file open error"<<endl;
		return 1;
	}
	int N;
	cin>>N;
	double x;
	for (int i = 0; i < N; i++)
	{
		cin>>x;
		out<<x<<' ';
	}
	out.close();
	
	ifstream in("out1.txt");
	if(!in)
	{
		cout<<"input file open error"<<endl;
		return 1;
	}
	double sum = 0;
	while(in)
	{
		in>>x;
		if (in)
		{
			sum += x;
		}
	}
	in.close();
	cout<<"Avg="<<sum/N<<endl;
	return 0;	
}

