/*
��Ŀ���ݣ�

���һ��Dog�࣬����name��age��sex��weight�������Լ�����Щ���Բ����ķ�����ʵ�ֲ���������ࡣ
������ķ�װ��Ҫ�󣬰�name��age��sex��weight����Ϊ˽�е����ݳ�Ա����д���г�Ա����setdata()�����ݽ��г�ʼ����GetName()��GetAge()��GetSex()��GetWeight()��ȡ��Ӧ���ԡ���ʼ���������û����롣


�����ʽ:

Dog�����ĳ�ʼ������


�����ʽ��

����Dog�����ĳ�ʼ���������һ�仰�����ϸ��ո�ʽ�������ĩ�е�š�


����������

ahuang 3 m 2.4


���������

It is my dog.
Its name is ahuang.
It is 3 years old.
It is male.
It is 2.4 kg.

ʱ�����ƣ�500ms�ڴ����ƣ�32000kb
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
	//name = dogname; // ������ 
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
