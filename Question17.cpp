#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n ;
    cout<<"enter the number ";
    cin >>n;
    
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if (i == 1)
                cout << i;
            else if (i == j)
                cout << i;
            else
                cout << i << "*";
        }
        cout << endl;
    }
    for (int i = n; i >= 1; i--)
    {
        for (int j = i; j >= 1; j--)
        {
            if (i == 1)
                cout << i;
            else if (j == 1)

                cout << i;

            else
                cout << i << "*";
        }
        cout << endl;
    }
}