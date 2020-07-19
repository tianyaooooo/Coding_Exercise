/*
题目内容：

编写函数去除字符串中包含的非字母字符(不包括空格)，并将小写字母转换成大写字母。

注意，不在函数中输出。输入输出应在主函数中进行。

输入格式:

待转换的字符串，字符串间会包含空格，长度不超过200。

输出格式：

转换后的字符串

注意：本题应使用字符数组实现，不能使用字符串处理库函数，不能使用string类。

输入样例：

happy new year!

输出样例：

HAPPY NEW YEAR

时间限制：500ms内存限制：32000kb
*/

#include<iostream>
using namespace std;

void trans(char str[])
{
	int i=0,count=0;
	while (str[i]!='\0')
	{
		if (str[i]!=' '&& (str[i]<'a'||str[i]>'z')&&(str[i]<'A'||str[i]>'Z'))
		{
			i++;
			count++;
		}
		else if (str[i]==' '||(str[i]>='A'&&str[i]<='Z'))
		{
			str[i-count]=str[i];
			i++;
		}
		else 
		{
			str[i-count]=str[i]-'a'+'A';
			i++;
		}
	}
	str[i-count]='\0';
}

int main()
{
	char a[201];
	cin.getline(a,200);
	trans(a);
	cout<<a;
	return 0;
}
