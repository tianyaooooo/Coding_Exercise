/*
题目内容：

为顾客找零钱时，希望选用的纸币张数最少。例如73元，希望零钱的面值为五十元1张，二十元1张，一元3张。设零钱面值有五十元、二十元、十元、五元和一元，请编写程序，用户输入100以下的数，计算找给顾客的各面值的纸币张数，数据间以空格隔开。

 
输入格式：

一个小于100、大于等于0的整数。

输出格式：

5个整数，数据间用一个英文空格分隔。

输入样例：

73

输出样例：

1 1 0 0 3


时间限制：1000ms内存限制：32000kb
*/

#include<iostream>
using namespace std;

int main()
{
	int money, fifty=0, twenty=0, ten=0, five=0, one=0;
	cin>>money;
	fifty=money/50;
	money-=fifty*50;
	twenty=money/20;
	money-=twenty*20;
	ten=money/10;
	money-=ten*10;
	five=money/5;
	money-=five*5;
	one=money;
	cout<<fifty<<" "<<twenty<<" "<<ten<<" "<<five<<" "<<one<<endl;
	
	return 0;
}
