#include <iostream>
#include <cstring>
using namespace std;

int main(int argc, char const *argv[])
{
	int test;
	string s;
	cin>>test;
	for (int t = 0; t<test; t++)
	{
		cin>>s;
		for (int i = 0; i < s.length() - 1; i++)
		{
			if (s[i] > s[i+1]) 
			{
				s[i] = s[i] - 1;
				for (int j = i+1; j < s.length(); j++)
					s[j] = '9';
			}

		}
		cout<<"Case #"<<t+1<<": ";
		if (s[0]!='0') cout<<s<<endl;
		else 
		{
			for (int i = 1; i<s.length(); i++)
				cout<<s[i];
			cout<<endl;
		}
	}
	return 0;
}