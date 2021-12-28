#include<iostream>
using namespace std;
#include<string>
#include<set>

bool isAnagram(string s, string t)
{
	bool result = false;
	if (s.size() != t.size())
	{
		;
	}
	else
	{
		int i = 0;
		multiset<string>s1, s2;
		for (i = 0;i < s.size();i++)
		{
			string sub1 = s.substr(i, 1);
			string sub2 = t.substr(i, 1);
			s1.insert(sub1);
			s2.insert(sub2);
		}
		for (multiset<string>::iterator it = s1.begin();it != s1.end();it++)
		{
			cout << *it;
		}
		cout << endl;
		for (multiset<string>::iterator it = s2.begin();it != s2.end();it++)
		{
			cout << *it;
		}
		cout << endl;

		if (s1 == s2)
		{
			result = true;
		}
	}
	return result;
}

int main()

{
	string s = "rat";
	string t = "car";
	bool ret = isAnagram(s,t);
	cout << "result: " << ret << endl;
}