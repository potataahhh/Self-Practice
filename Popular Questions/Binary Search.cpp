#include<iostream>
using namespace std;

int BS(int arr[],int n, int k)
{
    int start=0;
    int end=n;
    while(s<=e)
    {
        int mid=(start+end)/2;
        if(arr[mid]==k)
        {
            return mid;
        }
        else if(arr[mid]>k)
        {
            e=mid-1;
        }
        else
        {
            s=mid+1;
        }
    }
    return -1;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

      #ifndef ONLINE_JUDGE
      freopen("input3.txt","r",stdin);
      freopen("output3.txt","w",stdout);
      #endif
      
    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    int k;
    cin>>k;

    cout<<BS(arr,n,k)<<endl;

    return 0;
}



