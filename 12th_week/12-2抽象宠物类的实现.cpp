/*
题目内容：

定义抽象宠物类Pet，其中数据成员包括：名字，年龄和颜色；成员函数包括：构造函数；获取成员数据值的函数；纯虚函数Speak和纯虚函数GetInfo; 
定义Pet的派生类Cat和Dog，其中Speak函数分别显示猫和狗的叫声,而GetInfo函数分别输出Cat和Dog的属性。主函数中定义Pet指针变量，分别指向动态生成的Cat和Dog对象，并通过指针分别调用GetInfo函数和Speak函数，观察并分析输出结果。


输入格式:

猫和狗的信息


输出格式：

请参考输出样例，严格遵照格式要求输出，建议直接复制样例中的部分文字粘贴进自己的代码中.(冒号是英文冒号，冒号后无空格)


输入样例：

mikey 2 blue
benben 1 black


输出样例：

猫的名字:mikey
猫的年龄:2
猫的颜色:blue
猫的叫声:miao!miao!
狗的名字:benben
狗的年龄:1
狗的颜色:black
狗的叫声:wang!wang!


时间限制：500ms内存限制：32000kb
*/

#include<iostream>
#include<cstring>
using namespace std;

class Pet
{
private:
	char Name[10];
	int Age;
	char Color[10];
public:
	Pet(char * name, int age, char * color)
	{
		strcpy(Name,name);
		Age = age;
		strcpy(Color, color);
	}
	char * GetName(){return Name;}
	int GetAge(){return Age;}
	char * GetColor(){return Color;}
	virtual void Speak() = 0;
	virtual void GetInfo() = 0;
};

class Cat : public Pet
{
public:
	Cat(char * name, int age, char * color) : Pet(name, age, color){};
	void Speak(){cout<<"猫的叫声:miao!miao!"<<endl;}
	void GetInfo()
	{
		cout<<"猫的名字:"<<GetName()<<endl;
		cout<<"猫的年龄:"<<GetAge()<<endl;
		cout<<"猫的颜色:"<<GetColor()<<endl;
	}
};

class Dog : public Pet
{
public:
	Dog(char * name, int age, char * color) : Pet(name, age, color){};
	void Speak(){cout<<"狗的叫声:wang!wang!"<<endl;}
	void GetInfo()
	{
		cout<<"狗的名字:"<<GetName()<<endl;
		cout<<"狗的年龄:"<<GetAge()<<endl;
		cout<<"狗的颜色:"<<GetColor()<<endl;
	}
};

int main()
{
	char cat_name[10], cat_color[10], dog_name[10], dog_color[10];
	int cat_age, dog_age;
	cin>>cat_name>>cat_age>>cat_color;
	cin>>dog_name>>dog_age>>dog_color;
	Pet * p1 = new Cat(cat_name, cat_age, cat_color);
	Pet * p2 = new Dog(dog_name, dog_age, dog_color);
	p1->GetInfo();
	p1->Speak();
	p2->GetInfo();
	p2->Speak();
	return 0;
} 

