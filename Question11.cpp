#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << "enter the number";
    cin >> n;
    double res = sqrt(n);
    int int_res = (int)res;
    if (res == int_res)
        cout << "success";
    else
        cout << "fail";
}