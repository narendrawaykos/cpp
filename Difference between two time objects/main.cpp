#include"time.h"

int main()
{
	Time obj1,obj2;
	obj1.getData();
	obj2.getData();
		
	Time t = obj1 - obj2;
	t.Display();
	return 0;
}

