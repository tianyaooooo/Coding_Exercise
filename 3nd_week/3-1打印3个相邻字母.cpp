/*
��Ŀ���ݣ�

���û�����һ��Ӣ����ĸ�󣬳����ܹ�������ĸ���˳���ӡ��3�����ڵ���ĸ�������û��������ĸ���м䡣

�������н�����£�

d

cde

���������ĸ����β������ĸ�������ġ���������ĸZ����������YZA��

�����ʽ:

һ����ĸ�ַ�������Ϊ��д��Ҳ����ΪСд��


�����ʽ��

����3���ַ�����Сд���䡣


����������

d


���������

cde

ʱ�����ƣ�2000ms�ڴ����ƣ�32000kb
*/ 

#include <iostream>
using namespace std;
//���������Ƿ�����������ȼ��࣬�˴�ֱ�ӷ������ۣ������������ 
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
