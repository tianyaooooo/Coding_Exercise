/*
题目内容：

连续录入5首歌的歌名、歌手和点击率清单并按照点击率由高到低的顺序显示歌曲清单的信息。如果点击率相同，则按照录入的顺序显示。

歌曲清单格式如下：

曲名  演唱者  点击率


输入格式:

5个歌曲的清单，其中曲名（不会超过50个字符）、演唱者为字符串（不会超过20个字符），点击率为整型数


输出格式：

5个歌曲的清单（曲名、演唱者，点击率之间用一个英文空格隔开，末尾没有空格）


输入样例：

匆匆那年 王菲 90
小苹果 筷子兄弟 100
当你老了 莫文蔚 80
最炫民族风 凤凰传奇 85
平凡之路 朴树 95


输出样例：

小苹果 筷子兄弟 100
平凡之路 朴树 95
匆匆那年 王菲 90
最炫民族风 凤凰传奇 85
当你老了 莫文蔚 80


时间限制：2000ms内存限制：32000kb
*/

#include<iostream>
using namespace std;

struct Music
{
	char name[50];
	char author[20];
	int count;
}music[5];

int main()
{
	//=================输入=============================== 
	for (int i=0;i<5;i++)
	{
		cin>>music[i].name>>music[i].author>>music[i].count;
	}
	//=================排序===============================
	//因为题目要求相等时，保持输入顺序输出，
	//故不能用选择排序，因为在swap时会破坏原来顺序，
	//因此这里利用插入排序。 
	
	for (int i=1;i<5;i++)
	{
		struct Music temp=music[i];
		int j=i-1;
		while (j>=0&&music[j].count<temp.count)
		{
			music[j+1]=music[j];
			j--;
		}
		music[j+1]=temp;
	 } 
	 //=================输出====================
	for (int i=0;i<5;i++)
	{
	 	cout<<music[i].name<<" "<<music[i].author<<" "<<music[i].count<<endl;
    } 
	
	return 0;
}
