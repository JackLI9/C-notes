#include<iostream>
using namespace std;
class Date
{
	private:
		int year,month,day;
	public:
		//���캯���ĺ�����������������ͬ 
		//���캯��û�з���ֵ 
		//�书���ǽ������е��������ݳ�Ա���г�ʼ����һ����һ ϵ�и�ֵ��乹�� 
		//��ϵͳ����������ʱ�Զ����� 
		Date():year(1900),month(1),day(1) //�޲ι��캯��
		{
		}  
		Date(int yy,int mm = 1,int dd = 1);//Ĭ�ϲ������캯�� 
		Date(Date &d):year(d.year),month(d.month),day(d.day) //���ڶ���������캯�� 
		{
		}
		//Date(char *ps); //�ַ������ڹ��캯�� 
		void show()
		{
			cout<<year<<"-"<<month<<" "<<day<<endl;
		}
		//�������ǣ�����ǰ��ӡ� ~ ������ 
		//�����������÷����κ�ֵ ���ô����κβ��� 
		//����Ҫ�������ڳ�������֮ǰ����һЩ�ƺ����� ��ϵͳ�Զ�����
		~Date() 
		{
			cout << "�������ڶ���"<<endl;
		}
}; 
Date::Date(int yy,int mm,int dd):year(1900),month(1),day(1) //�ж������պϷ��ԡ� 
{
	if (yy>=1900&&yy<=9999) 
	year = yy; 
	else { return; } 
	if (mm>=1&&mm<=12) 
	month = mm; 
	else 
	{ 
		year=yy;
		return;
	} 
	if (dd>=1&&dd<=31) 
	day = dd; 
	else 
	{ 
		year=yy;
		month=mm;
		return; 
	}
};
int main()
{
	Date date1;//�����޲ι��캯�� 
	date1.show();
	
	Date date2(2006);//����Ĭ�ϲ������캯�� 
	date2.show();
	
	Date date3(2006,2);//����Ĭ�ϲ������캯�� 
	date3.show();
	
	Date date4(2006,2,5);//����Ĭ�ϲ������캯�� 
	date4.show();
	
	Date date5(2006,22,5);//����Ĭ�ϲ������캯�� 
	date5.show();
	
	Date date6(2006,2,95);//����Ĭ�ϲ������캯�� 
	date6.show();
	
	Date date7(date4);//�������ڶ���������캯�� 
	date7.show();
	
	return 0;
}
