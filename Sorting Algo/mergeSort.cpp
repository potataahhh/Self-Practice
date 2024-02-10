#include<bits/stdc++.h>
using namespace std;

void merge(vector<int> &arr,int low,int mid,int high)
{
  vector<int> temp;
  int left = low;
  int right = mid+1;

  while(left<=low && right<=high)
  {
    if(arr[left]<=arr[right])
    {
      temp.push_back(arr[left]);
      left++;
    }
    else
    {
      temp.push_back(arr[right]);
      right++;
    }
  }

  while(left<=mid)
  {
    temp.push_back(arr[left]);
    left++;
  }

  while(right<=high)
  {
    temp.push_back(arr[right]);
    right++;
  }

  for(int i=low;i<=high;i++)
  {
    arr[i]=temp[i-low];
  }

}

void mS(vector<int> &arr , int low , int high)
{
  if(low==high) return;
  int mid = (low+high)/2;
  mS(arr,low,mid);
  mS(arr,mid+1,high);
  merge(arr,low,mid,high);
}


int main(vector<int>arr , int n)
{
	ios_base::sync_with_stdio(false);
  cin.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("input3.txt","r",stdin);
    freopen("output3.txt","w",stdout);
    #endif
    
    mS(arr,0,n-1);
    
}