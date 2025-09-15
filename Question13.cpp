#include<bits/stdc++.h>
using namespace std;
int display_number_same_order(int n)
{
    //1234
    // 1 2 3 4
    string s=to_string(n);
    for(char c:s)
    {
        cout<<c<<" ";
    }
}
int main()
{   int n;
    cout<<"enter the number"<<endl;
    cin>> n;
    display_number_same_order(n);

}