/*
��Ŀ���ݣ�

��дPerson�࣬���ݳ�ԱΪ������20�ַ����ȣ�������(int)���Ա�(char)��
��д�޲����Ĺ��캯��������������ֵΪ��XXX��������0���Ա�'m'��
��д��������������������ַ�����Now destroying the instance of Person����
��дRegister��Ա������Ϊ���ݳ�Ա��ֵ��
��дshowme��Ա��������ʾ������������Ա�

��д��������
��Person�ഴ��2��ָ�룬p1�� p2��
��new��������Person���󣬷ֱ�ָ�븳ֵ��p1,p2��
��showme��Ա������ʾp1,p2��ָ�����ֵ��
������һ�顰������������Ա�ֵ���ó�Ա����RegisterΪp1�ĳ�Ա��ֵ��
��p1��ָ�����ֵ��ֵ��p2��ָ����
��showme��ʾp1��p2��ָ�����ֵ��
ɾ����̬����


�����ʽ:

Ϊp1�ĳ�Ա��ֵʱʹ�õ�����


�����ʽ��

person1��person2��Ĭ��ֵ
person1��person2�ĸ�ֵ���ֵ
���������������Ϣ


����������

Bobs 24 m


���������

person1:XXX 0 m
person2:XXX 0 m
person1:Bobs 24 m
person2:Bobs 24 m
Now destroying the instance of Person
Now destroying the instance of Person

ʱ�����ƣ�500ms�ڴ����ƣ�32000kb
*/

#include<iostream>
#include<cstring>
using namespace std;

class Person
{
private:
	char name[20];
	int age;
	char sex;
public:
	Person(): age(0), sex('m'){strcpy(name, "XXX");}
	void Register(char Name[], int Age, char Sex)
	{
		strcpy(name, Name);
		age = Age;
		sex = Sex;
	}
	void showme()
	{
		cout<<name<<" "<<age<<" "<<sex<<endl;
	}
	~Person(){cout<<"Now destroying the instance of Person"<<endl;}
};

int main()
{
	Person * p1, *p2;
	char myname[20];
	int myage;
	char mysex;
	cin>>myname>>myage>>mysex;
	p1 = new Person;
	p2 = new Person;
	cout<<"person1:";
	p1->showme();
	cout<<"person2:";
	p2->showme();
	p1->Register(myname, myage, mysex);
	*p2 = *p1;
	cout<<"person1:";
	p1->showme();
	cout<<"person2:";
	p2->showme();
	delete p1;
	delete p2;
	return 0;
}
