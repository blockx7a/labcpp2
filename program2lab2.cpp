#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double a, b;
    
    cin >> a >> b;

    cout << fixed << setprecision(12);
    
    cout << a - b << endl;
    cout << a + b << endl;
    cout << a * b << endl;
    cout << a / b << endl;

    return 0;
}
