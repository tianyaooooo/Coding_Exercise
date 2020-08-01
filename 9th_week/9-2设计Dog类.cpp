/*
题目内容：

设计一个Dog类，包含name、age、sex和weight等属性以及对这些属性操作的方法。实现并测试这个类。
根据类的封装性要求，把name、age、sex和weight声明为私有的数据成员，编写公有成员函数setdata()对数据进行初始化，GetName()、GetAge()、GetSex()和GetWeight()获取相应属性。初始化数据由用户输入。


输入格式:

Dog类对象的初始化数据


输出格式：

根据Dog类对象的初始化数据输出一句话，请严格按照格式输出，句末有点号。


输入样例：

ahuang 3 m 2.4


输出样例：

It is my dog.
Its name is ahuang.
It is 3 years old.
It is male.
It is 2.4 kg.

时间限制：500ms内存限制：32000kb
*/

#include<iostream>
#include<cstring>
using namespace std;

class Dog
{
	private:
		char name[20];
		int age;
		char sex;
		double weight;
		
	public:
		void setdata(char * dogname, int dogage, char dogsex, double dogweight);
		char * GetName() { return name;}
		int GetAge() { return age;}
		char GetSex() { return sex;}
		double GetWeight() { return weight;}		
};

void Dog::setdata(char * dogname, int dogage, char dogsex, double dogweight)
{
	strcpy(name, dogname);
	//name = dogname; // 不可以 
	age = dogage;
	sex = dogsex;
	weight = dogweight;
	return;
}

int main()
{
	Dog dog;
	char d_name[20];
	int d_age;
	char d_sex;
	double d_weight;
	cin>>d_name>>d_age>>d_sex>>d_weight;
	dog.setdata(d_name, d_age, d_sex, d_weight);
	cout<<"It is my dog."<<endl;
	cout<<"Its name is "<<dog.GetName()<<"."<<endl;
	cout<<"It is "<<dog.GetAge()<<" years old."<<endl;
	if (dog.GetSex() == 'm')
	{
		cout<<"It is male."<<endl;
	}
	else
	{
		cout<<"It is female."<<endl;
	}	
	cout<<"It is "<<dog.GetWeight()<<" kg."<<endl;
	return 0;
}
