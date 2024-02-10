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
    int n,temp,dig,sum=0;
    cin>>n;
    temp=n;

    while(n>0)
    {
      dig=n%10;
      sum+=(dig*dig*dig);
      n=n/10;
    }

    if(temp==sum)
    {
      cout<<"Armstrong"<<endl;
    }
    else
    {
      cout<<"Not Armstrong"<<endl;
    }
  }
  return 0;
}
