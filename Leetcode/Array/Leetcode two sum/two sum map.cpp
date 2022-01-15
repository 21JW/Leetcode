#include<vector>
#include<map>
#include<iostream>
using namespace std;
vector<int> twoSummap(vector<int>& nums, int target)
{
    vector<int>result;
    int num1cordin = -1;
    int num2cordin = -1;
    int i = 0;
    int numfind = 0;
    multimap<int,int>m1;
    int size = nums.size();
    for (i = 0;i < size;i++)
    {
        m1.insert(pair<int,int>(nums[i],i));
    }
    for (i = 0;i < size;i++)
    {
        numfind = target - nums[i];
        if (numfind == nums[i] && m1.count(numfind) == 1)
        {
            continue;
        }
        multimap<int,int>::iterator pos = m1.find(numfind);
        if (pos == m1.end()||(*pos).second==i)
        {
            continue;
        }
        else
        {
            num1cordin = i;
            num2cordin = (*pos).second;
            cout << "num1cordin: " << num1cordin << endl;
            cout << "num2cordin: " << num2cordin << endl;
            result.push_back(num1cordin);
            result.push_back(num2cordin);
            break;
        }
    }
    if (num1cordin == -1)
    {
        cout << "Not exists" << endl;
    }
    else
    {
        return result;
    }
}
int main()
{
    vector<int>nums;
    vector<int>ret;
    nums.push_back(3);
    nums.push_back(3);
    nums.push_back(4);
    nums.push_back(7);
    int target = 6;
    ret = twoSummap(nums, target);
}