#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    float a;
    const float minTemp = -459.67;

    cin >> a;

    if (a > minTemp)
    {
   		 cout << fixed << setprecision(2) << (a - 32) * 5 / 9 << endl;
    }
    else
    {
        cout << "Too cold, dude!" << endl; 
    }

    return 0;
}
