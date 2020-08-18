/*
��Ŀ���ݣ�

��֪����Person�������£�
class Person
{
char Name[10];
char Sex[10];
int Age;
public:
void Register(char *name,int age,char *sex);
void ShowMe();
};
��ͨ���̳еķ����������������࣬����
������Teacher��
1�����������ݳ�Ա�У�
char Dept[20];
int Salary;
2.�����ĳ�Ա�����У�
Teacher(char *name,int age,char *sex,char *dept,int salary);
void Show() //��ʾ�������ݳ�Ա
������Student��
1�����������ݳ�Ա�У�
char ID[12];
char Class[12];
2.�����ĳ�Ա�����У�
Student(char *name,int age,char *sex,char *ID,char *Class);
void Show()//��ʾ�������ݳ�Ա
��ͨ���̳еķ�����Teacher��Student�н���������Graduate������
1.�����ĳ�Ա�����У�
Graduate(char *name,int age,char *sex,char *dept,int salary,char *id,char *classid);
2.��д�ĳ�Ա�����У�
void ShowMe()//��ʾ���ݳ�Ա��Ҫ����û����Show��ShowMe
���������н���һ��������Graduate�Ķ������ó�Ա������ʾ��������ݳ�Ա��


�����ʽ:

Graduate����ĳ�ʼ����Ϣ


�����ʽ��

�������������ʽ���Graduate�������Ϣ


����������

��ľ�� 22 f ����ѧԺ 2300 04035003 ˶401


���������

�༶ ˶401
ѧ�� 04035003
���� ��ľ��
�Ա� Ů
���� 22
������λ ����ѧԺ
��н 2300

ʱ�����ƣ�500ms�ڴ����ƣ�32000kb
*/

#include<iostream>
#include<cstring>
using namespace std;

class Person
{
private:
	char Name[10];
	char Sex[10];
	int Age;
public:
	void Register(char *name, int age, char * sex)
	{
		strcpy(Name, name);
		Age = age;
		strcpy(Sex, sex);
	}
	void ShowMe()
	{
		cout<<"����"<<" "<<Name<<endl;
		if (Sex[0] == 'm')
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
	Teacher(char *name, int age, char * sex, char * dept, int salary)
	{
		Register(name, age, sex);
		strcpy(Dept, dept);
		Salary = salary;
	}
	void Show()
	{
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
	Student(char * name, int age, char * sex, char * ID, char * Class)
	{
		Register(name, age, sex);
		strcpy(this->ID, ID);
		strcpy(this->Class, Class);
	}
	void Show()
	{
		cout<<"�༶"<<" "<<Class<<endl; 
		cout<<"ѧ��"<<" "<<ID<<endl;
	}
};

class Graduate : public Teacher, public Student
{
public:
	Graduate(char *name, int age, char * sex, char * dept, int salary, char * id, char * classid) : Teacher(name, age, sex, dept, salary), Student(name, age, sex, id, classid){};
	void ShowMe()
	{
		Student::Show();
		Student::ShowMe(); // ������ Person::ShowMe() ��Ϊ Graduate �Ǵ� Student �� Teacher �̳й����� 
		Teacher::Show();
	}
};

int main()
{
	char name1[10], sex1[10], dept1[20], id1[12], class1[12];
	int age1, salary1;
	cin>>name1>>age1>>sex1>>dept1>>salary1>>id1>>class1;
	Graduate g1(name1, age1, sex1, dept1, salary1, id1, class1);
	g1.ShowMe();
	return 0;
}

