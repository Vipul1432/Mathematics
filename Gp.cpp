#include <iostream>
#include <cmath>
using namespace std;

void printGP(int a, int r, int n)
{
    int curr_term;
    for (int i = 0; i < n; i++)
    {
        curr_term = a * pow(r, i);
        cout << curr_term << " ";
    }
}

int main()
{
    int n, r, a;
    cout << "Enter value of a : ";
    cin >> a;
    cout << "Enter value of r : ";
    cin >> r;
    cout << "Enter value of r : ";
    cin >> n;
    cout << "Gp elements are : ";
    printGP(a, r, n);
    return 0;
}