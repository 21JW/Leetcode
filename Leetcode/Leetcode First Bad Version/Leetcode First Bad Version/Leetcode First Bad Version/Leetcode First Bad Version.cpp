#include<iostream>
using namespace std;

class Solution {
public:
    int bad;
    int firstBadVersion(int n)
    {
        int result;
        int upper = 1;
        int latter = n;
        int avg = 1;
        while (upper < latter)
        {
            avg = (upper + latter) / 2;
            if (isBadVersion(avg) == true)
            {
                latter = avg;
            }
            if (isBadVersion(avg) == false)
            {
                upper = avg + 1;
            }
        }
        result = latter;
        return result;
    }
    bool isBadVersion(int i)
    {
        bool ret = true;
        if (i >= bad)
        {
            ;
        }
        else
        {
            ret = false;
        }
        return ret;
    }
};


int main()
{
    Solution a;
    a.bad = 7;
    cout<<"First bad version: "<<a.firstBadVersion(25)<<endl;
}