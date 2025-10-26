// hcf/gcd using euclidean algo

#include <bits/stdc++.h>
using namespace std;
int gcd(int a, int b)
{
    while (a != 0 && b != 0)
    {
        if (a > b)
            a = a % b;
        else
            b = b % a;
    }
    if (a == 0)
        return b;
    else
        return a;
}

int main()
{
    cout << "enter 2 numbers one by one to find hcf";
    int a, b;
    cin >> a;
    cin >> b;
    cout << "the result of  hcf " << gcd(a, b);
    return 0;
}

/*

lcm * hcf =prod of 2 numbers
*/