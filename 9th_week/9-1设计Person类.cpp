/*
��Ŀ���ݣ�

���һ��Person�࣬����name��age��sex�����Լ�����Щ���Բ����ķ�����ʵ�ֲ���������ࡣ
������ķ�װ��Ҫ�󣬰�name��age��sex����Ϊ˽�е����ݳ�Ա���������еĳ�Ա����Register()��ShowMe()��������Щ���ԣ���Register()�����ж����ݳ�Ա���г�ʼ����person1ͨ��cin���õ���Ϣ��person2ͨ��Register("Zhang3", 
19, 'm') ���õ���Ϣ��


�����ʽ:

person1����Ϣ


�����ʽ��

person1��person2����Ϣ


����������

Li4 18 f


���������

Li4 18 f
Zhang3 19 m

ʱ�����ƣ�500ms�ڴ����ƣ�32000kb
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
	name = Name; // �ַ����������帳ֵ�����ַ����鲻�У����� strcpy ��ֵ 
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
	person2.Register("Zhang3", 19, 'm'); //�ַ�������ֱ�Ӹ�ֵ�������ݳ�Ա�� string ���Ͷ��壬�������ַ����� 
	person1.ShowMe();
	person2.ShowMe();
	return 0;
}
