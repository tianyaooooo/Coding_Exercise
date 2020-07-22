/*
题目内容：

猴子摘桃：一天，一只猴子摘了若干桃子，当天吃掉一半，觉得不过瘾，又吃了一个；第二天将剩下的桃子吃掉一半又多吃了一个；…，每天将前一天剩下的桃子吃掉一半又多吃一个，直到第n天，发现只剩下一个桃子，问第一天它摘了多少桃子。

编写递归函数，计算第一天猴子摘的桃子的数量。在主函数中输入n，调用函数计算第一天摘的桃子的数量，在主函数中输出。

输入:剩下一只桃子的天数n，n>=1。

输出：第一天摘的桃子数量。

【提示】函数格式：int   monkeyandPeak(int k,int n)，其中n是1只桃子的天数，k是求哪天的桃子数，返回是第k天的桃子数。主函数的调用格式：

     count= monkeyandPeak(1,n);  //第n天只剩1只桃，求第1天的桃子数

【注意】使用递归实现。

样例1输入：

10

样例1输出：

1534

时间限制：500ms内存限制：32000kb
*/

#include<iostream>
using namespace std;

int monkeyandpeak(int k, int n);

int main()
{
	int n,count;
	cin>>n;
	count=monkeyandpeak(1,n);
	cout<<count<<endl;
	return 0;
}

int monkeyandpeak(int k,int n)
{
	if (k==n)
	{
		return 1;
	}
	else
	{
		return (monkeyandpeak(k+1,n)+1)*2;
	}
} 
