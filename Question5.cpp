#include <bits/stdc++.h>
using namespace std;
vector<bool> prime(int a, int b)
{
    vector<bool> res(max(a, b), true);
    res[0] = true;
    res[1] = true;
    for (int i = 2; i <= sqrt(max(a, b)); i++)
    {
        if (res[i] == true)
        {
            for (int j = 2; j * i <= max(a, b); j++)
            {
                res[i * j] = false;
            }
        }
    }
    return res;
}

int main()
{
    int a = 10;
    int b = 30;
    vector<bool> primenumbers = prime(a, b);
    for (int i = a; i < primenumbers.size(); i++)
    {
        if (primenumbers[i] == true)
            cout << i << endl;
    }
}
