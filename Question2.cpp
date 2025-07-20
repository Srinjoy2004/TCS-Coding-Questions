#include <bits/stdc++.h>

using namespace std;
float area(float r)
{
    return (3.14*pow(r,2));
}
int main()
{
    cout<<"enter the diameter "<<endl;
    float d;
    cin>>d;
    float r=d/2;
    cout<<"the area is "<< area(r)<<endl;
    return 0;

}
