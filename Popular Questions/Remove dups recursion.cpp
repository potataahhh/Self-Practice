#include<iostream>
using namespace std;

string rem(string s)
{
    if(s.length==0)
    return "";

    char ch=s[0];
    string ans=rem(s.substr(1));

    if(ch==ans[0])
    {
        return ans;
    }

    return (ch+ans);
}

int main()
{
    cout<<rem("aaaabbbcccdddd")<<endl;
    return 0;
}