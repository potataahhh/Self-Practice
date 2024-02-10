#include<iostream>
#include<vector>
#include<climits>
using namespace std;

int max(vector <int> arr)
{
  int n = arr.size();
  int sum = INT_MIN;
  for(int i=0;i<n-1;i++)
  {
    int c_sum=0;
    for(int j=i;j<n-1;j++)
    {
      c_sum=arr[j];
      if(c_sum>sum)
      {
        sum=c_sum;
      }
    }
  }
  return sum;
}
int main()
{
  int sum;
  cout<<sum;
}
