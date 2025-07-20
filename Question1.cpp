#include <bits/stdc++.h>
using namespace std;
unsigned int fact(unsigned int num)
{
    unsigned int fac = 1;
    if (num == 1)
        return 1;
    else
        return num * fact(num - 1);
}
int main()
{
    unsigned int n;
    cout << "input the number " << endl;
    cin >> n;
    cout << "factorial of " << n << " is " << fact(n) << endl;
}