/*
��Ŀ���ݣ�

����n�����֣�ʵ������������д���ļ�out1.txt������֮���ÿո�ֿ���Ȼ���ٴδ򿪸��ļ�������ȫ�����֣���������ƽ��ֵ���������Ļ�ϡ�


�����ʽ:

��һ���������ָ���n���Ժ��n��ÿ������һ��ʵ����


�����ʽ��

���n����ƽ��ֵ����ʽ��Avg=ƽ��ֵ


����������

5
1.0
2.0
3.0
4.0
5.0


���������

Avg=3

ʱ�����ƣ�500ms�ڴ����ƣ�32000kb
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

