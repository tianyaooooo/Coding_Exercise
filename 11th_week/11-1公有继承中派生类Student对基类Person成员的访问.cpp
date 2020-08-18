/*
题目内容：

已知基类Person的定义如下：
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
请通过继承的方法建立一个派生类Student，其中
1．新增的数据成员有：
int 
Number;
char ClassName[10];
2．新增的成员函数有：
void RegisterStu(char 
*classname, int number, char *name, int age, char sex) 

//对数据成员赋值，并使用基类的Register
void 
ShowStu() //显示数据成员信息，并使用基类的ShowMe
在主程序中建立一个派生类对象，利用已有的成员函数分别显示派生类对象和基类对象的数据成员。


输入格式:

学生的班级、学号、姓名、年龄和性别


输出格式：

先输出派生类对象的数据成员，依次为 学号、班级、姓名、年龄和性别

再输出基类的数据成员，依次为姓名、年龄和性别


输入样例：

计算机51 85071011 张弓长 18 m


输出样例：

85071011 计算机51 张弓长 18 m
张弓长 18 m

时间限制：500ms内存限制：32000kb
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
