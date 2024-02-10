#include<bits/stdc++.h>
using namespace std;

int main()
{

  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("input3.txt","r",stdin);
    freopen("output3.txt","w",stdout);
    #endif

  int t;
  cin>>t;
  while(t--)
  {
    char s[50];
    int i,n;
    int flag=0;
    cin>>s;
    n=strlen(s);

    for(i=0;i<n;i++)
    {
      if(s[i]!=s[n-i-1])
      {
        flag=1;
        break;
      }
    }

    if(flag)
    {
      cout<<"It is not a palindromic string"<<endl;
    }
    else
    {
      cout<<"It is a palindromic string"<<endl;
    }
  }
  return 0;
}
