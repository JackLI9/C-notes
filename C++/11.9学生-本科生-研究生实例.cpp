#include<iostream>
#include <string.h>
#include <stdio.h>
/*���һ��ѧ����Student,�����������������������о�����
ѧ�������ѧ�š����������䡢�༶�ȱ����Լ���ʾ������Ϣshow����
����������������Աclassteacher�����Լ���ʾ������Ϣshow����
˶ʿ��������ʦtutor�Ϳ���project�����Լ���ʾ������Ϣ*/
using namespace std;
class student
{
	private:
		char name[10];
		char classname[20];
		int schooln,age;
	public:
		student(char name[],char classname[],int schooln,int age)
		{
			strcpy(this->name,name);
			strcpy(this->classname,classname);
			this->schooln=schooln;
			this->age=age; 
		}
		void show()
		{
			cout<<name<<" "<<classname<<" "<<schooln<<" "<<age<<endl;
		}
		~student(){cout<<"������ѧ��"<<name<<endl;}
}; 
class bks:public student
{
	private:
		char classteacher[20];
	public:
		bks(char name[],char classname[],int schooln,int age,char *classteacher):student(name,classname,schooln,age)
		{
			strcpy(this->classteacher,classteacher);
		}
		void showbk()
		{
			student::show();
			cout<<"���Ƹ���Ա�ǣ�"<<classteacher<<endl; 
		}
}; 
class yjs:public bks
{
	private:
		char tutor[20],project[50];
	public:
		yjs(char name[],char classname[],int schooln,int age,char *classteacher,char *tutor,char *project):bks(name,classname,schooln,age,classteacher)
		{
			strcpy(this->tutor,tutor);
			strcpy(this->project,project);
		}
		void showyj()
		{
			bks::showbk();
			cout<<"�о�����ʦ�����⣺"<<tutor<<" "<<project<<endl; 
		}
};
int main()
{
	cout<<"ѧ��a��"<<endl; 
	student a("Sian","һ��",001,20);
	a.show();
	cout<<"����������������������������"<<endl;
	cout<<"ѧ��b��"<<endl; 
	bks b("Lily","����",002,22,"AAA");
	b.showbk();
	cout<<"����������������������������"<<endl;
	cout<<"ѧ��c��"<<endl; 
	yjs c("Jerry","����",003,25,"Alex","SSS","����������");
	c.showyj(); 
	cout<<"����������������������������"<<endl;
	return 0;
}
