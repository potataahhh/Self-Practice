#include<bits/stdc++.h>
using namespace std;

func(int n)
{
  static int n1=0,n2=1,n3;
  if(n>0)
  {
    n3=n1+n2;
    n1=n2;
    n2=n3;
    cout<<n3<<" ";
    func(n-1);
  }
}

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
      int n;
      cin>>n;
      cout<<"0 "<<"1 ";
      func(n-2);

    // int n1=0,n2=1,i,n;             // brute force
    // cin>>n;
    // cout<<n1<<" "<<n2<<" ";
    //
    // for(i=2;i<n;++i)
    // {
    //   int n3=n1+n2;
    //   cout<<n3<<" ";
    //   n1=n2;
    //   n2=n3;
    // }
  }
  return 0;
}
