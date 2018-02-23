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
	void alarm(int h,int m,int s);
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
		cout << '\r';//�����У����ص�ǰ�е���λ 
		Sleep(1000); //��ͣ��������1000���뼴1�� 
		showtime();
	}
}

void clock::Report_Time()
{
	showtime();
	if (minute == 0 && second == 0)
	{
		for (int i = 0; i<hour; i++)
		{
			cout << "\007";//�����SACII�� 
			Sleep(1000);
		}
	}
}

void clock::alarm(int h,int m,int s)
{
	cout<<"��"<<h<<"Сʱ"<<m<<"��"<<s<<"��֮������"<<endl;
	for (int i=0;i<=h;i++)
	{
		for(int j=0;j<=m;j++)
		{
			for(int k=0;k<=s;k++)
			{
				Sleep(1000);
			}
		}
	}
	cout<<'\007';
}

int main()
{
	cout<<"�����롢Сʱ���֡��루ʱ��������0���棩" <<endl; 
	int  h,m,s;
	cin>>h>>m>>s;
	clock c; 
	c.alarm(h,m,s);//����֮������ 
	return 0;
}
