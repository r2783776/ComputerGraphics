#include <iostream>
using namespace std;

int main()
{
    long int l;
    int fib1 = 1, fib2 = 1, fib3 = 0;
    long int sum = 0;
 
    cin >> l;
    
    int n = 0;
    while (sum <= l)
    {
	    sum += fib1;
        fib3 = fib1 + fib2;
        fib1 = fib2;
        fib2 = fib3;
        n++;
    }
    
    cout << n - 1;
    
    return 0;
}