#include<iostream>
using namespace std;
class pet
{
	public:
		virtual void speak()//����virtual���麯������������virtual����ʡ��
		//����virtual�������಻���޸Ļ������ 
		{
			cout<<"������ô���أ�"<<endl; 
		}
};
class cat:public pet
{
	public:
		void speak()
		{
			cout<<"������"<<endl; 
		}
};
int main()
{
	pet a,*b,*c;
	cat m;
	//ʹ��������ֱ�Ӹ�ֵ���ܸı伸�� 
	a=m;
	a.speak();
	//ʹ��ָ����Ըı���� 
	b=&m,
	b->speak();
	c=new cat;
	c->speak();
	//����Ҳ���Ըı� 
	pet &d=m;
	d.speak();
}
