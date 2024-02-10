#include<iostream>
using namespace std;

string aX(string s)
{
    if(s.length()==0)
    {
        return "";
    }
    char ch=s[0];
    string ans = aX(s.substr(1));
    
    if(ch=='x')
    {
        return (ans+ch);
    }
    return (ch+ans);
}

int main()
{
    cout<<aX("axsffsxsafsaxxdsgd")<<endl;
    
    return 0;
}