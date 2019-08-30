#include"time.h"

Time::Time(){
	s=0;m=0;h=0;
}

Time::Time(int hh,int mm,int ss):h(hh),m(mm),s(ss){}

void Time::Display()
{
	cout<<h<<":"<<m<<":"<<s<<endl;
}
void Time::compare(Time &b)
{

}

void Time::getData()
{
	cout<<"Enter hh:mm:ss = "<<endl;
	cin>>h>>m>>s;
}
Time Time::operator-(Time &t1)
{
	Time t;
	int a;
	a = (h*60*60+m*60+s)-(t1.h*60*60+t1.m*60+t1.s);
	
	t.h=a/3600;
        t.m=(a%3600)/60;
        t.s=(a%3600)%60;

	return t;
}
