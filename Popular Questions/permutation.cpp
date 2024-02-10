#include<iostream>
using namespace std;

void per(string s, string ans)
{
    if(s.length()==0)
    {
        cout<<ans<<endl;
        return;
    }
        for(int i=0;i<s.length();i++)
        {
            char ch=ans[i];
            string ros = s.substr(0,i)+s.substr(i+1);

            per(ros,ans+ch);
        }
}

int main()
{
    per("ABC", "");
    cout<<endl;
}