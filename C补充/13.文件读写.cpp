#include<stdio.h>
#include<stdlib.h>
struct person
{
	int age;
	char name[20];
	char sex[20];
};
void print(person b)
{
	person a=b;
	printf("�ṹ�壺%s %d %s\n",a.name,a.age,a.sex);
	person *c=&a; 
	printf("ָ���룺%s %d %s\n",c->name,c->age,c->sex);
}
void print(person *b)
{
	person *a=b; //����д*a=*b��
	printf("%s %d %s\n",b->name,b->age,b->sex);
}
int main()
{
	printf("�����һ�������������䣬�Ա�"); 
	person a;
	scanf("%s %d %s",&a.name,&a.age,&a.sex);
	print(a);
	printf("����ڶ��������������䣬�Ա�"); 
	person *b=(person *)malloc(sizeof(person));
	scanf("%s %d %s",&b->name,&b->age,&b->sex);
	print(b);
	return 0;
} 
