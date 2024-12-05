#include <iostream>
using namespace std;

int main()
{
    char a;
    
    cout << "введіть символ: ";
    cin >> a;

	cout << "символ: " << a << endl;

    cout << "десяткове: " << (int)a << endl;
	
	cout << "шістнадцяткове: 0x" << hex << (int)a << endl;

    return 0;
}
