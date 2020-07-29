/*
题目内容：

编写程序，将十进制点分的IP转换为32位二进制IP地址。程序要能验证输入的十进制点分ＩＰ地址的合法性。用户输入的ＩＰ不和法时，输出"data error"。

请使用模块化程序设计的思想，将功能模块编写成函数。通过指针传递参数，操作数据，返回结果。在主函数中输入IP地址，调用函数进行合法性验证和转换，在主函数中输出32位二进制IP。


输入格式:

十进制点分IP地址(英文句点)


输出格式：

32位二进制数（二进制字符串）


输入样例：

202.151.96.33


输出样例：

11001010100101110110000000100001


提示：十进制转换为二进制。对整数部分，除2取余，直到商为0。例如

13/2=6.....1(低位)

6/2=3......0

3/2=1......1

1/2=0......1

转换后的二进制数位1101


时间限制：2000ms内存限制：32000kb
*/

#include<iostream>
#include<cstring>
using namespace std;

/* 十进制点分ＩＰ地址的合法性检查： 
1. 是否有不合法字符
2. 是否有3个 .
3. 3个 . 是否相邻或者在收尾
4. 4个部分的数值是否介于0-255 
*/

bool check_trans(char * str); 

int main()
{
	char str[16];
	cin.getline(str, 15);
	if (!check_trans(str)) 
	{
		cout<<"data error"<<endl;
	}
	return 0;
}

bool check_trans(char * str)
{
	int dots[3]; // 记录 . 的位置 
	int cnt = 0; // 记录 . 的数量 
	int len = strlen(str);
	for (int i = 0; i < len; i++)
	{
		if ((str[i] > '9'||str[i] < '0')&&str[i] != '.')
		{
			return false; // 1. 是否有不合法字符
		}
		else if (str[i] == '.')
		{ 
			if (cnt >= 3)
			{
				return false; // 2. 是否大于3个 .
			}
			dots[cnt] = i;
			cnt ++; 
		}
	}
	if (cnt < 3||dots[0] == 0||dots[cnt - 1] == len -1||(dots[1] - dots[0]) == 1||(dots[2] - dots[1]) == 1)
	{
		return false; // 2. 是否正好3个 .
		              // 3. 3个 . 是否相邻或者在收尾
	}
	
	// 将字符串转换成数 
	int integers[4] = {0, 0, 0, 0};
	int k = 0;
	for (int i = 0; i < 4; i++)
	{
		while (str[k] !='.'&&k < len)
		{
			integers[i] = integers[i]*10 + str[k] - '0';
			k++;
		}
		k++;
		if (integers[i] < 0||integers[i] > 255)
		{
			return false; // 4. 4个部分的数值是否介于0-255 
		}
	}
	
	// trans 部分 
	int bin[32] = {0};
	for (int i = 0; i < 4; i++)
	{
		for (int t = 8*(i + 1) -1; t >= 8*i; t--)
		{
			int quotient = integers[i]/2;
			int remain = integers[i]%2;
			if (quotient == 0) 
			{
				bin[t] = remain;
				break;
			}
			else
			{
				bin[t] = remain;
				integers[i] = quotient;
			}
		}
	}
	for (int i = 0; i < 32; i++)
	{
		cout<<bin[i];
	}
	return true;
}
