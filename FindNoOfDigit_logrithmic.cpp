// Logarithmic one line Solution :-

#include <iostream>
#include <cmath>
using namespace std;

int countDigit(long n)
{
    return ceil(log10(n));
}

int main()
{
    int n;
    cout << "Enter the number : ";
    cin >> n;
    cout << "You Entered " << countDigit(n) << " digits";
    return 0;
}
