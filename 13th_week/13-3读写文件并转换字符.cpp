/*
��Ŀ���ݣ�

��дһ�����򣬴Ӽ�������һ���ַ����ɰ��������ַ������س�����������д�뵽�ļ�a1.txt�У��ٴ�a1.txt�ж����ļ����ݣ������е�Сд��ĸת���ɴ�д��ĸ����ʾ����Ļ�ϡ�


��ʾ��������ո���ַ�������cin.getline()��


�����ʽ:

һ���ַ������м�����д�д��Сд��ĸ���ո������Լ����������š�����С��80��


�����ʽ��

���ͬ����������ͬ���ַ���������Сд��ĸ��ɴ�д��ĸ��


����������

We are students from Xi��an Jiaotong University.


���������

WE ARE STUDENTS FROM XI��AN JIAOTONG UNIVERSITY.

ʱ�����ƣ�500ms�ڴ����ƣ�32000kb
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

