#include <bits/stdc++.h>
using namespace std;
int Min_number(int a, int b, int c, int d)
{
    int min;
    if (a < b)
        min = a;
    else
        min = b;
    if (c < min)
        min = c;
    if (d < min)
        min = d;
        return min;
}
int main()
{
    int a=10,b=20,c=30,d=40;
    cout<<Min_number(a,b,c,d);
}