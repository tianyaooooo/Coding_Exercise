/*
题目内容：

当用户输入一个英文字母后，程序能够按照字母表的顺序打印出3个相邻的字母，其中用户输入的字母在中间。

程序运行结果如下：

d

cde

这里假设字母表首尾两个字母是相连的。若输入字母Z，则程序输出YZA。

输入格式:

一个字母字符，可能为大写，也可能为小写。


输出格式：

连续3个字符，大小写不变。


输入样例：

d


输出样例：

cde

时间限制：2000ms内存限制：32000kb
*/ 

#include <iostream>
using namespace std;
//由于我总是翻不清求余算等价类，此处直接分类讨论，好在情况很少 
int main()
{
	char prev, now, next;
	cin>>now;
	switch(now)
	{
		case 'z': cout<<"yza"<<endl;break;
		case 'Z': cout<<"YZA"<<endl;break;
		case 'a': cout<<"zab"<<endl;break;
		case 'A': cout<<"ZAB"<<endl;break;
		default:
			{
				prev=now-1;
				next=now+1;
				cout<<prev<<now<<next<<endl;
			}
	}
	return 0;
}
