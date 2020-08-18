/*
题目内容：

已知基类Person的定义如下：
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
请通过继承的方法建立两个派生类，其中
派生类Teacher：
1．新增的数据成员有：
char 
Dept[20];
int 
Salary;
2.新增的成员函数有：
构造函数，并使用基类的Register
3.重写的成员函数有：
void 
ShowMe() //显示数据成员信息，并使用基类的ShowMe
派生类Student：
1．新增的数据成员有：
char 
ID[12];
char Class[12];
2.新增的成员函数有：
Student(char *name,int age,char 
sex, char *id,char *classid);
3.重写的成员函数有：
void 
ShowMe() //显示数据成员信息，并使用基类的ShowMe
在主程序中分别建立两个派生类对象，利用已有的成员函数分别显示两个派生类对象的数据成员。


输入格式:

教师对象的初始化参数

学生对象的初始化参数


输出格式：

请参考输出样例严格按照格式输出教师对象和学生对象的详细信息


输入样例：

章立早 38 m 电信学院 2300
李木子 22 f 02035003 能动01


输出样例：

姓名 章立早
性别 男
年龄 38
工作单位 电信学院
月薪 2300
学号 02035003
姓名 李木子
性别 女
年龄 22
班级 能动01

时间限制：500ms内存限制：32000kb
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
		cout<<"姓名"<<" "<<Name<<endl;
		if (Sex == 'm')
		{
			cout<<"性别 男"<<endl;
		}
		else
		{
			cout<<"性别 女"<<endl;
		}
		cout<<"年龄"<<" "<<Age<<endl; 
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
		cout<<"工作单位"<<" "<<Dept<<endl;
		cout<<"月薪"<<" "<<Salary<<endl;
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
		cout<<"学号"<<" "<<ID<<endl;
		Person::ShowMe();
		cout<<"班级"<<" "<<Class<<endl; 
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

