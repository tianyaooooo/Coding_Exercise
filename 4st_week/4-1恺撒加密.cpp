/*
��Ŀ���ݣ�

�������ܷ����ܹ����ǣ���ԭ����Сд��ĸ����ĸ���������ĵ�3����ĸ�Ĵ�д��ʽ���滻����д��ĸ��ͬ��������Сд��ĸ�滻��������ĸ��������������ĸ���ɽ���ĸ��������δ�νӵġ�����ĸc����F���滻����ĸy��B���滻������ĸZ��c���档���ʵ�����¹��ܣ�����һ���ַ�����������ܺ������

�������н�����£�

AMDxyzXYZ

dpgABCabc


�����ʽ:

һ���ַ��������ᳬ��20���ַ�����26��Ӣ����ĸ���ɣ�


�����ʽ��

һ���ַ���


����������

AMDxyzXYZ


���������

dpgABCabc

ʱ�����ƣ�2000ms�ڴ����ƣ�32000kb
*/

#include<iostream>
using namespace std;

int main()
{
	char input[100];
	char output[100];
	int i;
	cin>>input;
	for (i=0; input[i]!='\0';i++)
	{
		if(input[i]>='a'&&input[i]<='z')
		{
			output[i]=(input[i]-'a'+3)%26+'A';
		}
		if(input[i]>='A'&&input[i]<='Z')
		{
			output[i]=(input[i]-'A'+3)%26+'a';
		}
	}
	output[i]='\0'; //Ҫ�ӣ�������ܳ���bug 
	cout<<output<<endl;
	return 0;
}
