#include<iostream> 
#include<windows.h>
using namespace std;
class clock
{
private://���ݳ�Աһ��˽�У�������Աһ��Ϊ���С� 
	int second, minute, hour;
public:
	void set(int h, int m, int s)
	{
		hour = h;
		minute = m;
		second = s;
	};//���ڶ������ͨ�Զ��庯��һ���� 
	void showtime()
	{
		cout << hour << " : " << minute << " : " << second;
	};
	void run();
	void Report_Time();
};

void clock::run()
{
	int i;
	for (i = 0; i<10; i++)//����ʮ�� 
	{
		second++;
		if (second == 60)
		{
			second = 0;
			minute++;
			if (minute == 60)
			{
				minute = 0;
				hour++;
				if (hour == 24)
				{
					hour = 0;
				}
			}
		}
		cout << "\r           \r";//�����У����ص�ǰ�е���λ��Ȼ�����һ�ѿո񸲸�ԭ���ݣ��ٷ�����λ 
		Sleep(1000); //��ͣ��������1000���뼴1�� 
		showtime();
	}
}

void clock::Report_Time()
{
	if (minute == 0 && second == 0)
	{
		for (int i = 0; i<hour; i++)
		{
			cout << "\007";//�����SACII�� 
			Sleep(1000);
		}
	}
}

int main() 
{ 
    clock XJTU_Big_Ben; 
	XJTU_Big_Ben.set(0,0,0); 
	cout<<"�ӱ����õ�ʱ�䣺\n"<<endl;;
	XJTU_Big_Ben.showtime(); 
	XJTU_Big_Ben.Report_Time(); 
	XJTU_Big_Ben.run();//����ʮ��
	system("pause"); 
	XJTU_Big_Ben.set(9,59,50); 
	cout<<"\n�ӱ����õ�ʱ�䣺\n"<<endl; 
	XJTU_Big_Ben.showtime(); 
	cout<<endl; //��ʾ���õ�ʱ�� 
	XJTU_Big_Ben.run(); 
	XJTU_Big_Ben.Report_Time(); 
	cout<<endl; 
	cout<<"����ʮ��֮���ʱ�䣺"<<endl; 
	XJTU_Big_Ben.showtime(); 
	cout<<endl; 
	clock x;
	x= XJTU_Big_Ben;
	x.showtime();
	cout<<"//ͬ�����֮��������帳ֵ"<<endl;
	return 0; 
}
