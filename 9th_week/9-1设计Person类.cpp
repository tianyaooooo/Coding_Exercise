/*
题目内容：

设计一个Person类，包含name、age、sex属性以及对这些属性操作的方法。实现并测试这个类。
根据类的封装性要求，把name、age、sex声明为私有的数据成员，声明公有的成员函数Register()、ShowMe()来访问这些属性，在Register()函数中对数据成员进行初始化。person1通过cin来得到信息，person2通过Register("Zhang3", 
19, 'm') 来得到信息。


输入格式:

person1的信息


输出格式：

person1和person2的信息


输入样例：

Li4 18 f


输出样例：

Li4 18 f
Zhang3 19 m

时间限制：500ms内存限制：32000kb
*/ 

#include<iostream>
using namespace std;

class Person
{
	private:
		string name;
		int age;
		char sex;
	
	public:
		void Register(string Name, int Age, char Sex);
		void ShowMe();	
};

void Person::Register(string Name, int Age, char Sex)
{
	name = Name; // 字符串可以整体赋值，但字符数组不行，需用 strcpy 赋值 
	age = Age;
	sex = Sex;
	return;
}

void Person::ShowMe()
{
	cout<<name<<' '<<age<<' '<<sex<<endl;
	return;
}

int main()
{
	Person person1, person2;
	string name1;
	int age1;
	char sex1;
	cin>>name1>>age1>>sex1;
	person1.Register(name1, age1, sex1);
	person2.Register("Zhang3", 19, 'm'); //字符串常量直接赋值，故数据成员用 string 类型定义，而不是字符数组 
	person1.ShowMe();
	person2.ShowMe();
	return 0;
}
