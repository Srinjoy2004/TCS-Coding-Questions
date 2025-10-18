#include <bits/stdc++.h>
using namespace std;
vector<int> twoSum(vector <int>& nums, int size, int sum)
{
    map<int, int> mpp;
    for (int i = 0; i < size; i++)
    {
        int res = sum - nums[i];
        if (mpp.find(res) != mpp.end())
        {
            return {res, nums[i]};
        }
        mpp[nums[i]] = i;
    }
    return {};
}
int main()
{
    vector<int> nums = {0,2,5,7,4,6,10,20-10};
    int target = 10;
    int size = nums.size();
    // cout << twoSum(nums[] ,size,target) <<endl;
    vector<int> res = twoSum(nums, size, target);
    if (res.empty() == true)
        cout << "no pairs found " << endl;
    else
    {
        for (int i = 0; i < res.size(); i++)
        {
            cout << res[i] << " " ;
        }
    }
}