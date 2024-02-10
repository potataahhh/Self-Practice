#include<bits/stdc++.h>
using namespace std;

bool func(int i , string &s)
{
	if(i>=s.size()/2)
		return true;
	if(s[i]!=s[s.size()-i-1]) return false;
	return func(i+1,s);
}

int main()
{
	ios_base::sync_with_stdio(false);
  cin.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("input3.txt","r",stdin);
    freopen("output3.txt","w",stdout);
    #endif

    string s="MADAM";
    cout<<func(0,s);
    return 0;
}