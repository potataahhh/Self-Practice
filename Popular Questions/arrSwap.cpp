#include<bits/stdc++.h>
using namespace std;

int func(int i,int arr[] , int n)
{
	if(i>=n/2)
	return 0;
	swap(arr[i],arr[n-i-1]);
	func(i+1,arr,n);
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
    func(0,arr,n);

    for(int i=0;i<n;i++)
    {
    	cout<<arr[i]<<" ";
    }
}