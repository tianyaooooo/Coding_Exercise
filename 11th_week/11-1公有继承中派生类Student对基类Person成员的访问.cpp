/*
��Ŀ���ݣ�

��֪����Person�Ķ������£�
class Person
{ char Name[20];
char Sex;
int 
Age;
public:
void Register(char *name, int age, char sex) ;
void 
ShowMe();
};
��ͨ���̳еķ�������һ��������Student������
1�����������ݳ�Ա�У�
int 
Number;
char ClassName[10];
2�������ĳ�Ա�����У�
void RegisterStu(char 
*classname, int number, char *name, int age, char sex) 

//�����ݳ�Ա��ֵ����ʹ�û����Register
void 
ShowStu() //��ʾ���ݳ�Ա��Ϣ����ʹ�û����ShowMe
���������н���һ������������������еĳ�Ա�����ֱ���ʾ���������ͻ����������ݳ�Ա��


�����ʽ:

ѧ���İ༶��ѧ�š�������������Ա�


�����ʽ��

������������������ݳ�Ա������Ϊ ѧ�š��༶��������������Ա�

�������������ݳ�Ա������Ϊ������������Ա�


����������

�����51 85071011 �Ź��� 18 m


���������

85071011 �����51 �Ź��� 18 m
�Ź��� 18 m

ʱ�����ƣ�500ms�ڴ����ƣ�32000kb
*/

#include<iostream>
#include<cstring>
using namespace std;

class Person
{ 
private:
	char Name[20];
	char Sex;
	int Age;
public:
	void Register(char * name, int age, char sex)
	{
		strcpy(Name, name);
		Sex = sex;
		Age = age;
	}
	void ShowMe()
	{
		cout<<Name<<' '<<Age<<' '<<Sex<<endl;
	}
};

class Student : public Person
{
private:
	int Number;
	char ClassName[10];
public:
	void RegisterStu(char * classname, int number, char * name, int age, char sex)
	{
		Register(name, age, sex);
		strcpy(ClassName, classname);
		Number = number;
	}
	void ShowStu()
	{
		cout<<Number<<' '<<ClassName<<' ';
		ShowMe();
	}
};

int main()
{
	Student st;
	char st_classname[10];
	int st_number;
	int st_age;
	char st_name[20];
	char st_sex;
	cin>>st_classname>>st_number>>st_name>>st_age>>st_sex;
	st.RegisterStu(st_classname, st_number, st_name, st_age, st_sex);
	st.ShowStu();
	st.ShowMe();
	return 0;
}
