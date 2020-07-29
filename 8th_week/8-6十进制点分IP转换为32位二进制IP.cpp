/*
��Ŀ���ݣ�

��д���򣬽�ʮ���Ƶ�ֵ�IPת��Ϊ32λ������IP��ַ������Ҫ����֤�����ʮ���Ƶ�֣ɣе�ַ�ĺϷ��ԡ��û�����ģɣв��ͷ�ʱ�����"data error"��

��ʹ��ģ�黯������Ƶ�˼�룬������ģ���д�ɺ�����ͨ��ָ�봫�ݲ������������ݣ����ؽ������������������IP��ַ�����ú������кϷ�����֤��ת�����������������32λ������IP��


�����ʽ:

ʮ���Ƶ��IP��ַ(Ӣ�ľ��)


�����ʽ��

32λ�����������������ַ�����


����������

202.151.96.33


���������

11001010100101110110000000100001


��ʾ��ʮ����ת��Ϊ�����ơ����������֣���2ȡ�ֱ࣬����Ϊ0������

13/2=6.....1(��λ)

6/2=3......0

3/2=1......1

1/2=0......1

ת����Ķ�������λ1101


ʱ�����ƣ�2000ms�ڴ����ƣ�32000kb
*/

#include<iostream>
#include<cstring>
using namespace std;

/* ʮ���Ƶ�֣ɣе�ַ�ĺϷ��Լ�飺 
1. �Ƿ��в��Ϸ��ַ�
2. �Ƿ���3�� .
3. 3�� . �Ƿ����ڻ�������β
4. 4�����ֵ���ֵ�Ƿ����0-255 
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
	int dots[3]; // ��¼ . ��λ�� 
	int cnt = 0; // ��¼ . ������ 
	int len = strlen(str);
	for (int i = 0; i < len; i++)
	{
		if ((str[i] > '9'||str[i] < '0')&&str[i] != '.')
		{
			return false; // 1. �Ƿ��в��Ϸ��ַ�
		}
		else if (str[i] == '.')
		{ 
			if (cnt >= 3)
			{
				return false; // 2. �Ƿ����3�� .
			}
			dots[cnt] = i;
			cnt ++; 
		}
	}
	if (cnt < 3||dots[0] == 0||dots[cnt - 1] == len -1||(dots[1] - dots[0]) == 1||(dots[2] - dots[1]) == 1)
	{
		return false; // 2. �Ƿ�����3�� .
		              // 3. 3�� . �Ƿ����ڻ�������β
	}
	
	// ���ַ���ת������ 
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
			return false; // 4. 4�����ֵ���ֵ�Ƿ����0-255 
		}
	}
	
	// trans ���� 
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
