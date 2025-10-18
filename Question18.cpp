// plus perfect number == armstrong number
#include <bits/stdc++.h>
using namespace std;
int plus_perfect(int n)
{
    int c = 0;
    int copy = n;
    int copy2 = n;
    while (n > 0)
    {
        int digit = n % 10;
        c++;
        n = n / 10;
    }
    int sum = 0;
    // for (int i = 1; i <= c; i++)
    while (copy > 0)
    {
        int digit = copy % 10;
        //sum = sum + pow(digit, c);
        sum = sum + (int)round(pow(digit, c));  // cast or round to handle floating point issues
        copy = copy / 10;
    }
    if (copy2 == sum)
        return 1;
    else
        return 0;
}
int main()
{
    int n;
   // cout << pow(9,3);
    cout << "enter the number: ";
    cin >> n;
    if (plus_perfect(n) == 1)
        cout << "plus perfect";
    else
        cout << "not a plus perfect number";
}
