#include <bits/stdc++.h>
using namespace std;
int sum_of_digits(int n)
{

    int copy = n;
    int sum = 0;
    int d;
    while (n > 0)
    {
        d = n % 10;
        n = n / 10;
        sum = sum + d;
    }

    return sum;
}
int main()
{
    int n;
    cout << "enter the number ";
    cin >> n;
    cout << sum_of_digits(n) << endl;
}
