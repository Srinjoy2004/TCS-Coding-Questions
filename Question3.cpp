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
    if (a == 0)
        return b;
    else if (b == 0)
        return a;
    else if (a == b)
        return a;
    else if (a > b)
        return gcd(a - b, b);
    else
        return gcd(b - a, a);
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