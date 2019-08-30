#include<iostream>

using namespace std;

class Time
{
	private:
		int s,m,h;

	public:
	Time();
	Time(int,int,int);
	void Display();
	void getData();
	void compare(Time& );
	Time operator-(Time&);
};

