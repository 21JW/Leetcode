#include<vector>
#include<set>
#include<iostream>
using namespace std;
vector<int> twoSum(vector<int>& nums, int target)
{
    vector<int>result;
    int num1 = 0;
    int num1cordin = -1;
    int num2cordin = -1;
    int i = 0;
    int numfind = 0;
    multiset<int>s1;
    int size = nums.size();
    for (i = 0;i < size;i++)
    {
        s1.insert(nums[i]);
    }
    for (i = 0;i < size;i++)
    {
        numfind = target - nums[i];
        if (numfind == nums[i] && s1.count(numfind) == 1)
        {
            continue;
        }
        set<int>::iterator pos = s1.find(numfind);
        if (pos == s1.end())
        {
            continue;
        }
        else
        {
            int num1 = nums[i];
            num1cordin = i;
            break;
        }
    }
    if (num1cordin == -1)
    {
        cout << "Not exists" << endl;
    }
    else
    {
        for (i = num1cordin + 1;i < size;i++)
        {
            if (nums[i] == numfind)
            {
                num2cordin = i;
                break;
            }
        }
        result.push_back(num1cordin);
        result.push_back(num2cordin);
        cout << "num1cordin: " << num1cordin << endl;
        cout << "num2cordin: " << num2cordin << endl;
    }
    return result;
}
