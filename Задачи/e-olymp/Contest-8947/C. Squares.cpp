#include <iostream>
using namespace std;

int main()
{
    short int a;
    while (cin >> a)
    {
        cout << a * 4;
        cout << " ";
        cout << a * a;
        cout << endl;
    }
    
    return 0;
}