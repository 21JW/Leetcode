#include<iostream>
using namespace std;
#include<string>

bool isPalindrome(string s)
{
    bool result = true;
    int size = s.size();
    int ptr1 = 0;
    int ptr2 = size - 1;
    while (ptr1 < ptr2)
        {
            while (((s[ptr1] >= 65 && s[ptr1] <= 90) || (s[ptr1] >= 97 && s[ptr1] <= 122)|| (s[ptr1] >= 48 && s[ptr1] <= 57)) == 0&&ptr1<=(size-2))
            {
                ptr1++;
            }
            while (((s[ptr2] >= 65 && s[ptr2] <= 90) || (s[ptr2] >= 97 && s[ptr2] <= 122)|| (s[ptr2] >= 48 && s[ptr2] <= 57)) == 0 && ptr2 >0)
            {
                ptr2--;
            }
            if ((s[ptr1] == s[ptr2]) || (abs(s[ptr1] - s[ptr2]) == 32)&&((s[ptr1] >= 65 && s[ptr1] <= 90) || (s[ptr1] >= 97 && s[ptr1] <= 122)))
            {
                ptr1++;
                ptr2--;
                continue;
            }
            if (ptr1 > ptr2)
            {
                ;
            }
            else
            {
                result = false;
                break;
            }
        }
    return result;
}

int main()
{
    string  s1= ".,";
    int ret=isPalindrome(s1);
    cout << "Result: " << ret << endl;
}