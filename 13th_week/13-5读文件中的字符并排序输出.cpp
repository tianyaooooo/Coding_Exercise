/*
��Ŀ���ݣ�

����n���ַ�д���ı��ļ�A.txt���ַ����ÿո�ֿ����ڴ򿪸��ļ�����ȡ�����ַ�������󣬰���С����˳��д��B.txt���ַ����ÿո�ֿ�����ͬʱ���ļ�B��������ʾ����Ļ�ϡ�


�����ʽ:

��һ���������ָ���n(100>n>=1)����2������n���ַ�(�Կո�ֿ�����


�����ʽ��

����С����˳�����n���ַ�(�Կո�ֿ���


����������

5
Z Y X A C


���������

A C X Y Z

ʱ�����ƣ�500ms�ڴ����ƣ�32000kb
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

