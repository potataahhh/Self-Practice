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
    int a[50];
    int i,j,n,temp;
    cin>>n;

    for(i=0;i<n;i++)
    {
      cin>>a[i];
    }

    for(i=0,j=n-1;i<n/2;i++,j--)
    {
      temp=a[i];
      a[i]=a[j];
      a[j]=temp;
    }

    for(i=0;i<n;i++)
    {
      cout<<a[i]<<" ";
    }
  }
  return 0;
}
