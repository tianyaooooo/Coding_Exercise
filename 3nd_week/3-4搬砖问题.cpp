/*
��Ŀ���ݣ�

����n��ש��Ҫ��n��һ�ΰ��꣬�ٶ�����һ�ο��԰�4�飬Ů��һ�ο��԰�3�飬����С����1�飬������n�������ˡ�Ů�˺�С��������������������ש��n��������ܵĽ��������

�������н�����£�

50

men0
women10
children40
men5
women3
children42

���û��������������ʾ��ʾ��Ϣ��no result!��

�������н�����£�

1

no result!

�����ʽ:

��ʾ������������


�����ʽ��

�����������������ˡ�Ů�˺ͺ��ӵ�����������ʾ��Ϣ��no result!��

�����ʽ���������ж��鷽��ʱ���������������ٵ����˳�����������������ͬʱ��Ů���������ٵ��ࡣ


����������

50


���������

men0
women10
children40
men5
women3
children42


ʱ�����ƣ�2000ms�ڴ����ƣ�32000kb
*/

#include <iostream>
using namespace std;

int main()
{
	int men, women, children;
	int n;
	int x=0, y=0, z=0;
	cin >> n;
	for (men = 0; men <= n / 4; men++) //ѭ��������ʵ����ֱ��д��n��ֻ����children�ж���䴦��Ӵ��ڵ���0������ 
	{
		for (women = 0; women <= (n-4*men)/ 3; women++)
		{
			children = 2 * (n - 4 * men - 3 * women);
			if (children == n - men - women)
			{
				x = men; y = women; z = children;
				cout << "men" << men << endl;
				cout << "women" << women << endl;
				cout << "children" << children << endl;
			}
		}
	}
	if (x == 0 || y == 0 || z == 0)
		cout << "no result!" << endl;
	return 0;
}
