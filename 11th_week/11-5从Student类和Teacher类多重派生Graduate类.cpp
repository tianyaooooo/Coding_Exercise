/*
题目内容：

已知基类Person定义如下：
class Person
{
char Name[10];
char Sex[10];
int Age;
public:
void Register(char *name,int age,char *sex);
void ShowMe();
};
请通过继承的方法建立两个派生类，其中
派生类Teacher：
1．新增的数据成员有：
char Dept[20];
int Salary;
2.新增的成员函数有：
Teacher(char *name,int age,char *sex,char *dept,int salary);
void Show() //显示新增数据成员
派生类Student：
1．新增的数据成员有：
char ID[12];
char Class[12];
2.新增的成员函数有：
Student(char *name,int age,char *sex,char *ID,char *Class);
void Show()//显示新增数据成员
请通过继承的方法从Teacher和Student中建立派生类Graduate，其中
1.新增的成员函数有：
Graduate(char *name,int age,char *sex,char *dept,int salary,char *id,char *classid);
2.重写的成员函数有：
void ShowMe()//显示数据成员，要求调用基类的Show和ShowMe
在主程序中建立一个派生类Graduate的对象，利用成员函数显示对象的数据成员。


输入格式:

Graduate对象的初始化信息


输出格式：

按照输出样例格式输出Graduate对象的信息


输入样例：

李木子 22 f 电信学院 2300 04035003 硕401


输出样例：

班级 硕401
学号 04035003
姓名 李木子
性别 女
年龄 22
工作单位 电信学院
月薪 2300

时间限制：500ms内存限制：32000kb
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
		cout<<"姓名"<<" "<<Name<<endl;
		if (Sex[0] == 'm')
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
	Teacher(char *name, int age, char * sex, char * dept, int salary)
	{
		Register(name, age, sex);
		strcpy(Dept, dept);
		Salary = salary;
	}
	void Show()
	{
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
	Student(char * name, int age, char * sex, char * ID, char * Class)
	{
		Register(name, age, sex);
		strcpy(this->ID, ID);
		strcpy(this->Class, Class);
	}
	void Show()
	{
		cout<<"班级"<<" "<<Class<<endl; 
		cout<<"学号"<<" "<<ID<<endl;
	}
};

class Graduate : public Teacher, public Student
{
public:
	Graduate(char *name, int age, char * sex, char * dept, int salary, char * id, char * classid) : Teacher(name, age, sex, dept, salary), Student(name, age, sex, id, classid){};
	void ShowMe()
	{
		Student::Show();
		Student::ShowMe(); // 不能用 Person::ShowMe() 因为 Graduate 是从 Student 和 Teacher 继承过来的 
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

