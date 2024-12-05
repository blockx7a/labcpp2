#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	float mark;
	cin>>mark;
	if (mark >= 0 && mark <= 9)
	{
		if(mark <= 4.4)
		{
			cout<<"unluck == 2.0"<<endl;
		}
		else if (mark > 4.4 && mark <= 5.2)
		{
			cout<<"lets goo == 3.0"<<endl;
		}
		else if (mark > 5.2 && mark <= 6.2)
		{
			cout<<" average == 3.5"<<endl;
		}
		else if(mark > 6.2 && mark <= 7.2)
		{
			cout<<" a little more == 4.0"<<endl;
		}
		else if (mark > 7.2 && mark <= 8.2)
		{
			cout<<" just a little more == 4.5"<<endl;
		}
		else if (mark > 8.2 && mark <= 9)
		{
			cout<<" tiger == 5.0"<<endl;
		}
	}
	else
	{
		cout<<"Invalid number"<<endl;
	}
}
