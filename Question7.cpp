#include <bits/stdc++.h>
using namespace std;
int Max_num(int a, int b, int c)
{
    int max;
    if (a > b)
        max = a;
    else
        max = b;

    if (c > max)
        max = c;
    return max;
}
int main()
{
    cout << Max_num(20, 10, 30) << endl;
}