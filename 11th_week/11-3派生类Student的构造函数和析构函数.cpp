/*
��Ŀ���ݣ�

��֪����Person�Ķ������£�
class Person
{ char Name[10]; //����
int Age; //����
public:
Person(char* name,int age)
{ strcpy(Name, name);
Age = age;
cout<<"constructor of person "<<Name<<endl; }
~Person()
{ cout<<"deconstructor of person "<<Name<<endl; };
��ͨ���̳еķ�������һ��������Student������
1�����������ݳ�Ա�У�
char ClassName[10]; //�༶
Person Monitor; //�೤
2�������ĳ�Ա�����У�
Student(char *name, int age, char *classname, char *name1, int age1) //name1��age1�ǰ೤����Ϣ
~Student()
���������н���һ�����������


�����ʽ:

Student��ĳ�ʼ����Ϣ


�����ʽ��

������ͻ��๹�캯�������������������Ϣ����ο���������ĸ�ʽ��


����������

�Ź��� 18 �����51 ��ľ�� 20


���������

constructor of person �Ź���
constructor of person ��ľ��
constructor of Student
deconstructor of Student
deconstructor of person ��ľ��
deconstructor of person �Ź���

ע�⣺personΪСд�����ʼ���һ���ո�

ʱ�����ƣ�500ms�ڴ����ƣ�32000kb
*/

#include<iostream>
#include<cstring>
using namespace std;

class Person
{
private: 
	char Name[10];
	int Age;
public:
	Person(char* name, int age)
	{ 
		strcpy(Name, name);
		Age = age;
		cout<<"constructor of person "<<Name<<endl; 
	}
	~Person(){cout<<"deconstructor of person "<<Name<<endl;}
};

class Student : public Person
{
private:
	char ClassName[10];
	Person Monitor;
public:
	Student(char * name, int age, char * classname, char * name1, int age1): Person(name, age), Monitor(name1, age1)
	{
		strcpy(ClassName, classname);
		cout<<"constructor of Student"<<endl;
	}
	~Student(){cout<<"deconstructor of Student"<<endl;}
};

int main()
{
	char st_name[10], st_classname[10], mo_name[10];
	int st_age, mo_age;
	cin>>st_name>>st_age>>st_classname>>mo_name>>mo_age;
	Student st(st_name, st_age, st_classname, mo_name, mo_age);
	return 0;
}
