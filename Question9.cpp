#include <bits/stdc++.h>
using namespace std;
int second_largest_number(int x,int y,int z)
{
    if(x>y && x>z)
    {
        if(y>z) return y;
        else return z;
    }
    else if(y>x && y>z)
    {
        if(x>z) return x;
        else z;
    }
    else{
        if(x>y) return x;
        else return y;
    }
}
int main()
{
    cout<<second_largest_number(111,34,1);
}