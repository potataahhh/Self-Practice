#include <bits/stdc++.h>
using namespace std;

bool magic(int n)
{
  int sum=0;

  while(n>0 || sum>9)
  {
    if(n==0)
    {
      n=sum;
      sum=0;
    }
    sum+= n%10;
    n/=10;
  }
  return (sum==1);
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
        if(magic(n))
        cout<<"Magic number"<<endl;
        else
        cout<<"Not a magic number"<<endl;
      }
    return 0;
}
