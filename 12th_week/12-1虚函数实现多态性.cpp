/*
��Ŀ���ݣ�

���������Pet�������麯��Speak����ʾ������Ϣ��How does a pet speak?��;���幫��������Cat��Dog����Speak��Ա�����ֱ���ʾ����miao! miao!���͡�wang! wang!�����������ж���Pet��Cat��Dog�����ٶ���Petָ��������ֱ�ָ��Pet��Cat��Dog���󣬲�ͨ��ָ�����Speak�������۲첢������������


�����ʽ:

����Ҫ����


�����ʽ��

�������Speak��������Ľ��


����������
���������

How does a pet speak?
miao!miao!
wang!wang!


ʱ�����ƣ�500ms�ڴ����ƣ�32000kb
*/

#include<iostream>
using namespace std;

class Pet
{
public:
	virtual void Speak(){cout<<"How does a pet speak?"<<endl;}
};

class Dog : public Pet
{
public:
	void Speak(){cout<<"wang!wang!"<<endl;}
};

class Cat : public Pet
{
public:
	void Speak(){cout<<"miao!miao!"<<endl;}
};

int main()
{
	Pet pet, * p = &pet;
	Dog dog;
	Cat cat;
	p->Speak();
	p = &cat;
	p->Speak();
	p = &dog;
	p->Speak();
	return 0;
}

