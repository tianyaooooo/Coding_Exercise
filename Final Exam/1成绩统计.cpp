/*
��Ŀ���ݣ�

��������ѧ���ĳɼ���ͳ�Ƹ���ĳɼ���ƽ��ֵ�������༶���ƵĻ������С�������������
ѧ���ɼ���Ϣ�������༶��ѧ�źͳɼ����༶������"000"'ʱ��ʾ�ɼ����������
�༶���Ʋ�����20�ַ���ѧ�Ų�����10���ַ����ɼ�Ϊ������ƽ���ɼ�Ϊ˫����ʵ����������λС�����༶��������10����������������100����


�����ʽ:

�����У�ÿ����Ϣ�����༶��ѧ�źͳɼ����ÿո������
���һ��Ϊ��000 000 000


�����ʽ��

�����У�ÿ����Ϣ�������༶��ƽ���ɼ����м���һ���ո�����������������еİ༶��ȷ����


����������

����  001 80
�ż�  001 90
����  002 70
����  003 80
�ż�  002 91
000 000 000


���������

���� 76.667
�ż� 90.500

ʱ�����ƣ�500ms�ڴ����ƣ�32000kb
*/

#include<iostream>
#include<cstring>
#include<iomanip>
using namespace std;

typedef struct Student
{
	char Classname[20];
	char ID[10];
	int Score;
} STU;

typedef struct Class
{
	char Classname[20];
	int Num;
	int Sum;
} CLASS;

int main()
{
	STU s;
	CLASS * c = new CLASS[10];
	int i, j, k = 0;
	const char * str = "000";
	// ����ѧ������ 
	while(1)
	{
		cin>>s.Classname>>s.ID>>s.Score;
		if (strcmp(s.Classname, str) == 0)
		{
			break;
		}
		for (i = 0; i < k; i++)
		{
			if (strcmp(c[i].Classname, s.Classname) == 0)
			{
				c[i].Sum += s.Score;
				c[i].Num += 1;
				break;
			}
		}
		if (i == k)
		{
			strcpy(c[k].Classname, s.Classname);
			c[k].Sum = s.Score;
			c[k].Num = 1;
			k++;
		}
	}
	// ���� 
	for (i = 0; i < k - 1; i++)
	{
		for (j = i + 1; j < k; j++)
		{
			if (c[i].Classname > c[j].Classname)
			{
				swap(c[i], c[j]);
			}
		}
	}
	// ��� 
	for (i = 0; i < k; i++)
	{
		cout<<c[i].Classname<<' '<<setiosflags(ios::fixed)<<setprecision(3)<<1.0*c[i].Sum/c[i].Num<<endl;
	}
	delete []c;
	return 0;
}


