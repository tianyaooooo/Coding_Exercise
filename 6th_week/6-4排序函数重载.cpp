/*
��Ŀ���ݣ�

��дһ�����ص������������Զ����������������������ĸ���������������Ӵ�С����,������Ϊsort,������������Ӧʹ�õݹ�ķ���������print��������һ����ʾ����������Ԫ�ء�

���������£�

int main()

{

int a,b,c,d;

int data[100];

int k,n,i;

  cin>>k;

  switch(k)

  {

    case 1:

        cin>>a>>b;

        sort(a,b);

        cout<<a<<" "<<b<<endl;

        break;

    case 2:

        cin>>a>>b>>c;

        sort(a,b,c);

        cout<<a<<" "<<b<<" "<<c<<endl;          

        break;      

    case 3:

        cin>>a>>b>>c>>d;

        sort(a,b,c,d);

        cout<<a<<" "<<b<<" "<<c<<" "<<d<<endl;

        break;  

    case 4:

        cin>>n;

        for(i=0;i<n;i++)

           {

            cin>>data[i];

        } 

        sort(data,n);

        print(data,n);

        break;      

  }

  return 0;

}

�����ʽ:

������������Լ�������

�����ʽ��

���������ݣ�һ�У��Ӵ�С��ĩβû�пո�

����������

4

10

22 15 20 16 3 27 14 64 108 10

���������

108 64 27 22 20 16 15 14 10 3

���ύ�������򣬰���������main()

ʱ�����ƣ�500ms�ڴ����ƣ�32000kb
*/

#include<iostream>
using namespace std;

void sort(int &a, int &b)
{
	if (b>a)
	{
		int temp;
		temp=a;
		a=b;
		b=temp;
	}
}

void sort(int &a,int &b, int &c)
{
	sort(a,b);
	sort(a,c);
	sort(b,c);
}

void sort(int &a,int &b,int &c,int &d)
{
	sort(a,b,c);
	sort(a,d);
	sort(b,c,d);
}

void sort(int e[],int len)
{
	for (int i=0;i<len-1;i++)
	{
		for (int j=0;j<len-i-1;j++)
		{
			sort(e[j],e[j+1]);
		}
	}
}

void print(int e[],int len)
{
	for (int i=0;i<len-1;i++)
	{
		cout<<e[i]<<' ';
	}
	cout<<e[len-1]<<endl;
}

int main()

{

int a,b,c,d;

int data[100];

int k,n,i;

  cin>>k;

  switch(k)

  {

    case 1:

        cin>>a>>b;

        sort(a,b);

        cout<<a<<" "<<b<<endl;

        break;

    case 2:

        cin>>a>>b>>c;

        sort(a,b,c);

        cout<<a<<" "<<b<<" "<<c<<endl;          

        break;      

    case 3:

        cin>>a>>b>>c>>d;

        sort(a,b,c,d);

        cout<<a<<" "<<b<<" "<<c<<" "<<d<<endl;

        break;  

    case 4:

        cin>>n;

        for(i=0;i<n;i++)

           {

            cin>>data[i];

        } 

        sort(data,n);

        print(data,n);

        break;      

  }

  return 0;

}
