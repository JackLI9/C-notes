#include<iostream>
using namespace std;
class Fraction
{
	protected:
		int a;//����
	//private:˽�еĳ�Ա�ڱ�ĵط���������� 
	    int b;//��ĸ
	    int divisor(int p,int q);//�����Լ�� 
	public:
	    void set(int aa,int bb);//���÷��ӷ�ĸ 
		void show();//��ʾ���� 
		Fraction add(Fraction u);//һ����������һ������
 
};
//���÷��ӡ���ĸ 
void Fraction:: set(int aa,int bb) 
{ 
    a=aa; 
	if (bb!=0) //��ĸ��Ч�Լ��� 
	    b=bb; 
	else //��ĸ��Чʱ��ʾ0 
	{ 
	    a=0; 
		b=1; 
	} 
} 
//��ʾ���� 
void Fraction::show() 
{ 
    cout<<a<<"/"<<b; 
}
//������� 
Fraction Fraction::add(Fraction u) 
{ 
    int tmp;
	Fraction v;
	v.a=a*u.b+b*u.a;   //���� 
	v.b=b*u.b;//��ĸ 
	tmp=divisor(v.a ,v.b);//������ӡ���ĸ�Ĺ�Լ�� 
	v.a=v.a/tmp;//Լȥ��Լ�� 
	v.b=v.b/tmp;//Լȥ��Լ�� 
	return v; //���ؽ��
}
class Real:public Fraction //����һ���µ��� �����µ�ʵ���������÷������˽�г�Աb��������  
{ 
    public: void show_real() 
	{ 
	    cout<<a<<'/'<<b<<'='<<a/(double)b<<endl; 
	} 
};

int main()
{
    int a,b,c,d;
    cout<<"���������������ķ��ӷ�ĸ"<<endl;
    cin>>a>>b>>c>>d;
     
     
    return 0; 
} 
