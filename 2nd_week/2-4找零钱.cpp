/*
��Ŀ���ݣ�

Ϊ�˿�����Ǯʱ��ϣ��ѡ�õ�ֽ���������١�����73Ԫ��ϣ����Ǯ����ֵΪ��ʮԪ1�ţ���ʮԪ1�ţ�һԪ3�š�����Ǯ��ֵ����ʮԪ����ʮԪ��ʮԪ����Ԫ��һԪ�����д�����û�����100���µ����������Ҹ��˿͵ĸ���ֵ��ֽ�����������ݼ��Կո������

 
�����ʽ��

һ��С��100�����ڵ���0��������

�����ʽ��

5�����������ݼ���һ��Ӣ�Ŀո�ָ���

����������

73

���������

1 1 0 0 3


ʱ�����ƣ�1000ms�ڴ����ƣ�32000kb
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
