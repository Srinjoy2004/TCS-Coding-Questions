#include <bits/stdc++.h>
using namespace std;
int first_occurance(int target, int n, vector<int> &nums)
{
    for (int i = 0; i < n; i++)
    {
        if (target == nums[i])
        {

            return i;
            break;
        }
    }
    return -1;
}

int last_occurance(int target, int n, vector<int> &nums)
{
    for (int i = n - 1; i >= 0; i--)
    {
        if (target == nums[i])
        {
            return i;
            break;
        }
    }
    return -1;
}
int main()
{
    vector<int> nums = {1, 2, 3, 3, 3, 4, 5, 6};
    int n = nums.size();
    int target;
    cout << "enter the target";
    cin >> target;
    int first_occ = first_occurance(target, n, nums);
    cout << "the first occurance is " << first_occ << endl;
    int last_occ = last_occurance(target, n, nums);
    cout << "the last occurance is " << last_occ << endl;
}