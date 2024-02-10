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
    int n,dig,sum=0;
    cin>>n;

    while(n>0)
    {
      dig=n%10;
      sum+=dig;
      n/=10;
    }
    cout<<sum<<endl;
  }
  return 0;
}
