#include<iostream>
using namespace std;
#include<string>

int main()
{
	string str1= "loveleetcode";

    int result = -1;
    int size = str1.size();
    int i = 0;
    for (i = 0;i < size;i++)
    {
        string sub = str1.substr(i, 1);
        int pos1 = str1.find(sub);
        int pos2 = str1.rfind(sub);
        if (pos1 == pos2)
        {
            result = i;
            break;
        }
        else
        {
            continue;
        }
    }
    cout << "Result: " << result << endl;
}
