// #include <bits/stdc++.h>
// using namespace std;
// int gcd(int a, int b)
// {
//     for (int i = min(a, b); i >= 1; i--)
//     {
//         if (a % i == 0 && b % i == 0)
//         {
//             return i;
//             break;
//         }
//     }
// }
// int main()
// {
//     cout << "enter 2 numbers " << endl;
//     int n1, n2;
//     cin >> n1;
//     cout << endl;
//     cin >> n2;
//     cout << "gcd is " << gcd(n1, n2) << endl;
//     return 0;
// }

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
    cout << "enter 2 numbers " << endl;
    int n1, n2;
    cin >> n1;
    cout << endl;
    cin >> n2;
    cout << "gcd is " << gcd(n1, n2) << endl;
    return 0;
}