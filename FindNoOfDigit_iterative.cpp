// Itretive Solution :-

#include <iostream>
using namespace std;

int countDigit(long n)
{
    int count = 0;
    while (n != 0)
    {
        n = n / 10;
        ++count;
    }
    return count;
}

int main()
{
    int n;
    cout << "Enter the number : ";
    cin >> n;
    cout << "You Entered " << countDigit(n) << " digits";
    return 0;
}