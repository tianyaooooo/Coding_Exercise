/*
��Ŀ���ݣ�

��֪����Person�Ķ������£�
class Person
{
protected:
char Name[10];
char 
Sex;
int Age;
public:
void Register(char *name,int age,char 
sex);
void 
ShowMe();
};
��ͨ���̳еķ����������������࣬����
������Teacher��
1�����������ݳ�Ա�У�
char 
Dept[20];
int 
Salary;
2.�����ĳ�Ա�����У�
���캯������ʹ�û����Register
3.��д�ĳ�Ա�����У�
void 
ShowMe() //��ʾ���ݳ�Ա��Ϣ����ʹ�û����ShowMe
������Student��
1�����������ݳ�Ա�У�
char 
ID[12];
char Class[12];
2.�����ĳ�Ա�����У�
Student(char *name,int age,char 
sex, char *id,char *classid);
3.��д�ĳ�Ա�����У�
void 
ShowMe() //��ʾ���ݳ�Ա��Ϣ����ʹ�û����ShowMe
���������зֱ�����������������������еĳ�Ա�����ֱ���ʾ�����������������ݳ�Ա��


�����ʽ:

��ʦ����ĳ�ʼ������

ѧ������ĳ�ʼ������


�����ʽ��

��ο���������ϸ��ո�ʽ�����ʦ�����ѧ���������ϸ��Ϣ


����������

������ 38 m ����ѧԺ 2300
��ľ�� 22 f 02035003 �ܶ�01


���������

���� ������
�Ա� ��
���� 38
������λ ����ѧԺ
��н 2300
ѧ�� 02035003
���� ��ľ��
�Ա� Ů
���� 22
�༶ �ܶ�01

ʱ�����ƣ�500ms�ڴ����ƣ�32000kb
*/

#include<iostream>
#include<cstring>
using namespace std;

class Person
{
protected:
	char Name[10];
	char Sex;
	int Age;
public:
	void Register(char *name, int age, char sex)
	{
		strcpy(Name, name);
		Age = age;
		Sex = sex;
	}
	void ShowMe()
	{
		cout<<"����"<<" "<<Name<<endl;
		if (Sex == 'm')
		{
			cout<<"�Ա� ��"<<endl;
		}
		else
		{
			cout<<"�Ա� Ů"<<endl;
		}
		cout<<"����"<<" "<<Age<<endl; 
	}
};

class Teacher : public Person
{
private:
	char Dept[20];
	int Salary;
public:
	Teacher(char *name, int age, char sex, char * dept, int salary)
	{
		Register(name, age,sex);
		strcpy(Dept, dept);
		Salary = salary;
	}
	void ShowMe()
	{
		Person::ShowMe();
		cout<<"������λ"<<" "<<Dept<<endl;
		cout<<"��н"<<" "<<Salary<<endl;
	}
};

class Student : public Person
{
private:
	char ID[12];
	char Class[12];
public:
	Student(char * name, int age, char sex, char * id, char * classid)
	{
		Register(name, age, sex);
		strcpy(ID, id);
		strcpy(Class, classid);
	}
	void ShowMe()
	{
		cout<<"ѧ��"<<" "<<ID<<endl;
		Person::ShowMe();
		cout<<"�༶"<<" "<<Class<<endl; 
	}
};

int main()
{
	char name1[10], name2[10], dept1[20], id2[12], class2[12];;
	int age1, age2, salary1;
	char sex1, sex2;
	cin>>name1>>age1>>sex1>>dept1>>salary1;
	Teacher t1(name1, age1, sex1, dept1, salary1);
	cin>>name2>>age2>>sex2>>id2>>class2;
	Student s2(name2, age2, sex2, id2, class2);
	t1.ShowMe();
	s2.ShowMe();
	return 0;
}

