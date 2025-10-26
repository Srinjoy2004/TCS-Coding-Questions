// decimal to hexadecimal
#include <bits/stdc++.h>
using namespace std;
int binary_to_decimal(string n)

{
    int i = 0;
    int sum = 0;
    while (n > 0)
    {
        int digit = n % 10;
        n = n / 10;
        int a = (int)round(pow(2, i));
        sum = sum + digit * a;
        i++;
    }
}
int main()
{
    cout << "enter the binary number :";
    string n;
    cin >> n;
    cout << endl;
    cout << "the respective decimal value is " << binary_to_decimal(n);
}
