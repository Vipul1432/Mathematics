#include <iostream>
using namespace std;

int countDigit(long n)
{
    if (n == 0)
    {
        return 0;
    }
    return 1 + countDigit(n / 10);
}

int main()
{
    int n;
    cout << "Enter the number : ";
    cin >> n;
    cout << "You Entered " << countDigit(n) << " digits";
    return 0;
}