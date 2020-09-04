/*
火星人使用的数制是这样的：使用A、B、C、D、E五个符号，分别与我们的1, 2, 3, 4, 5对应，没有数字0；逢6进1，以A当5，前一个A相当于5，第2个A相当于1，结果AA对应我们的十进制数6。那么，AE对应十进制10，BA对应十进制11，AAA对应十进制31（(1*5+1）*5+1=31）
编写程序，将十进制数转换为火星数字。

输入格式：一个正整数

输出格式：一个有A、B、C、D、E组成的火星人数字（大写）。

输入样例：
62

输出样例：
BBB

提示：采用循环加1的方法。例如输入a，循环a次，每次加1。

时间限制：2000ms内存限制：32000kb
*/

 
#include<iostream>
#include<vector>
using namespace std;

// 未采用提示方法，此方法更简单
int main()
{
	vector<int> v;
	int n, i;
	cin>>n;
	while (n != 0)
	{
		for (i = 1; i <= 5; i++)
		{
			if ((n - i)%5 == 0)
			{
				v.push_back(i);
				break;
			}
		}
		n = (n - i)/5;
	}
	vector<int>::iterator it;
	for (it = v.end() - 1; it >= v.begin(); it--)
	{
		cout<<(char)((*it) + 'A' - 1);
	}
	cout<<endl;
	return 0;
}


