/*
题目内容：

输入若干学生的成绩，统计各班的成绩的平均值，并按班级名称的机内码从小到大排序输出。
学生成绩信息包括：班级，学号和成绩。班级名称是"000"'时表示成绩输入结束。
班级名称不超过20字符，学号不超过10个字符，成绩为整数，平均成绩为双精度实数，保留三位小数。班级数不超过10个，总人数不超过100个。


输入格式:

若干行，每行信息包括班级，学号和成绩，用空格隔开，
最后一行为：000 000 000


输出格式：

若干行，每行信息包括：班级和平均成绩，中间用一个空格隔开。行数由输入中的班级数确定。


输入样例：

航天  001 80
信计  001 90
航天  002 70
航天  003 80
信计  002 91
000 000 000


输出样例：

航天 76.667
信计 90.500

时间限制：500ms内存限制：32000kb
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
	// 输入学生数据 
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
	// 排序 
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
	// 输出 
	for (i = 0; i < k; i++)
	{
		cout<<c[i].Classname<<' '<<setiosflags(ios::fixed)<<setprecision(3)<<1.0*c[i].Sum/c[i].Num<<endl;
	}
	delete []c;
	return 0;
}


