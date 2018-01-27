#include <iostream>
#include <cstring>
using namespace std;
int main(int argc, char const *argv[])
{
	int t,k;
	cin>>t;
	string s;
	for (int m = 0; m < t; m++)
	{
		cin>>s;
		cin>>k;
		int count = 0,check = 0;
		for (int i = 0; i < s.length() - k+1; i++ )
		{
			if (s[i] =='-')
			{
				count++;
				for (int j = 0; j < k; j++)
				{
					if (s[i+j]=='-') 
						s[i+j] = '+';
					else s[i+j] = '-';
				}
			}
		}
		
		for (int i = 0; i<s.length();i++)
		{
			if (s[i]=='-')
				check = 1;
		}
		cout<<"Case #"<<m+1<<": ";
		if (!check) cout<<count<<endl;
		else 
			cout<<"IMPOSSIBLE"<<endl;
	}
	return 0;
}