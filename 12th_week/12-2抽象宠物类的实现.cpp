/*
��Ŀ���ݣ�

������������Pet���������ݳ�Ա���������֣��������ɫ����Ա�������������캯������ȡ��Ա����ֵ�ĺ��������麯��Speak�ʹ��麯��GetInfo; 
����Pet��������Cat��Dog������Speak�����ֱ���ʾè�͹��Ľ���,��GetInfo�����ֱ����Cat��Dog�����ԡ��������ж���Petָ��������ֱ�ָ��̬���ɵ�Cat��Dog���󣬲�ͨ��ָ��ֱ����GetInfo������Speak�������۲첢������������


�����ʽ:

è�͹�����Ϣ


�����ʽ��

��ο�����������ϸ����ո�ʽҪ�����������ֱ�Ӹ��������еĲ�������ճ�����Լ��Ĵ�����.(ð����Ӣ��ð�ţ�ð�ź��޿ո�)


����������

mikey 2 blue
benben 1 black


���������

è������:mikey
è������:2
è����ɫ:blue
è�Ľ���:miao!miao!
��������:benben
��������:1
������ɫ:black
���Ľ���:wang!wang!


ʱ�����ƣ�500ms�ڴ����ƣ�32000kb
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
	void Speak(){cout<<"è�Ľ���:miao!miao!"<<endl;}
	void GetInfo()
	{
		cout<<"è������:"<<GetName()<<endl;
		cout<<"è������:"<<GetAge()<<endl;
		cout<<"è����ɫ:"<<GetColor()<<endl;
	}
};

class Dog : public Pet
{
public:
	Dog(char * name, int age, char * color) : Pet(name, age, color){};
	void Speak(){cout<<"���Ľ���:wang!wang!"<<endl;}
	void GetInfo()
	{
		cout<<"��������:"<<GetName()<<endl;
		cout<<"��������:"<<GetAge()<<endl;
		cout<<"������ɫ:"<<GetColor()<<endl;
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

