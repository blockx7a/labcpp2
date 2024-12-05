#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    float mark;
    cin >> mark;

    if (mark >= 0 && mark <= 9)
    {
        if (mark <= 4.4)
        {
            cout << "не получилось не фартануло == 2.0" << endl;
        }
        else if (mark <= 5.2)
        {
            cout << "среднячок == 3.0" << endl;
        }
        else if (mark <= 6.2)
        {
            cout << "гуд марк == 3.5" << endl;
        }
        else if (mark <= 7.2)
        {
            cout << "почти == 4.0" << endl;
        }
        else if (mark <= 8.2)
        {
            cout << "perfect == 4.5" << endl;
        }
        else
        {
            cout << "симпл в прайме == 5.0" << endl;
        }
    }
    else
    {
        cout << "Invalid number" << endl;
    }

    return 0;
}
