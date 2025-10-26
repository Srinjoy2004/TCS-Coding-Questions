//using loop

// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {   int sum =0;
//     int f0=0;
//     int f1=1;
//     int n;
//     cout<<"enter the term ";
//     cin>>n;
//     for (int i=2;i<=n;i++)
//     {
//           sum= f0+f1;
//           cout<<sum<<" ";
//           f0=f1;
//           f1=sum;
//     }
//     cout<<endl;
//     cout<<sum;
// }

//using recursion

#include <iostream>
using namespace std;

// Recursive function to find nth Fibonacci number
int fibonacci(int n) {
    if (n == 0)
        return 0;   // base case F0
    if (n == 1)
        return 1;   // base case F1
    return fibonacci(n - 1) + fibonacci(n - 2); // recursive call
}

int main() {
    int n;
    cout << "Enter number of terms: ";
    cin >> n;

    cout << "Fibonacci Series: ";
    for (int i = 0; i < n; i++) {
        cout << fibonacci(i) << " ";
    }
    cout << endl;

    return 0;
}
