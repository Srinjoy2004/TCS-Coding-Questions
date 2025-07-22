#include <bits/stdc++.h>
using namespace std;
bool prime(int n)
{
    for (int i = 2; i < sqrt(n); i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}
int main()
{
    int num;
    cout << "enter a number " << endl;
    cin >> num;
    
    if (prime(num) == true)
        cout << "prime number";
    else
        cout << "not a prime number ";
}


#include <iostream>
using namespace std;

// Recursive function to check prime
bool isPrime(int n, int i = 2)
{
    if (n <= 2)
        return (n == 2); // 2 is prime, anything less is not
    if (n % i == 0)
        return false;
    if (i * i > n)
        return true;
    
    return isPrime(n, i + 1);
}

int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (isPrime(num))
        cout << "Prime number";
    else
        cout << "Not a prime number";

    return 0;
}
