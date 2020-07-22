/*
题目内容：

编写一组重载的排序函数，可以对两个整数、三个整数、四个整数、整数数组从大到小排序,函数名为sort,其中数组排序应使用递归的方法，另补充print函数，在一行显示排序后的数组元素。

主函数如下：

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

输入格式:

请根据主程序自己分析。

输出格式：

排序后的数据，一行，从大到小，末尾没有空格。

输入样例：

4

10

22 15 20 16 3 27 14 64 108 10

输出样例：

108 64 27 22 20 16 15 14 10 3

请提交完整程序，包括给出的main()

时间限制：500ms内存限制：32000kb
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
