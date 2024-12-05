#include <iostream>
using namespace std;

int main()
{
		int a;
		cin>> a;
		if (a%2 == 0 && a%8 == 0 && a%16 == 0)
	{
		cout<< "Tak" <<endl;
	}
		else
	{
		cout<< "Nein" <<endl;
	}
	cout<<oct<<a<<endl;
	cout<<"0x"<<hex<<a<<endl;
}
