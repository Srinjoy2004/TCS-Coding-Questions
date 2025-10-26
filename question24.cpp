// decimal to octal
#include <bits/stdc++.h>
using namespace std;
int octal_to_binary(int n)
{
    if (n == 0)
        return stoi("0");
    string res = "";
    while (n > 0)
    {

        int digit = n % 8;
        res = to_string(digit) + res;
        n = n / 8;
    }
    return stoi(res);
}
int main()
{
    int n;
    cout << "enter the number : ";
    cin >> n;
    cout << endl;
    cout << octal_to_binary(n);
}


//imp learnings
/*

string to int -> stoi(s)
int to string ->to_string(n)

*/