#include<vector>
#include<map>
#include<iostream>
using namespace std;

vector<int> twoSummap(vector<int>& nums, int target)
{
    vector<int>result;
    int i = 1;
    int numfind = 0;
    multimap<int, int>m1;
    int size = nums.size();
    m1.insert(pair<int, int>(nums[0], 0));
    for (i = 1;i < size;i++)
    {
        m1.insert(pair<int, int>(nums[i], i));
        numfind = target - nums[i];
        multimap<int, int>::iterator pos = m1.find(numfind);
        if (pos!=m1.end()&&(*pos).second>=0 && (*pos).second < i)
        {
            result.push_back((*pos).second);
            result.push_back(i);
            break;
        }
        else
        {
            continue;
        }
    }
        return result;
}
int main()
{
    vector<int>nums;
    vector<int>ret;
    nums.push_back(6);
    nums.push_back(3);
    nums.push_back(4);
    nums.push_back(7);
    int target = 6;
    ret = twoSummap(nums, target);
    cout << "First: " << ret[0] << endl;
    cout << "Second: " << ret[1] << endl;
}