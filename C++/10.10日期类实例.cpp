#include<iostream>
using namespace std;
class date
{
	private:
		int year,month,day;
	public:
		date()
		{
			year=2018;
			month=1;
			day=26;
		}
		void showymd()
		{
			cout<<year<<"-"<<month<<"-"<<day<<endl;
		}
		void showmdy()
		{
			char *m[]={"","Jan","Feb","Mar","Apr","May","Jun","Jul","Sep","Oct","Nov","Dec"};
			cout<<m[month]<<","<<day<<","<<year<<endl;
		}
		date(int y,int m,int d);
		/*��month[13]����ʾ[Error] too many initializers for 'char [500]'
		��Ϊstr[]ֻ��һ���ַ������飬�������������˺ܶ��ʼֵ���������ַ����͵�,���Իᱨ��
		����һ���ַ���ָ������Ϳ��Խ������Ϊ��char *str[]={����};*/
}; 
date::date(int y,int m,int d)
{
	year=y;
	month=(m>0&&m<13)?m:1;
	if(m==1||m==3||m==5||m==7||m==8||m==10||m==12)
	{
		if(d>0&&d<32)
			day=d;
		else day=26;
	} 
	else if(m==4||m==6||m==9||m==11)
	{
		if(d>0&&d<31)
			day=d;
		else day=26;
	}
	else if(m=2)
	{
		if((y%400==0)||(y%100!=0&&y%4==0))
		{
			if(d>0&&d<30)
				day=d;	
			else day=26;
		}
		else
		{
			if(d>0&&d<29)
				day=d;
			else day=26;
		}
	}
}
int main()
{
	date a;
	a.showmdy();
	a.showymd();
	date b(2008,52,55);
	b.showmdy();
	date c(2021,5,16);
	c.showymd();
	return 0;
}
