/*
��Ŀ���ݣ�

����5����Ϣ�������ļ�A.txt��Ȼ���ٴδ򿪸��ļ���Ϊÿһ��ǰ���һ���кź���ʾ����Ļ�ϣ��к�ռ��4���ַ����к��������ʾ��


�����ʽ:

5���ַ���ÿ���ַ��п����пո񣬳���С��80


�����ʽ��

�к�ռ��4���ַ����к��������ʾ��


����������

AB
CD
EF
UV
XY


���������

1   AB
2   CD
3   EF
4   UV
5   XY

ʱ�����ƣ�500ms�ڴ����ƣ�32000kb
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

