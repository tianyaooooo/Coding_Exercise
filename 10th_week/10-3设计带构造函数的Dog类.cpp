/*
��Ŀ���ݣ�

���һ��Dog�࣬����name��age��sex��weight�����ԣ����в����Ĺ��캯���ж����ݳ�Ա���г�ʼ����

���г�Ա�����У�GetName()��GetAge()��GetSex()��GetWeight()�ɻ�ȡ���֡����䡢�Ա�����ء���д��Ա����speak() 
��ʾ���Ľ�������д�����������빷�����֡����䡢�Ա�����أ�����Dog���������������ͨ�����캯����ʼ������ͨ����Ա������ȡ�������Բ���ʾ������


�����ʽ:

������Ϣ


�����ʽ��

������Ϣ����ӽ���


����������

Tom 4 m 2.4


���������

Tom
4
m
2.4
Arf!Arf!


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
