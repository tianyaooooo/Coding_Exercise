/*
题目内容：

歌唱大赛选手成绩计算方法如下：去掉一个最高分，去掉一个最低分，将剩下分数的平均值作为选手的最后成绩。这里假设共有10位评委，都是按照百分制打分。

程序运行结果如下：

88 90 97 89 85 95 77 86 92 83

88.5

如果评委给出的成绩不在0~100分之间，将给出错误提示。

程序运行结果如下：

101 90 97 89 85 95 77 86 92 83

the score is invalid.

输入格式:

10个[0,100]之间的数.


输出格式：

1个可以表示小数的数或者提示信息“the score is invalid.”

平均值变量使用double型。

输入样例：

88 90 97 89 85 95 77 86 92 83


输出样例：

88.5

时间限制：2000ms内存限制：32000kb
*/ 

#include <iostream>
using namespace std;

int main()
{
	int a[10];
	int min=101,max=-1, sum;
	double ave;
	for (int i=1; i<=10; i++)
	{
		cin>>a[i];
		if (a[i]<0||a[i]>100)
		{
			cout<<"the score is invalid."<<endl;
			return 0;//如果用break，则只是打断此for循环，下面的计算平均数还会执行 
		}
		if (a[i]<min)
		{
			min=a[i];
		}
		if (a[i]>max)
		{
			max=a[i];
		}
		sum+=a[i];
	}
	ave=(sum-max-min)/8.0;
	cout<<ave<<endl;
	return 0;
}
