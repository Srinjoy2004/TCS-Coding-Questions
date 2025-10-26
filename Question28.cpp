#include <bits/stdc++.h>
using namespace std;
int lcm(int a, int b)
{
    int maxi = max(a, b);

    for (int i = maxi; i <= a * b; i++)
    {
        if (i % a == 0 && i % b == 0)
        {
            return i;

            break;
        }
    }

    return a * b;
}
int main()
{
    cout << "enter 2 numbers one by one to find lcm";
    int a, b;
    cin >> a;
    cin >> b;
    cout << "the result of lcm is " << lcm(a, b) << endl;
}


/*

lcm * hcf =product of 2 numbers
*/