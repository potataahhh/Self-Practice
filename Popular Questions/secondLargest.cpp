#include <bits/stdc++.h>
using namespace std;

int second_largest(vector<int>& nums)
{
    int first=0, second=0, i;
    for(i=0; i<nums.size(); i++)
    {
        if(nums[i] > nums[first])
        {
            second = first;
            first = i;
        }
        if(nums[i] > nums[second] && nums[i] != nums[first])
            second = i;
    }
    return second;
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
    while (t--) {
      /* code */
      int n, i, val;
      vector<int> nums;
      cin>>n;
      for(i=0; i<n; i++)
      {
          cin>>val;
          nums.push_back(val);
      }
      int idx = second_largest(nums);
      cout<<"Second Largest element is at "<<idx<<" and is "<<nums[idx]<<endl;
    }
    return 0;
}
