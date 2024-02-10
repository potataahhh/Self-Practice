#include<bits/stdc++.h>
using namespace std;

bool func(int i,vector<int> &ds,int s, int sum, int arr[], int n)
{
    if(i==n)
    {
      if(s==sum)
      {
      for(auto it:ds)
        cout<<it<<" ";
        cout<<endl;
        return true;
      }
      return false;
    }

    // take condition 

    ds.push_back(arr[i]);
    s+=arr[i];

    if(func(i+1,ds,s,sum,arr,n)){
      return true;
    }

    s-=arr[i];
    ds.pop_back();

    // not take

    if(func(i+1,ds,s,sum,arr,n)){
      return true;
      return false;
    }
}

int main()
{
	// ios_base::sync_with_stdio(false);
  // cin.tie(NULL);

  //   #ifndef ONLINE_JUDGE
  //   freopen("input3.txt","r",stdin);
  //   freopen("output3.txt","w",stdout);
  //   #endif
    
    int arr[]={1,2,1};
    int sum=2;
    int n=3;

    vector<int> ds;

    func(0,ds,0,sum,arr,n);
    
}