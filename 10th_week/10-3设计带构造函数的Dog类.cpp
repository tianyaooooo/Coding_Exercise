/*
题目内容：

设计一个Dog类，包含name、age、sex和weight等属性，在有参数的构造函数中对数据成员进行初始化。

公有成员函数有：GetName()、GetAge()、GetSex()和GetWeight()可获取名字、年龄、性别和体重。编写成员函数speak() 
显示狗的叫声。编写主函数，输入狗的名字、年龄、性别和体重；声明Dog对象并用输入的数据通过构造函数初始化对象，通过成员函数获取狗的属性并显示出来。


输入格式:

狗的信息


输出格式：

狗的信息，外加叫声


输入样例：

Tom 4 m 2.4


输出样例：

Tom
4
m
2.4
Arf!Arf!


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
	Dog(char * pname, int age, char sex, double weight);
	char * GetName(){return name;}
	int GetAge(){return age;}
	char GetSex(){return sex;}
	double GetWeight(){return weight;}
	void speak(){cout<<"Arf!Arf!"<<endl;}
	~Dog(){}
};

Dog::Dog(char * pname, int age, char sex, double weight)
{
	strcpy(name, pname);
	this->age = age;
	this->sex = sex;
	this->weight = weight;
}

int main()
{
	char name[20];
	int age;
	char sex;
	double weight;
	cin>>name>>age>>sex>>weight;
	Dog dog(name, age, sex, weight);
	cout<<dog.GetName()<<endl;
	cout<<dog.GetAge()<<endl;
	cout<<dog.GetSex()<<endl;
	cout<<dog.GetWeight()<<endl;
	dog.speak();	 
	return 0;
}
