/*this�൱�ڡ��ҡ��� 
this,�������ָ��
���ʳ�Ա
this->��Ա
*this,������
���ʳ�Ա
(*this).��Ա
���ó���
���г�Ա�ͳ�Ա�������β�ͬ��ʱ
��Ա������Ҫ����ָ��򱾶���ʱ*/
#include<iostream>
using namespace std;
class point
{
private:
	double x,y;
public:
	void set(double x,double y)
	{
		this->x=x;
		(*this).y=y;//���ֱ�﷽ʽ�����ԣ����������βκͱ�����Ĳ��� 
	}
	void show()
	{
		cout<<"("<<x<<","<<y<<")"<<endl;
	} 
	
};
int main()
{
	cout<<"������������x��y��"<<endl;
	int a,b,c,d; 
	cin>>a>>b>>c>>d;
	point m,n;
	m.set(a,b);
	n.set(c,d);
	m.show();
	n.show();
	return 0;
}
